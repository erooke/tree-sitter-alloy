const comma_repeat = (term) => seq(repeat(seq(term, ",")), term);

module.exports = grammar({
  name: "alloy",

  word: ($) => $.name,

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => seq($.module_decl),

    module_decl: ($) =>
      seq("module", $.qual_name, optional(seq("[", comma_repeat($.name), "]"))),

    paragraph: ($) => seq("fact", "{", $.name, "}"),

    name: (_) => /[a-zA-Z0-9_"]+/,

    qual_name: ($) => seq(repeat(seq($.name, "/")), $.name),

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
