#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_module = 1,
  anon_sym_COLON = 2,
  anon_sym_run = 3,
  anon_sym_check = 4,
  anon_sym_for = 5,
  anon_sym_but = 6,
  anon_sym_COMMA = 7,
  anon_sym_exactly = 8,
  anon_sym_pred = 9,
  anon_sym_fun = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DOT = 13,
  anon_sym_LT_COLON = 14,
  anon_sym_COLON_GT = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_AMP = 17,
  anon_sym_PLUS_PLUS = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_BANG = 21,
  anon_sym_not = 22,
  anon_sym_in = 23,
  anon_sym_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_until = 29,
  anon_sym_releases = 30,
  anon_sym_since = 31,
  anon_sym_triggered = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_and = 34,
  anon_sym_LT_EQ_GT = 35,
  anon_sym_iff = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_or = 38,
  anon_sym_SEMI = 39,
  anon_sym_TILDE = 40,
  anon_sym_CARET = 41,
  anon_sym_STAR = 42,
  anon_sym_POUND = 43,
  anon_sym_no = 44,
  anon_sym_some = 45,
  anon_sym_lone = 46,
  anon_sym_one = 47,
  anon_sym_set = 48,
  anon_sym_always = 49,
  anon_sym_eventually = 50,
  anon_sym_after = 51,
  anon_sym_before = 52,
  anon_sym_historically = 53,
  anon_sym_once = 54,
  anon_sym_let = 55,
  anon_sym_sum = 56,
  anon_sym_none = 57,
  anon_sym_univ = 58,
  anon_sym_iden = 59,
  aux_sym_number_token1 = 60,
  anon_sym_fact = 61,
  anon_sym_enum = 62,
  anon_sym_var = 63,
  anon_sym_abstract = 64,
  anon_sym_sig = 65,
  anon_sym_extends = 66,
  anon_sym_disj = 67,
  anon_sym_LPAREN = 68,
  anon_sym_RPAREN = 69,
  anon_sym_LBRACK = 70,
  anon_sym_RBRACK = 71,
  sym_name = 72,
  sym_qual_name = 73,
  sym_comment = 74,
  sym_source_file = 75,
  sym_module_decl = 76,
  sym__declaration = 77,
  sym_cmd_decl = 78,
  sym_scope = 79,
  sym_typescope = 80,
  sym_pred_decl = 81,
  sym_fun_decl = 82,
  sym__expression = 83,
  sym_binary_expression = 84,
  sym_unary_expression = 85,
  sym_constant_expression = 86,
  sym_number = 87,
  sym_block = 88,
  sym_fact_decl = 89,
  sym_enum_decl = 90,
  sym_sig_decl = 91,
  sym_sig_extension = 92,
  sym_decl = 93,
  sym_para_decls = 94,
  sym_field_decl = 95,
  sym_mult = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_scope_repeat1 = 98,
  aux_sym_block_repeat1 = 99,
  aux_sym_enum_decl_repeat1 = 100,
  aux_sym_sig_decl_repeat1 = 101,
  aux_sym_sig_extension_repeat1 = 102,
  aux_sym_para_decls_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_run] = "run",
  [anon_sym_check] = "check",
  [anon_sym_for] = "for",
  [anon_sym_but] = "but",
  [anon_sym_COMMA] = ",",
  [anon_sym_exactly] = "exactly",
  [anon_sym_pred] = "pred",
  [anon_sym_fun] = "fun",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_sum] = "sum",
  [anon_sym_none] = "none",
  [anon_sym_univ] = "univ",
  [anon_sym_iden] = "iden",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_fact] = "fact",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_abstract] = "abstract",
  [anon_sym_sig] = "sig",
  [anon_sym_extends] = "extends",
  [anon_sym_disj] = "disj",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_name] = "name",
  [sym_qual_name] = "qual_name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_module_decl] = "module_decl",
  [sym__declaration] = "_declaration",
  [sym_cmd_decl] = "cmd_decl",
  [sym_scope] = "scope",
  [sym_typescope] = "typescope",
  [sym_pred_decl] = "pred_decl",
  [sym_fun_decl] = "fun_decl",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_constant_expression] = "constant_expression",
  [sym_number] = "number",
  [sym_block] = "block",
  [sym_fact_decl] = "fact_decl",
  [sym_enum_decl] = "enum_decl",
  [sym_sig_decl] = "sig_decl",
  [sym_sig_extension] = "sig_extension",
  [sym_decl] = "decl",
  [sym_para_decls] = "para_decls",
  [sym_field_decl] = "field_decl",
  [sym_mult] = "mult",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scope_repeat1] = "scope_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_sig_decl_repeat1] = "sig_decl_repeat1",
  [aux_sym_sig_extension_repeat1] = "sig_extension_repeat1",
  [aux_sym_para_decls_repeat1] = "para_decls_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_but] = anon_sym_but,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_pred] = anon_sym_pred,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_univ] = anon_sym_univ,
  [anon_sym_iden] = anon_sym_iden,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_fact] = anon_sym_fact,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_sig] = anon_sym_sig,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_disj] = anon_sym_disj,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_name] = sym_name,
  [sym_qual_name] = sym_qual_name,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_module_decl] = sym_module_decl,
  [sym__declaration] = sym__declaration,
  [sym_cmd_decl] = sym_cmd_decl,
  [sym_scope] = sym_scope,
  [sym_typescope] = sym_typescope,
  [sym_pred_decl] = sym_pred_decl,
  [sym_fun_decl] = sym_fun_decl,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_constant_expression] = sym_constant_expression,
  [sym_number] = sym_number,
  [sym_block] = sym_block,
  [sym_fact_decl] = sym_fact_decl,
  [sym_enum_decl] = sym_enum_decl,
  [sym_sig_decl] = sym_sig_decl,
  [sym_sig_extension] = sym_sig_extension,
  [sym_decl] = sym_decl,
  [sym_para_decls] = sym_para_decls,
  [sym_field_decl] = sym_field_decl,
  [sym_mult] = sym_mult,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scope_repeat1] = aux_sym_scope_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_sig_decl_repeat1] = aux_sym_sig_decl_repeat1,
  [aux_sym_sig_extension_repeat1] = aux_sym_sig_extension_repeat1,
  [aux_sym_para_decls_repeat1] = aux_sym_para_decls_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_but] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
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
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_univ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iden] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_fact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disj] = {
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
  [sym_qual_name] = {
    .visible = true,
    .named = true,
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
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_typescope] = {
    .visible = true,
    .named = true,
  },
  [sym_pred_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
  [sym_constant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_para_decls] = {
    .visible = true,
    .named = true,
  },
  [sym_field_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_mult] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sig_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sig_extension_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_para_decls_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_operand = 3,
  field_operator = 4,
  field_right = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 1},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operand, 1},
    {field_operator, 0},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [10] =
    {field_type, 2},
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
  [25] = 5,
  [26] = 20,
  [27] = 24,
  [28] = 7,
  [29] = 9,
  [30] = 21,
  [31] = 22,
  [32] = 32,
  [33] = 23,
  [34] = 12,
  [35] = 35,
  [36] = 19,
  [37] = 16,
  [38] = 13,
  [39] = 39,
  [40] = 14,
  [41] = 6,
  [42] = 11,
  [43] = 39,
  [44] = 32,
  [45] = 10,
  [46] = 4,
  [47] = 15,
  [48] = 8,
  [49] = 18,
  [50] = 3,
  [51] = 2,
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
  [73] = 61,
  [74] = 59,
  [75] = 62,
  [76] = 64,
  [77] = 65,
  [78] = 66,
  [79] = 67,
  [80] = 68,
  [81] = 69,
  [82] = 82,
  [83] = 83,
  [84] = 70,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 71,
  [90] = 82,
  [91] = 83,
  [92] = 92,
  [93] = 93,
  [94] = 72,
  [95] = 85,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 60,
  [100] = 97,
  [101] = 86,
  [102] = 102,
  [103] = 88,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 18,
  [123] = 2,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 127,
  [143] = 143,
  [144] = 131,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 18,
  [260] = 2,
  [261] = 261,
  [262] = 256,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 256,
  [272] = 256,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '&') ADVANCE(175);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '&') ADVANCE(175);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '&') ADVANCE(175);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(186);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'j') ADVANCE(268);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 135:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == '|') ADVANCE(204);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 142:
      if (eof) ADVANCE(146);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 143:
      if (eof) ADVANCE(146);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 144:
      if (eof) ADVANCE(146);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_check);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_but);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_but);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_pred);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_pred);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_pred);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '>') ADVANCE(174);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_until);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_releases);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_releases);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_since);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_since);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_triggered);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_triggered);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_iff);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_lone);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_lone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_one);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_eventually);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_eventually);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_historically);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_historically);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_once);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_univ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_univ);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_iden);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_iden);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_fact);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_fact);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_fact);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_sig);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_disj);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_disj);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_disj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'j') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(449);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 143},
  [109] = {.lex_state = 143},
  [110] = {.lex_state = 143},
  [111] = {.lex_state = 143},
  [112] = {.lex_state = 143},
  [113] = {.lex_state = 143},
  [114] = {.lex_state = 145},
  [115] = {.lex_state = 143},
  [116] = {.lex_state = 143},
  [117] = {.lex_state = 143},
  [118] = {.lex_state = 143},
  [119] = {.lex_state = 143},
  [120] = {.lex_state = 144},
  [121] = {.lex_state = 143},
  [122] = {.lex_state = 145},
  [123] = {.lex_state = 145},
  [124] = {.lex_state = 144},
  [125] = {.lex_state = 143},
  [126] = {.lex_state = 143},
  [127] = {.lex_state = 144},
  [128] = {.lex_state = 143},
  [129] = {.lex_state = 143},
  [130] = {.lex_state = 143},
  [131] = {.lex_state = 144},
  [132] = {.lex_state = 143},
  [133] = {.lex_state = 143},
  [134] = {.lex_state = 143},
  [135] = {.lex_state = 143},
  [136] = {.lex_state = 143},
  [137] = {.lex_state = 143},
  [138] = {.lex_state = 143},
  [139] = {.lex_state = 143},
  [140] = {.lex_state = 143},
  [141] = {.lex_state = 143},
  [142] = {.lex_state = 143},
  [143] = {.lex_state = 143},
  [144] = {.lex_state = 143},
  [145] = {.lex_state = 143},
  [146] = {.lex_state = 143},
  [147] = {.lex_state = 143},
  [148] = {.lex_state = 143},
  [149] = {.lex_state = 143},
  [150] = {.lex_state = 143},
  [151] = {.lex_state = 143},
  [152] = {.lex_state = 143},
  [153] = {.lex_state = 143},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 142},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 142},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 142},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 142},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 142},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 142},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 142},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 142},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_but] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_pred] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_univ] = ACTIONS(1),
    [anon_sym_iden] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_fact] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_disj] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(258),
    [sym_module_decl] = STATE(109),
    [sym__declaration] = STATE(111),
    [sym_cmd_decl] = STATE(111),
    [sym_pred_decl] = STATE(111),
    [sym_fun_decl] = STATE(111),
    [sym_fact_decl] = STATE(111),
    [sym_enum_decl] = STATE(111),
    [sym_sig_decl] = STATE(111),
    [sym_mult] = STATE(239),
    [aux_sym_source_file_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_run] = ACTIONS(9),
    [anon_sym_check] = ACTIONS(9),
    [anon_sym_pred] = ACTIONS(11),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_lone] = ACTIONS(15),
    [anon_sym_one] = ACTIONS(15),
    [anon_sym_fact] = ACTIONS(17),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(21),
    [anon_sym_abstract] = ACTIONS(23),
    [anon_sym_sig] = ACTIONS(25),
    [sym_name] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 17,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(31), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [58] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(33), 13,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [122] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(65), 1,
      anon_sym_iff,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 7,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 19,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [210] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(65), 1,
      anon_sym_iff,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_or,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 18,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [302] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 25,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(33), 16,
      anon_sym_RBRACE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [440] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(73), 30,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 17,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [568] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 8,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 20,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [652] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 21,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [732] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(65), 1,
      anon_sym_iff,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_or,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(75), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 18,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(33), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 32,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 30,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 17,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(33), 13,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 32,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1086] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(65), 1,
      anon_sym_iff,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_or,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(79), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(83), 18,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 17,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(87), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1238] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 25,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 17,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(91), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(75), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 32,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1442] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 30,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1512] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 12,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(77), 30,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(33), 14,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 33,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_set,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
      anon_sym_let,
      anon_sym_sum,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1644] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(89), 26,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(41), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 23,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(41), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 25,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 26,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1874] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(77), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1924] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1976] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(141), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    STATE(35), 1,
      aux_sym_block_repeat1,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2042] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2094] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(75), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2158] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(148), 1,
      anon_sym_BANG,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_set,
    ACTIONS(172), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    STATE(35), 1,
      aux_sym_block_repeat1,
    ACTIONS(166), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(154), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(160), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(151), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2224] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 16,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(41), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2328] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(41), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2378] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(141), 1,
      sym_qual_name,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(32), 1,
      aux_sym_block_repeat1,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2444] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2496] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 16,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2552] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2610] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(141), 1,
      sym_qual_name,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(44), 1,
      aux_sym_block_repeat1,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2676] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(141), 1,
      sym_qual_name,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(35), 1,
      aux_sym_block_repeat1,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2742] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2802] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(33), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(75), 26,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(85), 26,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(41), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(33), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 26,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_DASH_GT,
      anon_sym_PLUS_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3082] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(204), 1,
      anon_sym_disj,
    ACTIONS(206), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(57), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3145] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      anon_sym_disj,
    ACTIONS(210), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(58), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3208] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(212), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3273] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(216), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3338] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(218), 1,
      anon_sym_disj,
    ACTIONS(220), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(55), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3401] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3466] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(224), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3531] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(28), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3591] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(228), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(5), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3651] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(230), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(29), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3711] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(232), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(27), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3771] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(234), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(105), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3831] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(50), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3891] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(238), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(37), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3951] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(240), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(38), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4011] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(242), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(40), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4071] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(244), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(41), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4131] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(42), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4191] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(248), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(12), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4251] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(250), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(23), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4311] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(252), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(22), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4371] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(254), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(9), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4431] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(256), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(7), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4491] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(258), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(24), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4551] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(260), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(3), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4611] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(262), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(16), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4671] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(264), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(13), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4731] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(266), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4791] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(268), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(6), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4851] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(270), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4911] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(272), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(10), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4971] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(4), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5031] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(276), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(34), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5091] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(278), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5151] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(280), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5211] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(54), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5271] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(33), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5391] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(288), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(45), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5451] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(290), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(46), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5511] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(220), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(55), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5571] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(292), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(107), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5631] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(31), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5691] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(296), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(30), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5751] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(298), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(104), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5811] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      aux_sym_number_token1,
    ACTIONS(300), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(135), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(127), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(137), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(131), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(8), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(125), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5871] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(206), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(57), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5931] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(302), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5991] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(304), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(48), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6051] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(306), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(47), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6111] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(308), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(106), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6171] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_set,
    ACTIONS(202), 1,
      aux_sym_number_token1,
    ACTIONS(310), 1,
      sym_qual_name,
    STATE(26), 1,
      sym_number,
    ACTIONS(198), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(190), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(200), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(194), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(36), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(188), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6231] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6293] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6355] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6417] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(113), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(115), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(117), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(107), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6479] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_pred,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      anon_sym_fact,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_var,
    ACTIONS(23), 1,
      anon_sym_abstract,
    ACTIONS(25), 1,
      anon_sym_sig,
    ACTIONS(27), 1,
      sym_name,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(110), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6532] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_pred,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      anon_sym_fact,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_var,
    ACTIONS(23), 1,
      anon_sym_abstract,
    ACTIONS(25), 1,
      anon_sym_sig,
    ACTIONS(27), 1,
      sym_name,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(108), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6585] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_pred,
    ACTIONS(332), 1,
      anon_sym_fun,
    ACTIONS(338), 1,
      anon_sym_fact,
    ACTIONS(341), 1,
      anon_sym_enum,
    ACTIONS(344), 1,
      anon_sym_var,
    ACTIONS(347), 1,
      anon_sym_abstract,
    ACTIONS(350), 1,
      anon_sym_sig,
    ACTIONS(353), 1,
      sym_name,
    STATE(239), 1,
      sym_mult,
    ACTIONS(326), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(335), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(110), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6638] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_pred,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      anon_sym_fact,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_var,
    ACTIONS(23), 1,
      anon_sym_abstract,
    ACTIONS(25), 1,
      anon_sym_sig,
    ACTIONS(27), 1,
      sym_name,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(110), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_block,
    ACTIONS(358), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_block,
    ACTIONS(364), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_but,
    ACTIONS(372), 1,
      sym_qual_name,
    ACTIONS(368), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_block,
    ACTIONS(376), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_block,
    ACTIONS(380), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_block,
    ACTIONS(384), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_block,
    ACTIONS(388), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_block,
    ACTIONS(392), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      anon_sym_for,
    STATE(133), 1,
      sym_scope,
    ACTIONS(396), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_block,
    ACTIONS(402), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [6971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 15,
      anon_sym_run,
      anon_sym_check,
      anon_sym_but,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
      sym_qual_name,
  [6995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 15,
      anon_sym_run,
      anon_sym_check,
      anon_sym_but,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
      sym_qual_name,
  [7019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_for,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_scope,
    ACTIONS(406), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(410), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(416), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 14,
      anon_sym_run,
      anon_sym_check,
      anon_sym_for,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(368), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(428), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 14,
      anon_sym_run,
      anon_sym_check,
      anon_sym_for,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    ACTIONS(476), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    ACTIONS(484), 13,
      anon_sym_run,
      anon_sym_check,
      anon_sym_pred,
      anon_sym_fun,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
      anon_sym_fact,
      anon_sym_enum,
      anon_sym_var,
      anon_sym_abstract,
      anon_sym_sig,
      sym_name,
  [7701] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(197), 1,
      sym_field_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
  [7729] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_sig_decl_repeat1,
    STATE(198), 1,
      sym_field_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
  [7757] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(209), 1,
      sym_field_decl,
    STATE(211), 1,
      sym_decl,
  [7785] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
    STATE(212), 1,
      sym_field_decl,
  [7813] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(206), 1,
      sym_field_decl,
    STATE(211), 1,
      sym_decl,
  [7841] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_sig_decl_repeat1,
    STATE(200), 1,
      sym_field_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
  [7869] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
    STATE(212), 1,
      sym_field_decl,
  [7894] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_var,
    ACTIONS(507), 1,
      anon_sym_disj,
    ACTIONS(510), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
    STATE(254), 1,
      sym_field_decl,
  [7919] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(209), 1,
      sym_field_decl,
    STATE(211), 1,
      sym_decl,
  [7944] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(198), 1,
      sym_field_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
  [7969] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(206), 1,
      sym_field_decl,
    STATE(211), 1,
      sym_decl,
  [7994] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
    STATE(216), 1,
      sym_field_decl,
  [8019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_var,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(161), 1,
      aux_sym_sig_decl_repeat1,
    STATE(197), 1,
      sym_field_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_decl,
  [8044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(513), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_exactly,
    ACTIONS(519), 1,
      anon_sym_DASH,
    ACTIONS(521), 1,
      aux_sym_number_token1,
    STATE(114), 1,
      sym_number,
    STATE(128), 1,
      sym_typescope,
    STATE(173), 1,
      aux_sym_scope_repeat1,
  [8080] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_exactly,
    ACTIONS(526), 1,
      anon_sym_DASH,
    ACTIONS(529), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      aux_sym_scope_repeat1,
    STATE(251), 1,
      sym_typescope,
    STATE(261), 1,
      sym_number,
  [8102] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_exactly,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      aux_sym_number_token1,
    STATE(129), 1,
      sym_typescope,
    STATE(169), 1,
      aux_sym_scope_repeat1,
    STATE(261), 1,
      sym_number,
  [8124] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_exactly,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      aux_sym_number_token1,
    STATE(132), 1,
      sym_typescope,
    STATE(170), 1,
      aux_sym_scope_repeat1,
    STATE(261), 1,
      sym_number,
  [8146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(536), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8160] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_exactly,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      aux_sym_number_token1,
    STATE(125), 1,
      sym_typescope,
    STATE(169), 1,
      aux_sym_scope_repeat1,
    STATE(261), 1,
      sym_number,
  [8182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_abstract,
    ACTIONS(544), 1,
      anon_sym_sig,
    STATE(255), 1,
      sym_mult,
    ACTIONS(540), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_sig,
    STATE(244), 1,
      sym_mult,
    ACTIONS(540), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_in,
    ACTIONS(554), 1,
      anon_sym_extends,
    STATE(242), 1,
      sym_sig_extension,
  [8234] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(183), 1,
      aux_sym_para_decls_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(237), 1,
      sym_decl,
  [8253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_in,
    ACTIONS(554), 1,
      anon_sym_extends,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_sig_extension,
  [8272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_in,
    ACTIONS(554), 1,
      anon_sym_extends,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_sig_extension,
  [8291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(177), 1,
      aux_sym_para_decls_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(204), 1,
      sym_decl,
  [8310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_in,
    ACTIONS(554), 1,
      anon_sym_extends,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_sig_extension,
  [8329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(186), 1,
      aux_sym_para_decls_repeat1,
    STATE(202), 1,
      sym_decl,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
  [8348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_disj,
    ACTIONS(565), 1,
      sym_name,
    STATE(183), 1,
      aux_sym_para_decls_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(252), 1,
      sym_decl,
  [8367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_in,
    ACTIONS(554), 1,
      anon_sym_extends,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_sig_extension,
  [8386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    STATE(153), 1,
      sym_block,
    STATE(234), 1,
      sym_para_decls,
  [8405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(183), 1,
      aux_sym_para_decls_repeat1,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(228), 1,
      sym_decl,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_sig,
    STATE(255), 1,
      sym_mult,
    ACTIONS(540), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_para_decls,
  [8455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_disj,
    ACTIONS(492), 1,
      sym_name,
    STATE(203), 1,
      aux_sym_enum_decl_repeat1,
    STATE(232), 1,
      sym_decl,
  [8471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      sym_qual_name,
    STATE(120), 1,
      sym_block,
  [8484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      aux_sym_number_token1,
    STATE(265), 1,
      sym_number,
  [8497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_qual_name,
    STATE(124), 1,
      sym_block,
  [8510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 3,
      anon_sym_var,
      anon_sym_disj,
      sym_name,
  [8519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DASH,
    ACTIONS(584), 2,
      anon_sym_exactly,
      aux_sym_number_token1,
  [8530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      sym_name,
    STATE(141), 1,
      sym_block,
  [8543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PLUS,
  [8553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [8563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [8573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_qual_name,
    STATE(220), 1,
      aux_sym_sig_extension_repeat1,
  [8583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [8593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_name,
    STATE(208), 1,
      aux_sym_enum_decl_repeat1,
  [8603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [8613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
  [8633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_name,
    STATE(229), 1,
      aux_sym_enum_decl_repeat1,
  [8643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [8653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [8663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [8683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
  [8693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [8711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [8719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [8739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [8749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_block,
  [8769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_name,
    STATE(236), 1,
      aux_sym_enum_decl_repeat1,
  [8779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_qual_name,
    STATE(220), 1,
      aux_sym_sig_extension_repeat1,
  [8789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_disj,
      sym_name,
  [8807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [8815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_qual_name,
    STATE(199), 1,
      aux_sym_sig_extension_repeat1,
  [8825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_PLUS,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
  [8835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_name,
    STATE(227), 1,
      aux_sym_enum_decl_repeat1,
  [8845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [8865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_name,
    STATE(217), 1,
      aux_sym_enum_decl_repeat1,
  [8885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_name,
    STATE(214), 1,
      aux_sym_enum_decl_repeat1,
  [8895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_run,
      anon_sym_check,
  [8911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
  [8921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_COLON,
  [8931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_name,
    STATE(221), 1,
      aux_sym_enum_decl_repeat1,
  [8941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACK,
  [8951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
  [8961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_sig,
  [8968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_PLUS,
  [8975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_qual_name,
  [8982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [8989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COLON,
  [8996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_sig,
  [9003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_qual_name,
  [9010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [9017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_name,
  [9024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_qual_name,
  [9031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COLON,
  [9038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [9045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
  [9052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
  [9059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [9066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
  [9073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_sig,
  [9080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      aux_sym_number_token1,
  [9087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
  [9094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
  [9101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_qual_name,
  [9108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_qual_name,
  [9115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_qual_name,
  [9122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      aux_sym_number_token1,
  [9129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [9136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_name,
  [9143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_qual_name,
  [9150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_sig,
  [9157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_name,
  [9164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_name,
  [9171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [9178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
  [9185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_number_token1,
  [9192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_number_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 302,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 440,
  [SMALL_STATE(9)] = 510,
  [SMALL_STATE(10)] = 568,
  [SMALL_STATE(11)] = 652,
  [SMALL_STATE(12)] = 732,
  [SMALL_STATE(13)] = 824,
  [SMALL_STATE(14)] = 892,
  [SMALL_STATE(15)] = 962,
  [SMALL_STATE(16)] = 1020,
  [SMALL_STATE(17)] = 1086,
  [SMALL_STATE(18)] = 1180,
  [SMALL_STATE(19)] = 1238,
  [SMALL_STATE(20)] = 1316,
  [SMALL_STATE(21)] = 1374,
  [SMALL_STATE(22)] = 1442,
  [SMALL_STATE(23)] = 1512,
  [SMALL_STATE(24)] = 1582,
  [SMALL_STATE(25)] = 1644,
  [SMALL_STATE(26)] = 1708,
  [SMALL_STATE(27)] = 1748,
  [SMALL_STATE(28)] = 1792,
  [SMALL_STATE(29)] = 1834,
  [SMALL_STATE(30)] = 1874,
  [SMALL_STATE(31)] = 1924,
  [SMALL_STATE(32)] = 1976,
  [SMALL_STATE(33)] = 2042,
  [SMALL_STATE(34)] = 2094,
  [SMALL_STATE(35)] = 2158,
  [SMALL_STATE(36)] = 2224,
  [SMALL_STATE(37)] = 2280,
  [SMALL_STATE(38)] = 2328,
  [SMALL_STATE(39)] = 2378,
  [SMALL_STATE(40)] = 2444,
  [SMALL_STATE(41)] = 2496,
  [SMALL_STATE(42)] = 2552,
  [SMALL_STATE(43)] = 2610,
  [SMALL_STATE(44)] = 2676,
  [SMALL_STATE(45)] = 2742,
  [SMALL_STATE(46)] = 2802,
  [SMALL_STATE(47)] = 2864,
  [SMALL_STATE(48)] = 2904,
  [SMALL_STATE(49)] = 2956,
  [SMALL_STATE(50)] = 2996,
  [SMALL_STATE(51)] = 3042,
  [SMALL_STATE(52)] = 3082,
  [SMALL_STATE(53)] = 3145,
  [SMALL_STATE(54)] = 3208,
  [SMALL_STATE(55)] = 3273,
  [SMALL_STATE(56)] = 3338,
  [SMALL_STATE(57)] = 3401,
  [SMALL_STATE(58)] = 3466,
  [SMALL_STATE(59)] = 3531,
  [SMALL_STATE(60)] = 3591,
  [SMALL_STATE(61)] = 3651,
  [SMALL_STATE(62)] = 3711,
  [SMALL_STATE(63)] = 3771,
  [SMALL_STATE(64)] = 3831,
  [SMALL_STATE(65)] = 3891,
  [SMALL_STATE(66)] = 3951,
  [SMALL_STATE(67)] = 4011,
  [SMALL_STATE(68)] = 4071,
  [SMALL_STATE(69)] = 4131,
  [SMALL_STATE(70)] = 4191,
  [SMALL_STATE(71)] = 4251,
  [SMALL_STATE(72)] = 4311,
  [SMALL_STATE(73)] = 4371,
  [SMALL_STATE(74)] = 4431,
  [SMALL_STATE(75)] = 4491,
  [SMALL_STATE(76)] = 4551,
  [SMALL_STATE(77)] = 4611,
  [SMALL_STATE(78)] = 4671,
  [SMALL_STATE(79)] = 4731,
  [SMALL_STATE(80)] = 4791,
  [SMALL_STATE(81)] = 4851,
  [SMALL_STATE(82)] = 4911,
  [SMALL_STATE(83)] = 4971,
  [SMALL_STATE(84)] = 5031,
  [SMALL_STATE(85)] = 5091,
  [SMALL_STATE(86)] = 5151,
  [SMALL_STATE(87)] = 5211,
  [SMALL_STATE(88)] = 5271,
  [SMALL_STATE(89)] = 5331,
  [SMALL_STATE(90)] = 5391,
  [SMALL_STATE(91)] = 5451,
  [SMALL_STATE(92)] = 5511,
  [SMALL_STATE(93)] = 5571,
  [SMALL_STATE(94)] = 5631,
  [SMALL_STATE(95)] = 5691,
  [SMALL_STATE(96)] = 5751,
  [SMALL_STATE(97)] = 5811,
  [SMALL_STATE(98)] = 5871,
  [SMALL_STATE(99)] = 5931,
  [SMALL_STATE(100)] = 5991,
  [SMALL_STATE(101)] = 6051,
  [SMALL_STATE(102)] = 6111,
  [SMALL_STATE(103)] = 6171,
  [SMALL_STATE(104)] = 6231,
  [SMALL_STATE(105)] = 6293,
  [SMALL_STATE(106)] = 6355,
  [SMALL_STATE(107)] = 6417,
  [SMALL_STATE(108)] = 6479,
  [SMALL_STATE(109)] = 6532,
  [SMALL_STATE(110)] = 6585,
  [SMALL_STATE(111)] = 6638,
  [SMALL_STATE(112)] = 6691,
  [SMALL_STATE(113)] = 6719,
  [SMALL_STATE(114)] = 6747,
  [SMALL_STATE(115)] = 6775,
  [SMALL_STATE(116)] = 6803,
  [SMALL_STATE(117)] = 6831,
  [SMALL_STATE(118)] = 6859,
  [SMALL_STATE(119)] = 6887,
  [SMALL_STATE(120)] = 6915,
  [SMALL_STATE(121)] = 6943,
  [SMALL_STATE(122)] = 6971,
  [SMALL_STATE(123)] = 6995,
  [SMALL_STATE(124)] = 7019,
  [SMALL_STATE(125)] = 7047,
  [SMALL_STATE(126)] = 7072,
  [SMALL_STATE(127)] = 7095,
  [SMALL_STATE(128)] = 7118,
  [SMALL_STATE(129)] = 7143,
  [SMALL_STATE(130)] = 7168,
  [SMALL_STATE(131)] = 7191,
  [SMALL_STATE(132)] = 7214,
  [SMALL_STATE(133)] = 7239,
  [SMALL_STATE(134)] = 7261,
  [SMALL_STATE(135)] = 7283,
  [SMALL_STATE(136)] = 7305,
  [SMALL_STATE(137)] = 7327,
  [SMALL_STATE(138)] = 7349,
  [SMALL_STATE(139)] = 7371,
  [SMALL_STATE(140)] = 7393,
  [SMALL_STATE(141)] = 7415,
  [SMALL_STATE(142)] = 7437,
  [SMALL_STATE(143)] = 7459,
  [SMALL_STATE(144)] = 7481,
  [SMALL_STATE(145)] = 7503,
  [SMALL_STATE(146)] = 7525,
  [SMALL_STATE(147)] = 7547,
  [SMALL_STATE(148)] = 7569,
  [SMALL_STATE(149)] = 7591,
  [SMALL_STATE(150)] = 7613,
  [SMALL_STATE(151)] = 7635,
  [SMALL_STATE(152)] = 7657,
  [SMALL_STATE(153)] = 7679,
  [SMALL_STATE(154)] = 7701,
  [SMALL_STATE(155)] = 7729,
  [SMALL_STATE(156)] = 7757,
  [SMALL_STATE(157)] = 7785,
  [SMALL_STATE(158)] = 7813,
  [SMALL_STATE(159)] = 7841,
  [SMALL_STATE(160)] = 7869,
  [SMALL_STATE(161)] = 7894,
  [SMALL_STATE(162)] = 7919,
  [SMALL_STATE(163)] = 7944,
  [SMALL_STATE(164)] = 7969,
  [SMALL_STATE(165)] = 7994,
  [SMALL_STATE(166)] = 8019,
  [SMALL_STATE(167)] = 8044,
  [SMALL_STATE(168)] = 8058,
  [SMALL_STATE(169)] = 8080,
  [SMALL_STATE(170)] = 8102,
  [SMALL_STATE(171)] = 8124,
  [SMALL_STATE(172)] = 8146,
  [SMALL_STATE(173)] = 8160,
  [SMALL_STATE(174)] = 8182,
  [SMALL_STATE(175)] = 8200,
  [SMALL_STATE(176)] = 8215,
  [SMALL_STATE(177)] = 8234,
  [SMALL_STATE(178)] = 8253,
  [SMALL_STATE(179)] = 8272,
  [SMALL_STATE(180)] = 8291,
  [SMALL_STATE(181)] = 8310,
  [SMALL_STATE(182)] = 8329,
  [SMALL_STATE(183)] = 8348,
  [SMALL_STATE(184)] = 8367,
  [SMALL_STATE(185)] = 8386,
  [SMALL_STATE(186)] = 8405,
  [SMALL_STATE(187)] = 8424,
  [SMALL_STATE(188)] = 8439,
  [SMALL_STATE(189)] = 8455,
  [SMALL_STATE(190)] = 8471,
  [SMALL_STATE(191)] = 8484,
  [SMALL_STATE(192)] = 8497,
  [SMALL_STATE(193)] = 8510,
  [SMALL_STATE(194)] = 8519,
  [SMALL_STATE(195)] = 8530,
  [SMALL_STATE(196)] = 8543,
  [SMALL_STATE(197)] = 8553,
  [SMALL_STATE(198)] = 8563,
  [SMALL_STATE(199)] = 8573,
  [SMALL_STATE(200)] = 8583,
  [SMALL_STATE(201)] = 8593,
  [SMALL_STATE(202)] = 8603,
  [SMALL_STATE(203)] = 8613,
  [SMALL_STATE(204)] = 8623,
  [SMALL_STATE(205)] = 8633,
  [SMALL_STATE(206)] = 8643,
  [SMALL_STATE(207)] = 8653,
  [SMALL_STATE(208)] = 8663,
  [SMALL_STATE(209)] = 8673,
  [SMALL_STATE(210)] = 8683,
  [SMALL_STATE(211)] = 8693,
  [SMALL_STATE(212)] = 8701,
  [SMALL_STATE(213)] = 8711,
  [SMALL_STATE(214)] = 8719,
  [SMALL_STATE(215)] = 8729,
  [SMALL_STATE(216)] = 8739,
  [SMALL_STATE(217)] = 8749,
  [SMALL_STATE(218)] = 8759,
  [SMALL_STATE(219)] = 8769,
  [SMALL_STATE(220)] = 8779,
  [SMALL_STATE(221)] = 8789,
  [SMALL_STATE(222)] = 8799,
  [SMALL_STATE(223)] = 8807,
  [SMALL_STATE(224)] = 8815,
  [SMALL_STATE(225)] = 8825,
  [SMALL_STATE(226)] = 8835,
  [SMALL_STATE(227)] = 8845,
  [SMALL_STATE(228)] = 8855,
  [SMALL_STATE(229)] = 8865,
  [SMALL_STATE(230)] = 8875,
  [SMALL_STATE(231)] = 8885,
  [SMALL_STATE(232)] = 8895,
  [SMALL_STATE(233)] = 8903,
  [SMALL_STATE(234)] = 8911,
  [SMALL_STATE(235)] = 8921,
  [SMALL_STATE(236)] = 8931,
  [SMALL_STATE(237)] = 8941,
  [SMALL_STATE(238)] = 8951,
  [SMALL_STATE(239)] = 8961,
  [SMALL_STATE(240)] = 8968,
  [SMALL_STATE(241)] = 8975,
  [SMALL_STATE(242)] = 8982,
  [SMALL_STATE(243)] = 8989,
  [SMALL_STATE(244)] = 8996,
  [SMALL_STATE(245)] = 9003,
  [SMALL_STATE(246)] = 9010,
  [SMALL_STATE(247)] = 9017,
  [SMALL_STATE(248)] = 9024,
  [SMALL_STATE(249)] = 9031,
  [SMALL_STATE(250)] = 9038,
  [SMALL_STATE(251)] = 9045,
  [SMALL_STATE(252)] = 9052,
  [SMALL_STATE(253)] = 9059,
  [SMALL_STATE(254)] = 9066,
  [SMALL_STATE(255)] = 9073,
  [SMALL_STATE(256)] = 9080,
  [SMALL_STATE(257)] = 9087,
  [SMALL_STATE(258)] = 9094,
  [SMALL_STATE(259)] = 9101,
  [SMALL_STATE(260)] = 9108,
  [SMALL_STATE(261)] = 9115,
  [SMALL_STATE(262)] = 9122,
  [SMALL_STATE(263)] = 9129,
  [SMALL_STATE(264)] = 9136,
  [SMALL_STATE(265)] = 9143,
  [SMALL_STATE(266)] = 9150,
  [SMALL_STATE(267)] = 9157,
  [SMALL_STATE(268)] = 9164,
  [SMALL_STATE(269)] = 9171,
  [SMALL_STATE(270)] = 9178,
  [SMALL_STATE(271)] = 9185,
  [SMALL_STATE(272)] = 9192,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(256),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, .production_id = 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 9),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 9),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 8),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 8),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 5),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 7),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 6),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 10),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 10),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 11),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 11),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 8),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 8),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_decl, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 7),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 7),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 6),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 12),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 12),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(189),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(201),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(235),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(191),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(272),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(259),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2), SHIFT_REPEAT(201),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2), SHIFT_REPEAT(235),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2), SHIFT_REPEAT(240),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(269),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
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
