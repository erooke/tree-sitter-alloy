#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_all = 1,
  anon_sym_sum = 2,
  anon_sym_mult = 3,
  anon_sym_COMMA = 4,
  anon_sym_PIPE = 5,
  anon_sym_DOT = 6,
  anon_sym_LT_COLON = 7,
  anon_sym_COLON_GT = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_AMP = 10,
  anon_sym_PLUS_PLUS = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_BANG = 14,
  anon_sym_not = 15,
  anon_sym_in = 16,
  anon_sym_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_until = 22,
  anon_sym_releases = 23,
  anon_sym_since = 24,
  anon_sym_triggered = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_and = 27,
  anon_sym_LT_EQ_GT = 28,
  anon_sym_iff = 29,
  anon_sym_PIPE_PIPE = 30,
  anon_sym_or = 31,
  anon_sym_SEMI = 32,
  anon_sym_TILDE = 33,
  anon_sym_CARET = 34,
  anon_sym_STAR = 35,
  anon_sym_POUND = 36,
  anon_sym_no = 37,
  anon_sym_some = 38,
  anon_sym_lone = 39,
  anon_sym_one = 40,
  anon_sym_set = 41,
  anon_sym_always = 42,
  anon_sym_eventually = 43,
  anon_sym_after = 44,
  anon_sym_before = 45,
  anon_sym_historically = 46,
  anon_sym_once = 47,
  anon_sym_let = 48,
  aux_sym_number_token1 = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_disj = 52,
  anon_sym_COLON = 53,
  anon_sym_LPAREN = 54,
  anon_sym_RPAREN = 55,
  anon_sym_LBRACK = 56,
  anon_sym_RBRACK = 57,
  anon_sym_var = 58,
  sym_name = 59,
  sym_source_file = 60,
  sym__expression = 61,
  sym_quantified_expression = 62,
  sym_binary_expression = 63,
  sym_unary_expression = 64,
  sym_block = 65,
  sym_decl = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_quantified_expression_repeat1 = 68,
  aux_sym_decl_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_all] = "all",
  [anon_sym_sum] = "sum",
  [anon_sym_mult] = "mult",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_AMP] = "&",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [anon_sym_in] = "in",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_until] = "until",
  [anon_sym_releases] = "releases",
  [anon_sym_since] = "since",
  [anon_sym_triggered] = "triggered",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_iff] = "iff",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
  [anon_sym_SEMI] = ";",
  [anon_sym_TILDE] = "~",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_no] = "no",
  [anon_sym_some] = "some",
  [anon_sym_lone] = "lone",
  [anon_sym_one] = "one",
  [anon_sym_set] = "set",
  [anon_sym_always] = "always",
  [anon_sym_eventually] = "eventually",
  [anon_sym_after] = "after",
  [anon_sym_before] = "before",
  [anon_sym_historically] = "historically",
  [anon_sym_once] = "once",
  [anon_sym_let] = "let",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_disj] = "disj",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_var] = "var",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_quantified_expression] = "quantified_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_block] = "block",
  [sym_decl] = "decl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quantified_expression_repeat1] = "quantified_expression_repeat1",
  [aux_sym_decl_repeat1] = "decl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_mult] = anon_sym_mult,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_releases] = anon_sym_releases,
  [anon_sym_since] = anon_sym_since,
  [anon_sym_triggered] = anon_sym_triggered,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_iff] = anon_sym_iff,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_lone] = anon_sym_lone,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_eventually] = anon_sym_eventually,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_historically] = anon_sym_historically,
  [anon_sym_once] = anon_sym_once,
  [anon_sym_let] = anon_sym_let,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_disj] = anon_sym_disj,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_var] = anon_sym_var,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_quantified_expression] = sym_quantified_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_block] = sym_block,
  [sym_decl] = sym_decl,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quantified_expression_repeat1] = aux_sym_quantified_expression_repeat1,
  [aux_sym_decl_repeat1] = aux_sym_decl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_releases] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_since] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triggered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventually] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_historically] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_once] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_quantified_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quantified_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operand = 2,
  field_operator = 3,
  field_quantifier = 4,
  field_right = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_quantifier] = "quantifier",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 4},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_quantifier, 0},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_type, 2},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [11] =
    {field_type, 3},
  [12] =
    {field_type, 4},
  [13] =
    {field_type, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '^') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '~') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '^') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '~') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'j') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(3);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '^') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '~') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_mult);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_mult);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_releases);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_since);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_triggered);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_lone);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_lone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_one);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_always);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_eventually);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_eventually);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_after);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_before);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_historically);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_historically);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_once);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_disj);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_disj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'j') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 84},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 84},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 84},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_mult] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_releases] = ACTIONS(1),
    [anon_sym_since] = ACTIONS(1),
    [anon_sym_triggered] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_iff] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_lone] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_eventually] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_historically] = ACTIONS(1),
    [anon_sym_once] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_disj] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym__expression] = STATE(27),
    [sym_quantified_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_all] = ACTIONS(5),
    [anon_sym_sum] = ACTIONS(7),
    [anon_sym_mult] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(17),
    [anon_sym_lone] = ACTIONS(17),
    [anon_sym_one] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_always] = ACTIONS(9),
    [anon_sym_eventually] = ACTIONS(9),
    [anon_sym_after] = ACTIONS(9),
    [anon_sym_before] = ACTIONS(9),
    [anon_sym_historically] = ACTIONS(9),
    [anon_sym_once] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(21),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_all] = ACTIONS(53),
    [anon_sym_sum] = ACTIONS(53),
    [anon_sym_mult] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_no] = ACTIONS(55),
    [anon_sym_some] = ACTIONS(53),
    [anon_sym_lone] = ACTIONS(53),
    [anon_sym_one] = ACTIONS(53),
    [anon_sym_set] = ACTIONS(53),
    [anon_sym_always] = ACTIONS(53),
    [anon_sym_eventually] = ACTIONS(53),
    [anon_sym_after] = ACTIONS(53),
    [anon_sym_before] = ACTIONS(53),
    [anon_sym_historically] = ACTIONS(53),
    [anon_sym_once] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_all] = ACTIONS(59),
    [anon_sym_sum] = ACTIONS(59),
    [anon_sym_mult] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_COLON_GT] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_until] = ACTIONS(59),
    [anon_sym_releases] = ACTIONS(59),
    [anon_sym_since] = ACTIONS(59),
    [anon_sym_triggered] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_LT_EQ_GT] = ACTIONS(59),
    [anon_sym_iff] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_no] = ACTIONS(61),
    [anon_sym_some] = ACTIONS(59),
    [anon_sym_lone] = ACTIONS(59),
    [anon_sym_one] = ACTIONS(59),
    [anon_sym_set] = ACTIONS(59),
    [anon_sym_always] = ACTIONS(59),
    [anon_sym_eventually] = ACTIONS(59),
    [anon_sym_after] = ACTIONS(59),
    [anon_sym_before] = ACTIONS(59),
    [anon_sym_historically] = ACTIONS(59),
    [anon_sym_once] = ACTIONS(59),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_all] = ACTIONS(63),
    [anon_sym_sum] = ACTIONS(63),
    [anon_sym_mult] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_in] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_until] = ACTIONS(63),
    [anon_sym_releases] = ACTIONS(63),
    [anon_sym_since] = ACTIONS(63),
    [anon_sym_triggered] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_LT_EQ_GT] = ACTIONS(63),
    [anon_sym_iff] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(63),
    [anon_sym_no] = ACTIONS(65),
    [anon_sym_some] = ACTIONS(63),
    [anon_sym_lone] = ACTIONS(63),
    [anon_sym_one] = ACTIONS(63),
    [anon_sym_set] = ACTIONS(63),
    [anon_sym_always] = ACTIONS(63),
    [anon_sym_eventually] = ACTIONS(63),
    [anon_sym_after] = ACTIONS(63),
    [anon_sym_before] = ACTIONS(63),
    [anon_sym_historically] = ACTIONS(63),
    [anon_sym_once] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_all] = ACTIONS(67),
    [anon_sym_sum] = ACTIONS(67),
    [anon_sym_mult] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_LT_COLON] = ACTIONS(67),
    [anon_sym_COLON_GT] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_until] = ACTIONS(67),
    [anon_sym_releases] = ACTIONS(67),
    [anon_sym_since] = ACTIONS(67),
    [anon_sym_triggered] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_LT_EQ_GT] = ACTIONS(67),
    [anon_sym_iff] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_or] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_no] = ACTIONS(69),
    [anon_sym_some] = ACTIONS(67),
    [anon_sym_lone] = ACTIONS(67),
    [anon_sym_one] = ACTIONS(67),
    [anon_sym_set] = ACTIONS(67),
    [anon_sym_always] = ACTIONS(67),
    [anon_sym_eventually] = ACTIONS(67),
    [anon_sym_after] = ACTIONS(67),
    [anon_sym_before] = ACTIONS(67),
    [anon_sym_historically] = ACTIONS(67),
    [anon_sym_once] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_all] = ACTIONS(71),
    [anon_sym_sum] = ACTIONS(71),
    [anon_sym_mult] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_no] = ACTIONS(73),
    [anon_sym_some] = ACTIONS(71),
    [anon_sym_lone] = ACTIONS(71),
    [anon_sym_one] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_always] = ACTIONS(71),
    [anon_sym_eventually] = ACTIONS(71),
    [anon_sym_after] = ACTIONS(71),
    [anon_sym_before] = ACTIONS(71),
    [anon_sym_historically] = ACTIONS(71),
    [anon_sym_once] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(23),
    [anon_sym_COLON_GT] = ACTIONS(23),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(75),
    [anon_sym_releases] = ACTIONS(75),
    [anon_sym_since] = ACTIONS(75),
    [anon_sym_triggered] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_LT_EQ_GT] = ACTIONS(75),
    [anon_sym_iff] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_LT_COLON] = ACTIONS(75),
    [anon_sym_COLON_GT] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_PLUS_PLUS] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_until] = ACTIONS(75),
    [anon_sym_releases] = ACTIONS(75),
    [anon_sym_since] = ACTIONS(75),
    [anon_sym_triggered] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_LT_EQ_GT] = ACTIONS(75),
    [anon_sym_iff] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_until] = ACTIONS(75),
    [anon_sym_releases] = ACTIONS(75),
    [anon_sym_since] = ACTIONS(75),
    [anon_sym_triggered] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_LT_EQ_GT] = ACTIONS(75),
    [anon_sym_iff] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_until] = ACTIONS(75),
    [anon_sym_releases] = ACTIONS(75),
    [anon_sym_since] = ACTIONS(75),
    [anon_sym_triggered] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_LT_EQ_GT] = ACTIONS(75),
    [anon_sym_iff] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_all] = ACTIONS(75),
    [anon_sym_sum] = ACTIONS(75),
    [anon_sym_mult] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_until] = ACTIONS(75),
    [anon_sym_releases] = ACTIONS(75),
    [anon_sym_since] = ACTIONS(75),
    [anon_sym_triggered] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_LT_EQ_GT] = ACTIONS(75),
    [anon_sym_iff] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_some] = ACTIONS(75),
    [anon_sym_lone] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_always] = ACTIONS(75),
    [anon_sym_eventually] = ACTIONS(75),
    [anon_sym_after] = ACTIONS(75),
    [anon_sym_before] = ACTIONS(75),
    [anon_sym_historically] = ACTIONS(75),
    [anon_sym_once] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_all] = ACTIONS(23),
    [anon_sym_sum] = ACTIONS(23),
    [anon_sym_mult] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_COLON] = ACTIONS(23),
    [anon_sym_COLON_GT] = ACTIONS(23),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_until] = ACTIONS(23),
    [anon_sym_releases] = ACTIONS(23),
    [anon_sym_since] = ACTIONS(23),
    [anon_sym_triggered] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [anon_sym_iff] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(25),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_lone] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_always] = ACTIONS(23),
    [anon_sym_eventually] = ACTIONS(23),
    [anon_sym_after] = ACTIONS(23),
    [anon_sym_before] = ACTIONS(23),
    [anon_sym_historically] = ACTIONS(23),
    [anon_sym_once] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_all] = ACTIONS(79),
    [anon_sym_sum] = ACTIONS(79),
    [anon_sym_mult] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_COLON_GT] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_until] = ACTIONS(79),
    [anon_sym_releases] = ACTIONS(79),
    [anon_sym_since] = ACTIONS(79),
    [anon_sym_triggered] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_and] = ACTIONS(79),
    [anon_sym_LT_EQ_GT] = ACTIONS(79),
    [anon_sym_iff] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_or] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_no] = ACTIONS(81),
    [anon_sym_some] = ACTIONS(79),
    [anon_sym_lone] = ACTIONS(79),
    [anon_sym_one] = ACTIONS(79),
    [anon_sym_set] = ACTIONS(79),
    [anon_sym_always] = ACTIONS(79),
    [anon_sym_eventually] = ACTIONS(79),
    [anon_sym_after] = ACTIONS(79),
    [anon_sym_before] = ACTIONS(79),
    [anon_sym_historically] = ACTIONS(79),
    [anon_sym_once] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_all] = ACTIONS(71),
    [anon_sym_sum] = ACTIONS(71),
    [anon_sym_mult] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_LT_COLON] = ACTIONS(71),
    [anon_sym_COLON_GT] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_in] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_until] = ACTIONS(71),
    [anon_sym_releases] = ACTIONS(71),
    [anon_sym_since] = ACTIONS(71),
    [anon_sym_triggered] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_LT_EQ_GT] = ACTIONS(71),
    [anon_sym_iff] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_no] = ACTIONS(73),
    [anon_sym_some] = ACTIONS(71),
    [anon_sym_lone] = ACTIONS(71),
    [anon_sym_one] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_always] = ACTIONS(71),
    [anon_sym_eventually] = ACTIONS(71),
    [anon_sym_after] = ACTIONS(71),
    [anon_sym_before] = ACTIONS(71),
    [anon_sym_historically] = ACTIONS(71),
    [anon_sym_once] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_all] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_mult] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LT_COLON] = ACTIONS(29),
    [anon_sym_COLON_GT] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_until] = ACTIONS(45),
    [anon_sym_releases] = ACTIONS(45),
    [anon_sym_since] = ACTIONS(45),
    [anon_sym_triggered] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_iff] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_no] = ACTIONS(85),
    [anon_sym_some] = ACTIONS(83),
    [anon_sym_lone] = ACTIONS(83),
    [anon_sym_one] = ACTIONS(83),
    [anon_sym_set] = ACTIONS(83),
    [anon_sym_always] = ACTIONS(83),
    [anon_sym_eventually] = ACTIONS(83),
    [anon_sym_after] = ACTIONS(83),
    [anon_sym_before] = ACTIONS(83),
    [anon_sym_historically] = ACTIONS(83),
    [anon_sym_once] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DASH_GT,
    ACTIONS(33), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(47), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(49), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(51), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(41), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [63] = 16,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DASH_GT,
    ACTIONS(33), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(47), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(49), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(51), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(41), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [126] = 16,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DASH_GT,
    ACTIONS(33), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(47), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(49), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(51), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(41), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [189] = 16,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DASH_GT,
    ACTIONS(33), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(47), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(49), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(51), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(41), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [252] = 15,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_sum,
    ACTIONS(109), 1,
      anon_sym_set,
    ACTIONS(111), 1,
      anon_sym_let,
    ACTIONS(113), 1,
      anon_sym_disj,
    ACTIONS(115), 1,
      sym_name,
    STATE(67), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(69), 1,
      sym_decl,
    STATE(74), 1,
      aux_sym_decl_repeat1,
    ACTIONS(103), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(15), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(18), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(107), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [313] = 12,
    ACTIONS(122), 1,
      anon_sym_sum,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      anon_sym_no,
    ACTIONS(140), 1,
      anon_sym_set,
    ACTIONS(143), 1,
      anon_sym_let,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(128), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(27), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(125), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [366] = 12,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(27), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [418] = 12,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(27), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [470] = 12,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(27), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [522] = 11,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(152), 1,
      anon_sym_disj,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(30), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [571] = 11,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_disj,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(29), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [620] = 11,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(156), 1,
      anon_sym_disj,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(31), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [669] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(23), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [715] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(2), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [761] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(13), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [807] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(16), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [853] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(28), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [899] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(19), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [945] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(8), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [991] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1037] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(12), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1083] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(11), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1129] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(29), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1175] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(24), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1221] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(21), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1267] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(20), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1313] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(3), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1359] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(6), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1405] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(14), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1451] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(4), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1497] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(10), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1543] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(18), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1589] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(22), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1635] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(15), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1681] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(9), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1727] = 10,
    ACTIONS(7), 1,
      anon_sym_sum,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(5), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(11), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(30), 4,
      sym__expression,
      sym_quantified_expression,
      sym_binary_expression,
      sym_unary_expression,
    ACTIONS(9), 8,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [1773] = 2,
    ACTIONS(160), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1784] = 5,
    ACTIONS(113), 1,
      anon_sym_disj,
    ACTIONS(115), 1,
      sym_name,
    STATE(67), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(69), 1,
      sym_decl,
    STATE(74), 1,
      aux_sym_decl_repeat1,
  [1800] = 5,
    ACTIONS(162), 1,
      anon_sym_disj,
    ACTIONS(165), 1,
      sym_name,
    STATE(66), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(74), 1,
      aux_sym_decl_repeat1,
    STATE(80), 1,
      sym_decl,
  [1816] = 5,
    ACTIONS(113), 1,
      anon_sym_disj,
    ACTIONS(115), 1,
      sym_name,
    STATE(66), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(68), 1,
      sym_decl,
    STATE(74), 1,
      aux_sym_decl_repeat1,
  [1832] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [1845] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_block,
  [1858] = 2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [1865] = 2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [1872] = 2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [1879] = 2,
    ACTIONS(184), 1,
      sym_name,
    STATE(77), 1,
      aux_sym_decl_repeat1,
  [1886] = 2,
    ACTIONS(184), 1,
      sym_name,
    STATE(75), 1,
      aux_sym_decl_repeat1,
  [1893] = 2,
    ACTIONS(186), 1,
      sym_name,
    STATE(75), 1,
      aux_sym_decl_repeat1,
  [1900] = 1,
    ACTIONS(189), 2,
      anon_sym_disj,
      sym_name,
  [1905] = 2,
    ACTIONS(191), 1,
      sym_name,
    STATE(75), 1,
      aux_sym_decl_repeat1,
  [1912] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [1916] = 1,
    ACTIONS(195), 1,
      sym_name,
  [1920] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [1924] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 63,
  [SMALL_STATE(30)] = 126,
  [SMALL_STATE(31)] = 189,
  [SMALL_STATE(32)] = 252,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 669,
  [SMALL_STATE(41)] = 715,
  [SMALL_STATE(42)] = 761,
  [SMALL_STATE(43)] = 807,
  [SMALL_STATE(44)] = 853,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 945,
  [SMALL_STATE(47)] = 991,
  [SMALL_STATE(48)] = 1037,
  [SMALL_STATE(49)] = 1083,
  [SMALL_STATE(50)] = 1129,
  [SMALL_STATE(51)] = 1175,
  [SMALL_STATE(52)] = 1221,
  [SMALL_STATE(53)] = 1267,
  [SMALL_STATE(54)] = 1313,
  [SMALL_STATE(55)] = 1359,
  [SMALL_STATE(56)] = 1405,
  [SMALL_STATE(57)] = 1451,
  [SMALL_STATE(58)] = 1497,
  [SMALL_STATE(59)] = 1543,
  [SMALL_STATE(60)] = 1589,
  [SMALL_STATE(61)] = 1635,
  [SMALL_STATE(62)] = 1681,
  [SMALL_STATE(63)] = 1727,
  [SMALL_STATE(64)] = 1773,
  [SMALL_STATE(65)] = 1784,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1816,
  [SMALL_STATE(68)] = 1832,
  [SMALL_STATE(69)] = 1845,
  [SMALL_STATE(70)] = 1858,
  [SMALL_STATE(71)] = 1865,
  [SMALL_STATE(72)] = 1872,
  [SMALL_STATE(73)] = 1879,
  [SMALL_STATE(74)] = 1886,
  [SMALL_STATE(75)] = 1893,
  [SMALL_STATE(76)] = 1900,
  [SMALL_STATE(77)] = 1905,
  [SMALL_STATE(78)] = 1912,
  [SMALL_STATE(79)] = 1916,
  [SMALL_STATE(80)] = 1920,
  [SMALL_STATE(81)] = 1924,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 5, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 5, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 4, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 4, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 3, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 5, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 4, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 3, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(73),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(71),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_repeat1, 2), SHIFT_REPEAT(81),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_repeat1, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_alloy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
