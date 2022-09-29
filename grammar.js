const commaRepeat = (expression) => {
  return seq(repeat(seq(expression, ",")), expression);
};

module.exports = grammar({
  name: "alloy",

  extras: ($) => [$.comment, /\s/],

  conflicts: ($) => [
    [$.decl, $._expression],
    [$.unary_expression, $.quantified_expression],
    [$.function_call, $.quantified_expression],
    [$.implication_expression, $.quantified_expression],
    [$.scope, $.typescope],
    [$._block_or_bar, $.implication_expression],
    [$._block_or_bar, $.function_call],
  ],

  rules: {
    source_file: ($) =>
      seq(optional($.module_decl), optional(repeat($._declaration))),

    module_decl: ($) => seq("module", $.name),

    _declaration: ($) =>
      choice(
        $.sig_decl,
        $.enum_decl,
        $.fact_decl,
        $.fun_decl,
        $.pred_decl,
        $.cmd_decl
      ),

    cmd_decl: ($) =>
      seq(
        optional(seq($.name, ":")),
        choice("run", "check"),
        choice($.name, seq(optional($.name), $.block)),
        optional($.scope)
      ),

    scope: ($) =>
      choice(
        seq("for", $.number, optional(seq("but", commaRepeat($.typescope)))),
        seq("for", commaRepeat($.typescope))
      ),

    typescope: ($) => seq(optional("exactly"), $.number, $.name),

    pred_decl: ($) => seq("pred", $.name, optional($.para_decls), $.block),

    fun_decl: ($) =>
      seq(
        "fun",
        $.name,
        optional($.para_decls),
        ":",
        $._expression,
        "{",
        $._expression,
        "}"
      ),

    _expression: ($) =>
      choice(
        $.constant_expression,
        $.name,
        seq("@", $.name),
        $.unary_expression,
        $.binary_expression,
        $.function_call,
        $.implication_expression,
        $.let_expression,
        $.quantified_expression,
        $.prime_expression,
        $.block,
        $.set_expression,
        seq("(", $._expression, ")")
      ),

    set_expression: ($) => seq("{", commaRepeat($.decl), $._block_or_bar, "}"),

    let_expression: ($) =>
      prec.right(seq("let", commaRepeat($.let_decl), $._block_or_bar)),

    let_decl: ($) => seq($.name, "=", $._expression),

    implication_expression: ($) =>
      prec.right(
        seq(
          $._expression,
          choice("=>", "implies"),
          $._expression,
          optional(seq("else", $._expression))
        )
      ),

    function_call: ($) =>
      seq($._expression, "[", commaRepeat($._expression), "]"),

    quantified_expression: ($) =>
      seq(
        field("quantifier", choice("no", "all", "sum", "lone", "some", "one")),
        commaRepeat($.decl),
        $._block_or_bar
      ),

    prime_expression: ($) => prec(20, seq($._expression, "'")),

    arrow: (_) =>
      token(
        seq(
          optional(choice("lone", "some", "one", "set")),
          "->",
          optional(choice("lone", "some", "one", "set"))
        )
      ),

    binary_expression: ($) => {
      const comparison = seq(
        optional(choice("!", "not")),
        choice("in", "=", "<", ">", "=", "<=", ">=")
      );

      const table = [
        [19, "."],
        [17, choice("<:", ":>")],
        [16, $.arrow],
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

    _block_or_bar: ($) => choice($.block, seq("|", $._expression)),

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
        seq("extends", $.name),
        seq("in", optional(repeat(seq($.name, "+"))), $.name)
      ),

    // Declarations

    decl: ($) =>
      seq(
        optional("disj"),
        commaRepeat($.name),
        ":",
        optional("disj"),
        field("type", $._expression)
      ),

    para_decls: ($) =>
      choice(
        seq("(", commaRepeat($.decl), ")"),
        seq("[", commaRepeat($.decl), "]")
      ),

    field_decl: ($) => seq(optional("var"), $.decl),

    mult: (_) => choice("lone", "some", "one"),

    name: (_) =>
      seq(
        optional("this/"),
        /[a-zA-Z0-9_"]+/,
        repeat(seq("/", /[a-zA-Z0-9_"]+/))
      ),

    comment: (_) =>
      token(
        choice(
          seq("//", /.*/),
          seq("--", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
});
