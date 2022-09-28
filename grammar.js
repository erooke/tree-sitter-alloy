const commaRepeat = (expression) => {
  return seq(repeat(seq(expression, ",")), expression);
};

module.exports = grammar({
  name: "alloy",

  rules: {
    source_file: ($) => repeat($._expression),

    _expression: ($) =>
      choice($.binary_expression, $.quantified_expression, $.unary_expression),

    quantified_expression: ($) =>
      seq(
        field("quantifier", choice("all", "sum", "mult")),
        commaRepeat($.decl),
        choice($.block, seq("|", $._expression))
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

    number: (_) => seq(optional("-"), /[0-9]+/),

    block: ($) => seq("{", repeat($._expression), "}"),
    bar: ($) => seq("|", $._expression),

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

    name: (_) => /[a-zA-Z0-9_]+/,
  },
});
