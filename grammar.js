module.exports = grammar({
  name: "alloy",

  extras: ($) => [$.comment, /\s/],

  rules: {
    name: (_) => /[a-zA-Z0-9_"]+/,

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
