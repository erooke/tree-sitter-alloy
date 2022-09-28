const commaRepeat = (expression) => {
  return seq(repeat(seq(expression, ",")), expression);
};

module.exports = grammar({
  name: "alloy",

  conflicts: ($) => [[$._expression, $.decl]],

  rules: {
    source_file: ($) => repeat($._expression),

    _expression: ($) =>
      choice($.unary_expression, $.name, $.quantified_expression),

    quantified_expression: ($) =>
      seq(
        field("quantifier", "no"),
        commaRepeat($.decl),
        choice($.block, $.bar)
      ),

    unary_expression: ($) => seq("no", $._expression),

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

    name: (_) => /[a-zA-Z0-9_]+/,
  },
});
