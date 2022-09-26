const binary = (left, op, right) => {
  return seq(
    field("left", left),
    field("operator", op),
    field("right", right)
  )
}

module.exports = grammar({
  name: "Alloy",

  rules: {
    source_file: ($) =>
      seq(optional($.module_decl), optional(repeat($._declaration))),

    module_decl: ($) => seq("module", $.qual_name),

    _declaration: ($) =>
      choice(
        $.sig_decl,
        $.enum_decl,
        $.fact_decl
        // TODO implement the rest of these
      ),

    _expression: $ => choice(
      $.constant_expression,
      $.qual_name,
      $.binary_expression,
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

    constant_expression: $ => choice(
      seq(optional("-"), /[0-9]+/),
      "none",
      "univ",
      "iden",
    ),

    block: $ => seq("{",
      optional($._expression),
      "}"), // TODO process expressions

    fact_decl: ($) =>
      seq("fact", field("name", optional($.name)), $.block),

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
        // TODO: field declarations
        "}"
      ),

    sig_extension: ($) =>
      choice(
        seq("extends", $.qual_name),
        seq("in", optional(repeat(seq($.qual_name, "+"))), $.qual_name)
      ),

    mult: ($) => choice("lone", "some", "one"),

    name: ($) => /[a-zA-Z0-9_]+/,

    qual_name: ($) =>
      token(
        seq(
          optional("this/"),
          repeat(seq(/[a-zA-Z0-9_]+/, "/")),
          /[a-zA-Z0-9_]+/
        )
      ),

  },
});
