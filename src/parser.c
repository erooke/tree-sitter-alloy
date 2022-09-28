#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_no = 1,
  anon_sym_COMMA = 2,
  anon_sym_DASH = 3,
  aux_sym_number_token1 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_PIPE = 7,
  anon_sym_disj = 8,
  anon_sym_COLON = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_name = 14,
  sym_source_file = 15,
  sym__expression = 16,
  sym_quantified_expression = 17,
  sym_unary_expression = 18,
  sym_block = 19,
  sym_bar = 20,
  sym_decl = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_quantified_expression_repeat1 = 23,
  aux_sym_decl_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_no] = "no",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_disj] = "disj",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_quantified_expression] = "quantified_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_block] = "block",
  [sym_bar] = "bar",
  [sym_decl] = "decl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quantified_expression_repeat1] = "quantified_expression_repeat1",
  [aux_sym_decl_repeat1] = "decl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_disj] = anon_sym_disj,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_quantified_expression] = sym_quantified_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_block] = sym_block,
  [sym_bar] = sym_bar,
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
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_PIPE] = {
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
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
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
  field_quantifier = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_quantifier] = "quantifier",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_quantifier, 0},
  [1] =
    {field_type, 2},
  [2] =
    {field_type, 3},
  [3] =
    {field_type, 4},
  [4] =
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
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 8,
  [11] = 6,
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
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 22,
  [31] = 26,
  [32] = 23,
  [33] = 33,
  [34] = 26,
  [35] = 23,
  [36] = 27,
  [37] = 22,
  [38] = 38,
  [39] = 27,
  [40] = 12,
  [41] = 14,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 19,
  [46] = 46,
  [47] = 13,
  [48] = 18,
  [49] = 16,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_disj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'j') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_disj] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__expression] = STATE(7),
    [sym_quantified_expression] = STATE(7),
    [sym_unary_expression] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_no] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(13), 1,
      sym_name,
    STATE(23), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(26), 1,
      sym_decl,
    STATE(50), 1,
      aux_sym_decl_repeat1,
    STATE(12), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [24] = 7,
    ACTIONS(5), 1,
      anon_sym_no,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(15), 1,
      sym_name,
    STATE(31), 1,
      sym_decl,
    STATE(35), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(50), 1,
      aux_sym_decl_repeat1,
    STATE(12), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [48] = 7,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(19), 1,
      sym_name,
    STATE(32), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(34), 1,
      sym_decl,
    STATE(50), 1,
      aux_sym_decl_repeat1,
    STATE(40), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [72] = 4,
    ACTIONS(21), 1,
      anon_sym_no,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      sym_name,
    STATE(5), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [88] = 4,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_name,
    STATE(8), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [104] = 4,
    ACTIONS(5), 1,
      anon_sym_no,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_name,
    STATE(9), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [120] = 4,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_name,
    STATE(5), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [136] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_no,
    ACTIONS(44), 1,
      sym_name,
    STATE(9), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [152] = 4,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(39), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(5), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [168] = 4,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_name,
    STATE(10), 4,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
      aux_sym_source_file_repeat1,
  [184] = 2,
    ACTIONS(55), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [195] = 2,
    ACTIONS(59), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [206] = 2,
    ACTIONS(63), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [217] = 4,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(65), 1,
      anon_sym_disj,
    ACTIONS(67), 1,
      sym_name,
    STATE(44), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [232] = 2,
    ACTIONS(71), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [243] = 4,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(73), 1,
      anon_sym_disj,
    ACTIONS(75), 1,
      sym_name,
    STATE(42), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [258] = 2,
    ACTIONS(79), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [269] = 2,
    ACTIONS(83), 2,
      anon_sym_no,
      sym_name,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [280] = 4,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(85), 1,
      anon_sym_disj,
    ACTIONS(87), 1,
      sym_name,
    STATE(43), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [295] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    STATE(49), 2,
      sym_block,
      sym_bar,
  [309] = 3,
    ACTIONS(5), 1,
      anon_sym_no,
    ACTIONS(95), 1,
      sym_name,
    STATE(18), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [321] = 5,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(97), 1,
      sym_name,
    STATE(25), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(29), 1,
      sym_decl,
    STATE(50), 1,
      aux_sym_decl_repeat1,
  [337] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(16), 2,
      sym_block,
      sym_bar,
  [351] = 5,
    ACTIONS(103), 1,
      anon_sym_disj,
    ACTIONS(106), 1,
      sym_name,
    STATE(25), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(50), 1,
      aux_sym_decl_repeat1,
    STATE(60), 1,
      sym_decl,
  [367] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    STATE(19), 2,
      sym_block,
      sym_bar,
  [381] = 4,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(113), 2,
      anon_sym_no,
      sym_name,
  [395] = 3,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(87), 1,
      sym_name,
    STATE(43), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [407] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    STATE(16), 2,
      sym_block,
      sym_bar,
  [421] = 3,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(95), 1,
      sym_name,
    STATE(18), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [433] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(19), 2,
      sym_block,
      sym_bar,
  [447] = 5,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(97), 1,
      sym_name,
    STATE(21), 1,
      sym_decl,
    STATE(25), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(50), 1,
      aux_sym_decl_repeat1,
  [463] = 3,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(67), 1,
      sym_name,
    STATE(44), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [475] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_block,
      sym_bar,
  [489] = 5,
    ACTIONS(11), 1,
      anon_sym_disj,
    ACTIONS(97), 1,
      sym_name,
    STATE(24), 1,
      sym_decl,
    STATE(25), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(50), 1,
      aux_sym_decl_repeat1,
  [505] = 4,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(113), 2,
      anon_sym_no,
      sym_name,
  [519] = 3,
    ACTIONS(17), 1,
      anon_sym_no,
    ACTIONS(119), 1,
      sym_name,
    STATE(48), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [531] = 3,
    ACTIONS(9), 1,
      anon_sym_no,
    ACTIONS(121), 1,
      sym_name,
    STATE(46), 3,
      sym__expression,
      sym_quantified_expression,
      sym_unary_expression,
  [543] = 3,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(111), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [554] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 2,
      anon_sym_no,
      sym_name,
  [562] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 2,
      anon_sym_no,
      sym_name,
  [570] = 1,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [576] = 1,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [582] = 1,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [588] = 2,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 2,
      anon_sym_no,
      sym_name,
  [596] = 1,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [602] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      anon_sym_no,
      sym_name,
  [610] = 2,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 2,
      anon_sym_no,
      sym_name,
  [618] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 2,
      anon_sym_no,
      sym_name,
  [626] = 2,
    ACTIONS(134), 1,
      sym_name,
    STATE(57), 1,
      aux_sym_decl_repeat1,
  [633] = 1,
    ACTIONS(136), 2,
      anon_sym_disj,
      sym_name,
  [638] = 2,
    ACTIONS(138), 1,
      sym_name,
    STATE(57), 1,
      aux_sym_decl_repeat1,
  [645] = 2,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_COLON,
  [652] = 2,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [659] = 2,
    ACTIONS(134), 1,
      sym_name,
    STATE(52), 1,
      aux_sym_decl_repeat1,
  [666] = 2,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [673] = 2,
    ACTIONS(144), 1,
      sym_name,
    STATE(57), 1,
      aux_sym_decl_repeat1,
  [680] = 1,
    ACTIONS(147), 1,
      sym_name,
  [684] = 1,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [688] = 1,
    ACTIONS(89), 1,
      anon_sym_COMMA,
  [692] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 269,
  [SMALL_STATE(20)] = 280,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 309,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 337,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 395,
  [SMALL_STATE(29)] = 407,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 447,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 489,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 543,
  [SMALL_STATE(40)] = 554,
  [SMALL_STATE(41)] = 562,
  [SMALL_STATE(42)] = 570,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 582,
  [SMALL_STATE(45)] = 588,
  [SMALL_STATE(46)] = 596,
  [SMALL_STATE(47)] = 602,
  [SMALL_STATE(48)] = 610,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 633,
  [SMALL_STATE(52)] = 638,
  [SMALL_STATE(53)] = 645,
  [SMALL_STATE(54)] = 652,
  [SMALL_STATE(55)] = 659,
  [SMALL_STATE(56)] = 666,
  [SMALL_STATE(57)] = 673,
  [SMALL_STATE(58)] = 680,
  [SMALL_STATE(59)] = 684,
  [SMALL_STATE(60)] = 688,
  [SMALL_STATE(61)] = 692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 4, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 4, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(53),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_repeat1, 2), SHIFT_REPEAT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
