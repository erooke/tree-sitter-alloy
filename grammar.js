const commaRepeat = (expression) => {
  return seq(repeat(seq(expression, ",")), expression);
};

module.exports = grammar({
  name: "Alloy",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) =>
      seq(optional($.module_decl), optional(repeat($._declaration))),

    module_decl: ($) => seq("module", $.qual_name),

    _declaration: ($) =>
      choice(
        $.sig_decl,
        $.enum_decl,
        $.fact_decl,
        $.fun_decl,
        $.pred_decl,
        $.cmd_decl
        // TODO implement the rest of these
      ),

    cmd_decl: ($) =>
      seq(
        optional(seq($.name, ":")),
        choice("run", "check"),
        choice($.qual_name, $.block),
        optional($.scope)
      ),

    scope: ($) =>
      choice(
        seq("for", $.number, optional(seq("but", commaRepeat($.typescope)))),
        seq("for", commaRepeat($.typescope))
      ),

    typescope: ($) => seq(optional("exactly"), $.number, $.qual_name),

    pred_decl: ($) =>
      seq(
        "pred",
        $.name,
        //TODO add paradecls
        $.block
      ),

    fun_decl: ($) =>
      seq(
        "fun",
        $.name,
        //TODO add paradecls
        ":",
        $._expression,
        "{",
        $._expression,
        "}"
      ),

    _expression: ($) =>
      choice(
        $.unary_expression,
        $.constant_expression,
        $.qual_name,
        $.binary_expression
      ),

    binary_expression: ($) => {
      const comparison = seq(
        optional(choice("!", "not")),
        choice("in", "=", "<", ">", "=", "<=", ">=")
      );
      const table = [
        [19, "."],
        [17, choice("<:", ":>")],
        [16, "->"],
        [15, "&"],
        [14, "++"],
        [12, choice("+", "-")],
        [09, comparison],
        [07, choice("until", "releases", "since", "triggered")],
        [06, choice("&&", "and")],
        [04, choice("<=>", "iff")],
        [03, choice("||", "or")],
        [01, ";"],
      ];
      return choice(
        ...table.map(([precidence, operator]) => {
          return prec.left(
            precidence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          );
        })
      );
    },

    unary_expression: ($) => {
      const table = [
        [21, choice("~", "^", "*")],
        [13, "#"],
        [11, choice("no", "some", "lone", "one", "set")],
        [
          08,
          choice(
            "!",
            "not",
            "always",
            "eventually",
            "after",
            "before",
            "historically",
            "once"
          ),
        ],
        [02, choice("let", "no", "some", "lone", "one", "sum")],
      ];

      return choice(
        ...table.map(([precidence, operator]) => {
          return prec(
            precidence,
            seq(field("operator", operator), field("operand", $._expression))
          );
        })
      );
    },

    constant_expression: ($) => choice($.number, "none", "univ", "iden"),

    number: (_) => seq(optional("-"), /[0-9]+/),

    block: ($) => seq("{", repeat($._expression), "}"),

    fact_decl: ($) => seq("fact", field("name", optional($.name)), $.block),

    enum_decl: ($) =>
      seq("enum", $.name, "{", optional(repeat(seq($.name, ","))), $.name, "}"),

    sig_decl: ($) =>
      seq(
        optional("var"),
        optional("abstract"),
        optional($.mult),
        "sig",
        optional(repeat(seq($.name, ","))),
        $.name,
        optional($.sig_extension),
        "{",
        optional(commaRepeat($.field_decl)),
        "}",
        optional($.block)
      ),

    sig_extension: ($) =>
      choice(
        seq("extends", $.qual_name),
        seq("in", optional(repeat(seq($.qual_name, "+"))), $.qual_name)
      ),

    field_decl: ($) =>
      seq(
        optional("var"),
        optional("disj"),
        commaRepeat($.name),
        ":",
        optional("disjoint"),
        field("type", $._expression)
      ),

    mult: (_) => choice("lone", "some", "one"),

    name: (_) => /[a-zA-Z0-9_]+/,

    qual_name: (_) =>
      token(
        seq(
          optional("this/"),
          repeat(seq(/[a-zA-Z0-9_]+/, "/")),
          /[a-zA-Z0-9_]+/
        )
      ),

    comment: (_) =>
      token(
        choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
