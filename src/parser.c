#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_name = 1,
  anon_sym_module = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_fact = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_SLASH = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_module_decl = 12,
  sym_qual_name = 13,
  aux_sym_module_decl_repeat1 = 14,
  aux_sym_qual_name_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_module] = "module",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_fact] = "fact",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH] = "/",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_module_decl] = "module_decl",
  [sym_qual_name] = "qual_name",
  [aux_sym_module_decl_repeat1] = "module_decl_repeat1",
  [aux_sym_qual_name_repeat1] = "qual_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_fact] = anon_sym_fact,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_module_decl] = sym_module_decl,
  [sym_qual_name] = sym_qual_name,
  [aux_sym_module_decl_repeat1] = aux_sym_module_decl_repeat1,
  [aux_sym_qual_name_repeat1] = aux_sym_qual_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fact] = {
    .visible = true,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_qual_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qual_name_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_fact);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_fact] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_module_decl] = STATE(14),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [11] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [22] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    STATE(5), 1,
      sym_qual_name,
    STATE(6), 1,
      aux_sym_qual_name_repeat1,
  [35] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
  [45] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_name,
    STATE(8), 1,
      aux_sym_qual_name_repeat1,
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_name,
    STATE(10), 1,
      aux_sym_module_decl_repeat1,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_name,
    STATE(8), 1,
      aux_sym_qual_name_repeat1,
  [75] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
  [85] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_name,
    STATE(12), 1,
      aux_sym_module_decl_repeat1,
  [95] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_name,
    STATE(12), 1,
      aux_sym_module_decl_repeat1,
  [115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_name,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SLASH,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_name,
  [150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 45,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qual_name, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qual_name, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qual_name_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_decl_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qual_name_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_decl_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 6),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
