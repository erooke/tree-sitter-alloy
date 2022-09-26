module.exports = grammar({
  name: "Alloy",

  rules: {
    source_file: ($) =>
      seq(optional($.module_decl))

    module_decl: ($) => seq("module", $.qual_name),

    name: ($) => /[a-zA-Z0-9_]+/,

    qual_name: ($) => seq(optional("this/"), repeat(seq($.name, "/")), $.name),
  },
});
