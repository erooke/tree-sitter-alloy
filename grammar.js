module.exports = grammar({
  name: "Alloy",

  rules: {
    source_file: ($) =>
      seq(optional($.module_decl), optional(repeat($.declaration))),

    module_decl: ($) => seq("module", $.qual_name),

    declaration: ($) =>
      choice(
        $.sig_decl
        // TODO implement the rest of these
      ),

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

    qual_name: ($) => seq(optional("this/"), repeat(seq($.name, "/")), $.name),
  },
});
