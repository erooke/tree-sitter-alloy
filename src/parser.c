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
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
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
  anon_sym_SQUOTE = 13,
  anon_sym_DOT = 14,
  anon_sym_LT_COLON = 15,
  anon_sym_COLON_GT = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_AMP = 18,
  anon_sym_PLUS_PLUS = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_BANG = 22,
  anon_sym_not = 23,
  anon_sym_in = 24,
  anon_sym_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_until = 30,
  anon_sym_releases = 31,
  anon_sym_since = 32,
  anon_sym_triggered = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_and = 35,
  anon_sym_LT_EQ_GT = 36,
  anon_sym_iff = 37,
  anon_sym_PIPE_PIPE = 38,
  anon_sym_or = 39,
  anon_sym_SEMI = 40,
  anon_sym_TILDE = 41,
  anon_sym_CARET = 42,
  anon_sym_STAR = 43,
  anon_sym_POUND = 44,
  anon_sym_no = 45,
  anon_sym_some = 46,
  anon_sym_lone = 47,
  anon_sym_one = 48,
  anon_sym_set = 49,
  anon_sym_always = 50,
  anon_sym_eventually = 51,
  anon_sym_after = 52,
  anon_sym_before = 53,
  anon_sym_historically = 54,
  anon_sym_once = 55,
  anon_sym_let = 56,
  anon_sym_sum = 57,
  anon_sym_none = 58,
  anon_sym_univ = 59,
  anon_sym_iden = 60,
  aux_sym_number_token1 = 61,
  anon_sym_fact = 62,
  anon_sym_enum = 63,
  anon_sym_var = 64,
  anon_sym_abstract = 65,
  anon_sym_sig = 66,
  anon_sym_extends = 67,
  anon_sym_disj = 68,
  anon_sym_LPAREN = 69,
  anon_sym_RPAREN = 70,
  anon_sym_LBRACK = 71,
  anon_sym_RBRACK = 72,
  sym_name = 73,
  sym_qual_name = 74,
  sym_comment = 75,
  sym_source_file = 76,
  sym_module_decl = 77,
  sym__declaration = 78,
  sym_cmd_decl = 79,
  sym_scope = 80,
  sym_typescope = 81,
  sym_pred_decl = 82,
  sym_fun_decl = 83,
  sym__expression = 84,
  sym_prime_expression = 85,
  sym_binary_expression = 86,
  sym_unary_expression = 87,
  sym_constant_expression = 88,
  sym_number = 89,
  sym_block = 90,
  sym_fact_decl = 91,
  sym_enum_decl = 92,
  sym_sig_decl = 93,
  sym_sig_extension = 94,
  sym_decl = 95,
  sym_para_decls = 96,
  sym_field_decl = 97,
  sym_mult = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_scope_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_enum_decl_repeat1 = 102,
  aux_sym_sig_decl_repeat1 = 103,
  aux_sym_sig_extension_repeat1 = 104,
  aux_sym_para_decls_repeat1 = 105,
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
  [anon_sym_SQUOTE] = "'",
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
  [sym_prime_expression] = "prime_expression",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_prime_expression] = sym_prime_expression,
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
  [anon_sym_SQUOTE] = {
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
  [sym_prime_expression] = {
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
  [25] = 25,
  [26] = 10,
  [27] = 20,
  [28] = 7,
  [29] = 9,
  [30] = 13,
  [31] = 31,
  [32] = 19,
  [33] = 2,
  [34] = 15,
  [35] = 21,
  [36] = 22,
  [37] = 37,
  [38] = 16,
  [39] = 23,
  [40] = 3,
  [41] = 25,
  [42] = 24,
  [43] = 43,
  [44] = 31,
  [45] = 4,
  [46] = 12,
  [47] = 5,
  [48] = 6,
  [49] = 14,
  [50] = 18,
  [51] = 8,
  [52] = 11,
  [53] = 43,
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
  [74] = 63,
  [75] = 61,
  [76] = 64,
  [77] = 66,
  [78] = 67,
  [79] = 68,
  [80] = 69,
  [81] = 70,
  [82] = 71,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 72,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 73,
  [91] = 91,
  [92] = 83,
  [93] = 93,
  [94] = 94,
  [95] = 62,
  [96] = 96,
  [97] = 87,
  [98] = 84,
  [99] = 99,
  [100] = 85,
  [101] = 101,
  [102] = 89,
  [103] = 103,
  [104] = 101,
  [105] = 91,
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
  [122] = 122,
  [123] = 123,
  [124] = 18,
  [125] = 11,
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
  [137] = 131,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 132,
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
  [172] = 172,
  [173] = 173,
  [174] = 173,
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
  [259] = 259,
  [260] = 260,
  [261] = 18,
  [262] = 11,
  [263] = 263,
  [264] = 258,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 258,
  [274] = 258,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '&') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead == '^') ADVANCE(210);
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
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '&') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(417);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 's') ADVANCE(385);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 's') ADVANCE(385);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '~') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '&') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == ']') ADVANCE(275);
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
      if (lookahead == '/') ADVANCE(449);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(450);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'v') ADVANCE(318);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(174);
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
      if (lookahead == 'e') ADVANCE(223);
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
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(197);
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
      if (lookahead == 'n') ADVANCE(184);
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
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(235);
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
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(265);
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
      if (lookahead == 'j') ADVANCE(269);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(191);
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
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(256);
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
      if (lookahead == 'r') ADVANCE(206);
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
      if (lookahead == 'n') ADVANCE(249);
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
      if (lookahead == 'o') ADVANCE(214);
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
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(233);
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
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(193);
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
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(262);
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
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == '|') ADVANCE(205);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 142:
      if (eof) ADVANCE(146);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(318);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 143:
      if (eof) ADVANCE(146);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(318);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 144:
      if (eof) ADVANCE(146);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(315);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_check);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_pred);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(450);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_until);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_releases);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_releases);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_since);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_since);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_triggered);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_triggered);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_iff);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_lone);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_lone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_one);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_eventually);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_eventually);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_historically);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_historically);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_once);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_univ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_univ);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_iden);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_iden);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_fact);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_fact);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_fact);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_sig);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_disj);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_disj);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_disj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'j') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
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
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
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
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 2},
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
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 143},
  [111] = {.lex_state = 143},
  [112] = {.lex_state = 143},
  [113] = {.lex_state = 143},
  [114] = {.lex_state = 143},
  [115] = {.lex_state = 143},
  [116] = {.lex_state = 143},
  [117] = {.lex_state = 143},
  [118] = {.lex_state = 143},
  [119] = {.lex_state = 143},
  [120] = {.lex_state = 145},
  [121] = {.lex_state = 143},
  [122] = {.lex_state = 144},
  [123] = {.lex_state = 143},
  [124] = {.lex_state = 145},
  [125] = {.lex_state = 145},
  [126] = {.lex_state = 144},
  [127] = {.lex_state = 143},
  [128] = {.lex_state = 143},
  [129] = {.lex_state = 143},
  [130] = {.lex_state = 143},
  [131] = {.lex_state = 144},
  [132] = {.lex_state = 144},
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
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 143},
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
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
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
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 142},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 142},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 142},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 142},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 142},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 142},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 142},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 142},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_source_file] = STATE(260),
    [sym_module_decl] = STATE(111),
    [sym__declaration] = STATE(113),
    [sym_cmd_decl] = STATE(113),
    [sym_pred_decl] = STATE(113),
    [sym_fun_decl] = STATE(113),
    [sym_fact_decl] = STATE(113),
    [sym_enum_decl] = STATE(113),
    [sym_sig_decl] = STATE(113),
    [sym_mult] = STATE(241),
    [aux_sym_source_file_repeat1] = STATE(113),
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
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(29), 12,
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
    ACTIONS(43), 32,
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
  [71] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 12,
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
    ACTIONS(49), 30,
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
  [144] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 8,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(49), 20,
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
  [231] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(67), 1,
      anon_sym_iff,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 7,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(49), 19,
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
  [322] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(67), 1,
      anon_sym_iff,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(49), 18,
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
  [417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(45), 14,
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
    ACTIONS(49), 33,
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
  [482] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(45), 13,
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
    ACTIONS(49), 33,
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
  [549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(45), 16,
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
    ACTIONS(49), 33,
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
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 17,
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
    ACTIONS(49), 33,
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
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 18,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
    ACTIONS(75), 33,
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
  [732] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(43), 25,
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
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 18,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
    ACTIONS(43), 33,
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
  [872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 12,
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
    ACTIONS(79), 30,
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
  [945] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 12,
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
    ACTIONS(43), 30,
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
  [1018] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(45), 12,
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
    ACTIONS(49), 32,
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
  [1089] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(67), 1,
      anon_sym_iff,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(81), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(85), 18,
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
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 18,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
    ACTIONS(89), 33,
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
  [1245] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(45), 13,
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
    ACTIONS(49), 32,
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
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 18,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
    ACTIONS(93), 33,
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
  [1373] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 12,
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
    ACTIONS(43), 30,
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
  [1446] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(67), 1,
      anon_sym_iff,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(43), 18,
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
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 18,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
    ACTIONS(97), 33,
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
  [1600] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(59), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(49), 21,
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
  [1683] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_not,
    ACTIONS(35), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(49), 25,
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
  [1764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 26,
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
  [1807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(91), 27,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
  [1848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(49), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 23,
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
  [1895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(49), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 25,
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
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 27,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
  [1981] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(127), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2048] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(49), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 22,
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
  [2099] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(43), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 21,
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
  [2152] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 21,
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
  [2207] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 21,
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
  [2262] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2329] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(180), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(174), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(162), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(177), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(168), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(159), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2396] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(49), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 21,
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
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(95), 27,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
  [2490] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 21,
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
  [2545] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 16,
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
  [2604] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 12,
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
  [2665] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(127), 1,
      sym_qual_name,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(44), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2732] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(127), 1,
      sym_qual_name,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2799] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 10,
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
  [2862] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 16,
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
  [2921] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2986] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(45), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3053] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(77), 21,
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
  [3108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(87), 27,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
  [3149] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(49), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(45), 22,
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
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(73), 27,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
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
  [3239] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(127), 1,
      sym_qual_name,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_number,
    STATE(31), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(17), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3306] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3374] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(216), 1,
      anon_sym_disj,
    ACTIONS(218), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(59), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3438] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(220), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3506] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3574] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(224), 1,
      anon_sym_disj,
    ACTIONS(226), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(57), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3638] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(228), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3706] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(230), 1,
      anon_sym_disj,
    ACTIONS(232), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(54), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3770] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(234), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(29), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
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
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(15), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3892] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(238), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(26), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3953] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(240), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(28), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4014] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(242), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(108), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4075] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(244), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(51), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4136] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(32), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4197] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(248), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(38), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4258] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(250), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(40), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4319] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(252), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(41), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4380] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(254), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(42), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4441] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(256), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(22), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4502] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(258), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(21), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4563] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(260), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(10), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4624] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(262), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(9), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4685] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(264), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(7), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4746] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(266), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(8), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4807] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(268), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(19), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4868] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(270), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(16), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4929] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(272), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(3), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4990] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(25), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5051] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(276), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(24), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5112] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(278), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(4), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5173] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(280), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(5), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5234] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(6), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5295] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(36), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5356] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(2), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5417] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(288), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(56), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5478] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(290), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(13), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5539] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(292), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(35), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5600] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(12), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5661] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(296), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(45), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5722] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(57), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5783] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(298), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(109), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5844] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(300), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(34), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5905] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(302), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(106), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5966] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(304), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(33), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(306), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(47), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6088] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(218), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(59), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6149] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(308), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(48), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6210] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(310), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(49), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6271] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(312), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(30), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6332] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(314), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(107), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6393] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_set,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    ACTIONS(316), 1,
      sym_qual_name,
    STATE(20), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(113), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(123), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(117), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(14), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(111), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6454] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      anon_sym_BANG,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_set,
    ACTIONS(214), 1,
      aux_sym_number_token1,
    ACTIONS(318), 1,
      sym_qual_name,
    STATE(27), 1,
      sym_number,
    ACTIONS(210), 2,
      anon_sym_let,
      anon_sym_sum,
    ACTIONS(202), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(212), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    ACTIONS(206), 4,
      anon_sym_no,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(46), 5,
      sym__expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(200), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6515] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6580] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6645] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6710] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(145), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(147), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(149), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(139), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(143), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [6775] = 14,
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
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(112), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6828] = 14,
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
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
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
  [6881] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      anon_sym_pred,
    ACTIONS(340), 1,
      anon_sym_fun,
    ACTIONS(346), 1,
      anon_sym_fact,
    ACTIONS(349), 1,
      anon_sym_enum,
    ACTIONS(352), 1,
      anon_sym_var,
    ACTIONS(355), 1,
      anon_sym_abstract,
    ACTIONS(358), 1,
      anon_sym_sig,
    ACTIONS(361), 1,
      sym_name,
    STATE(241), 1,
      sym_mult,
    ACTIONS(334), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(343), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(112), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6934] = 14,
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
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(112), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [6987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(366), 13,
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
  [7015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_block,
    ACTIONS(372), 13,
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
  [7043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
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
  [7071] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
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
  [7099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
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
  [7127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
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
  [7155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_but,
    ACTIONS(396), 1,
      sym_qual_name,
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
  [7183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_block,
    ACTIONS(400), 13,
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
  [7211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 1,
      anon_sym_for,
    STATE(144), 1,
      sym_scope,
    ACTIONS(404), 13,
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
  [7239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_block,
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
  [7267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 15,
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
  [7291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 15,
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
  [7315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_scope,
    ACTIONS(414), 13,
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
  [7343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(418), 13,
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
  [7368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      anon_sym_COMMA,
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
  [7393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
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
  [7416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
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
  [7441] = 3,
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
  [7464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 14,
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
  [7487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
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
  [7512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
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
  [7535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 13,
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
  [7557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
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
  [7579] = 3,
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
  [7601] = 3,
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
  [7623] = 3,
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
  [7645] = 3,
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
  [7667] = 3,
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
  [7689] = 3,
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
  [7711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 13,
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
  [7733] = 3,
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
  [7755] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [7777] = 3,
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
  [7799] = 3,
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
  [7821] = 3,
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
  [7843] = 3,
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
  [7865] = 3,
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
  [7887] = 3,
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
  [7909] = 3,
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
  [7931] = 3,
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
  [7953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 13,
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
  [7975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    ACTIONS(492), 13,
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
  [7997] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(165), 1,
      aux_sym_sig_decl_repeat1,
    STATE(199), 1,
      sym_field_decl,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
  [8025] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_field_decl,
  [8053] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(207), 1,
      sym_field_decl,
  [8081] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_sig_decl_repeat1,
    STATE(200), 1,
      sym_field_decl,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
  [8109] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(213), 1,
      sym_field_decl,
  [8137] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(221), 1,
      sym_field_decl,
  [8165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_var,
    ACTIONS(515), 1,
      anon_sym_disj,
    ACTIONS(518), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(242), 1,
      sym_field_decl,
  [8190] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(217), 1,
      sym_field_decl,
  [8215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(207), 1,
      sym_field_decl,
  [8240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(211), 1,
      sym_field_decl,
  [8265] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(213), 1,
      sym_field_decl,
  [8290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(199), 1,
      sym_field_decl,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
  [8315] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_var,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(162), 1,
      aux_sym_sig_decl_repeat1,
    STATE(200), 1,
      sym_field_decl,
    STATE(201), 1,
      sym_decl,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
  [8340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_abstract,
    ACTIONS(525), 1,
      anon_sym_sig,
    STATE(257), 1,
      sym_mult,
    ACTIONS(521), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_exactly,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      aux_sym_number_token1,
    STATE(127), 1,
      sym_typescope,
    STATE(176), 1,
      aux_sym_scope_repeat1,
    STATE(263), 1,
      sym_number,
  [8380] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_exactly,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      aux_sym_number_token1,
    STATE(130), 1,
      sym_typescope,
    STATE(172), 1,
      aux_sym_scope_repeat1,
    STATE(263), 1,
      sym_number,
  [8402] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_exactly,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      aux_sym_number_token1,
    STATE(133), 1,
      sym_typescope,
    STATE(176), 1,
      aux_sym_scope_repeat1,
    STATE(263), 1,
      sym_number,
  [8424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(537), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_exactly,
    ACTIONS(541), 1,
      anon_sym_DASH,
    ACTIONS(543), 1,
      aux_sym_number_token1,
    STATE(120), 1,
      sym_number,
    STATE(128), 1,
      sym_typescope,
    STATE(170), 1,
      aux_sym_scope_repeat1,
  [8474] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_exactly,
    ACTIONS(548), 1,
      anon_sym_DASH,
    ACTIONS(551), 1,
      aux_sym_number_token1,
    STATE(176), 1,
      aux_sym_scope_repeat1,
    STATE(254), 1,
      sym_typescope,
    STATE(263), 1,
      sym_number,
  [8496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(188), 1,
      aux_sym_para_decls_repeat1,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(237), 1,
      sym_decl,
  [8515] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      anon_sym_in,
    ACTIONS(560), 1,
      anon_sym_extends,
    STATE(252), 1,
      sym_sig_extension,
  [8534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_sig,
    STATE(246), 1,
      sym_mult,
    ACTIONS(521), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8549] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    STATE(155), 1,
      sym_block,
    STATE(236), 1,
      sym_para_decls,
  [8568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_disj,
    ACTIONS(571), 1,
      sym_name,
    STATE(181), 1,
      aux_sym_para_decls_repeat1,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(255), 1,
      sym_decl,
  [8587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_in,
    ACTIONS(560), 1,
      anon_sym_extends,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(248), 1,
      sym_sig_extension,
  [8606] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_in,
    ACTIONS(560), 1,
      anon_sym_extends,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(272), 1,
      sym_sig_extension,
  [8625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_in,
    ACTIONS(560), 1,
      anon_sym_extends,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_sig_extension,
  [8644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(186), 1,
      aux_sym_para_decls_repeat1,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(206), 1,
      sym_decl,
  [8663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(181), 1,
      aux_sym_para_decls_repeat1,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(238), 1,
      sym_decl,
  [8682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_sig,
    STATE(257), 1,
      sym_mult,
    ACTIONS(521), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [8697] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(181), 1,
      aux_sym_para_decls_repeat1,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(230), 1,
      sym_decl,
  [8716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_in,
    ACTIONS(560), 1,
      anon_sym_extends,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    STATE(244), 1,
      sym_sig_extension,
  [8735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(245), 1,
      sym_para_decls,
  [8751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_disj,
    ACTIONS(500), 1,
      sym_name,
    STATE(205), 1,
      aux_sym_enum_decl_repeat1,
    STATE(234), 1,
      sym_decl,
  [8767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      aux_sym_number_token1,
    STATE(265), 1,
      sym_number,
  [8780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_qual_name,
    STATE(122), 1,
      sym_block,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DASH,
    ACTIONS(588), 2,
      anon_sym_exactly,
      aux_sym_number_token1,
  [8804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      sym_name,
    STATE(142), 1,
      sym_block,
  [8817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_qual_name,
    STATE(126), 1,
      sym_block,
  [8830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 3,
      anon_sym_var,
      anon_sym_disj,
      sym_name,
  [8839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_qual_name,
    STATE(198), 1,
      aux_sym_sig_extension_repeat1,
  [8849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [8859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [8869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [8887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_name,
    STATE(215), 1,
      aux_sym_enum_decl_repeat1,
  [8897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_qual_name,
    STATE(198), 1,
      aux_sym_sig_extension_repeat1,
  [8907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [8917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
  [8927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [8937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      anon_sym_PLUS,
  [8947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_name,
    STATE(231), 1,
      aux_sym_enum_decl_repeat1,
  [8957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [8967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [8977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [8987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [8997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [9025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [9035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [9055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_name,
    STATE(239), 1,
      aux_sym_enum_decl_repeat1,
  [9065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [9075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_block,
  [9085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_disj,
      sym_name,
  [9103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [9111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_qual_name,
    STATE(204), 1,
      aux_sym_sig_extension_repeat1,
  [9121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
  [9131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_name,
    STATE(229), 1,
      aux_sym_enum_decl_repeat1,
  [9141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [9161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_name,
    STATE(218), 1,
      aux_sym_enum_decl_repeat1,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_name,
    STATE(214), 1,
      aux_sym_enum_decl_repeat1,
  [9191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_run,
      anon_sym_check,
  [9207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
  [9217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
  [9227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
  [9237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [9247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [9257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_sig,
  [9264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
  [9271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_qual_name,
  [9278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [9285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COLON,
  [9292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_sig,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_qual_name,
  [9306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [9313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_name,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_qual_name,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_COLON,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [9341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
  [9348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
  [9355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
  [9362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
  [9369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_sig,
  [9376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      aux_sym_number_token1,
  [9383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [9390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [9397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_qual_name,
  [9404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_qual_name,
  [9411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_qual_name,
  [9418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_number_token1,
  [9425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_qual_name,
  [9432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_name,
  [9439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_PLUS,
  [9446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_sig,
  [9453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_name,
  [9460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_name,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
  [9474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
  [9481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      aux_sym_number_token1,
  [9488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      aux_sym_number_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 417,
  [SMALL_STATE(8)] = 482,
  [SMALL_STATE(9)] = 549,
  [SMALL_STATE(10)] = 612,
  [SMALL_STATE(11)] = 673,
  [SMALL_STATE(12)] = 732,
  [SMALL_STATE(13)] = 813,
  [SMALL_STATE(14)] = 872,
  [SMALL_STATE(15)] = 945,
  [SMALL_STATE(16)] = 1018,
  [SMALL_STATE(17)] = 1089,
  [SMALL_STATE(18)] = 1186,
  [SMALL_STATE(19)] = 1245,
  [SMALL_STATE(20)] = 1314,
  [SMALL_STATE(21)] = 1373,
  [SMALL_STATE(22)] = 1446,
  [SMALL_STATE(23)] = 1541,
  [SMALL_STATE(24)] = 1600,
  [SMALL_STATE(25)] = 1683,
  [SMALL_STATE(26)] = 1764,
  [SMALL_STATE(27)] = 1807,
  [SMALL_STATE(28)] = 1848,
  [SMALL_STATE(29)] = 1895,
  [SMALL_STATE(30)] = 1940,
  [SMALL_STATE(31)] = 1981,
  [SMALL_STATE(32)] = 2048,
  [SMALL_STATE(33)] = 2099,
  [SMALL_STATE(34)] = 2152,
  [SMALL_STATE(35)] = 2207,
  [SMALL_STATE(36)] = 2262,
  [SMALL_STATE(37)] = 2329,
  [SMALL_STATE(38)] = 2396,
  [SMALL_STATE(39)] = 2449,
  [SMALL_STATE(40)] = 2490,
  [SMALL_STATE(41)] = 2545,
  [SMALL_STATE(42)] = 2604,
  [SMALL_STATE(43)] = 2665,
  [SMALL_STATE(44)] = 2732,
  [SMALL_STATE(45)] = 2799,
  [SMALL_STATE(46)] = 2862,
  [SMALL_STATE(47)] = 2921,
  [SMALL_STATE(48)] = 2986,
  [SMALL_STATE(49)] = 3053,
  [SMALL_STATE(50)] = 3108,
  [SMALL_STATE(51)] = 3149,
  [SMALL_STATE(52)] = 3198,
  [SMALL_STATE(53)] = 3239,
  [SMALL_STATE(54)] = 3306,
  [SMALL_STATE(55)] = 3374,
  [SMALL_STATE(56)] = 3438,
  [SMALL_STATE(57)] = 3506,
  [SMALL_STATE(58)] = 3574,
  [SMALL_STATE(59)] = 3638,
  [SMALL_STATE(60)] = 3706,
  [SMALL_STATE(61)] = 3770,
  [SMALL_STATE(62)] = 3831,
  [SMALL_STATE(63)] = 3892,
  [SMALL_STATE(64)] = 3953,
  [SMALL_STATE(65)] = 4014,
  [SMALL_STATE(66)] = 4075,
  [SMALL_STATE(67)] = 4136,
  [SMALL_STATE(68)] = 4197,
  [SMALL_STATE(69)] = 4258,
  [SMALL_STATE(70)] = 4319,
  [SMALL_STATE(71)] = 4380,
  [SMALL_STATE(72)] = 4441,
  [SMALL_STATE(73)] = 4502,
  [SMALL_STATE(74)] = 4563,
  [SMALL_STATE(75)] = 4624,
  [SMALL_STATE(76)] = 4685,
  [SMALL_STATE(77)] = 4746,
  [SMALL_STATE(78)] = 4807,
  [SMALL_STATE(79)] = 4868,
  [SMALL_STATE(80)] = 4929,
  [SMALL_STATE(81)] = 4990,
  [SMALL_STATE(82)] = 5051,
  [SMALL_STATE(83)] = 5112,
  [SMALL_STATE(84)] = 5173,
  [SMALL_STATE(85)] = 5234,
  [SMALL_STATE(86)] = 5295,
  [SMALL_STATE(87)] = 5356,
  [SMALL_STATE(88)] = 5417,
  [SMALL_STATE(89)] = 5478,
  [SMALL_STATE(90)] = 5539,
  [SMALL_STATE(91)] = 5600,
  [SMALL_STATE(92)] = 5661,
  [SMALL_STATE(93)] = 5722,
  [SMALL_STATE(94)] = 5783,
  [SMALL_STATE(95)] = 5844,
  [SMALL_STATE(96)] = 5905,
  [SMALL_STATE(97)] = 5966,
  [SMALL_STATE(98)] = 6027,
  [SMALL_STATE(99)] = 6088,
  [SMALL_STATE(100)] = 6149,
  [SMALL_STATE(101)] = 6210,
  [SMALL_STATE(102)] = 6271,
  [SMALL_STATE(103)] = 6332,
  [SMALL_STATE(104)] = 6393,
  [SMALL_STATE(105)] = 6454,
  [SMALL_STATE(106)] = 6515,
  [SMALL_STATE(107)] = 6580,
  [SMALL_STATE(108)] = 6645,
  [SMALL_STATE(109)] = 6710,
  [SMALL_STATE(110)] = 6775,
  [SMALL_STATE(111)] = 6828,
  [SMALL_STATE(112)] = 6881,
  [SMALL_STATE(113)] = 6934,
  [SMALL_STATE(114)] = 6987,
  [SMALL_STATE(115)] = 7015,
  [SMALL_STATE(116)] = 7043,
  [SMALL_STATE(117)] = 7071,
  [SMALL_STATE(118)] = 7099,
  [SMALL_STATE(119)] = 7127,
  [SMALL_STATE(120)] = 7155,
  [SMALL_STATE(121)] = 7183,
  [SMALL_STATE(122)] = 7211,
  [SMALL_STATE(123)] = 7239,
  [SMALL_STATE(124)] = 7267,
  [SMALL_STATE(125)] = 7291,
  [SMALL_STATE(126)] = 7315,
  [SMALL_STATE(127)] = 7343,
  [SMALL_STATE(128)] = 7368,
  [SMALL_STATE(129)] = 7393,
  [SMALL_STATE(130)] = 7416,
  [SMALL_STATE(131)] = 7441,
  [SMALL_STATE(132)] = 7464,
  [SMALL_STATE(133)] = 7487,
  [SMALL_STATE(134)] = 7512,
  [SMALL_STATE(135)] = 7535,
  [SMALL_STATE(136)] = 7557,
  [SMALL_STATE(137)] = 7579,
  [SMALL_STATE(138)] = 7601,
  [SMALL_STATE(139)] = 7623,
  [SMALL_STATE(140)] = 7645,
  [SMALL_STATE(141)] = 7667,
  [SMALL_STATE(142)] = 7689,
  [SMALL_STATE(143)] = 7711,
  [SMALL_STATE(144)] = 7733,
  [SMALL_STATE(145)] = 7755,
  [SMALL_STATE(146)] = 7777,
  [SMALL_STATE(147)] = 7799,
  [SMALL_STATE(148)] = 7821,
  [SMALL_STATE(149)] = 7843,
  [SMALL_STATE(150)] = 7865,
  [SMALL_STATE(151)] = 7887,
  [SMALL_STATE(152)] = 7909,
  [SMALL_STATE(153)] = 7931,
  [SMALL_STATE(154)] = 7953,
  [SMALL_STATE(155)] = 7975,
  [SMALL_STATE(156)] = 7997,
  [SMALL_STATE(157)] = 8025,
  [SMALL_STATE(158)] = 8053,
  [SMALL_STATE(159)] = 8081,
  [SMALL_STATE(160)] = 8109,
  [SMALL_STATE(161)] = 8137,
  [SMALL_STATE(162)] = 8165,
  [SMALL_STATE(163)] = 8190,
  [SMALL_STATE(164)] = 8215,
  [SMALL_STATE(165)] = 8240,
  [SMALL_STATE(166)] = 8265,
  [SMALL_STATE(167)] = 8290,
  [SMALL_STATE(168)] = 8315,
  [SMALL_STATE(169)] = 8340,
  [SMALL_STATE(170)] = 8358,
  [SMALL_STATE(171)] = 8380,
  [SMALL_STATE(172)] = 8402,
  [SMALL_STATE(173)] = 8424,
  [SMALL_STATE(174)] = 8438,
  [SMALL_STATE(175)] = 8452,
  [SMALL_STATE(176)] = 8474,
  [SMALL_STATE(177)] = 8496,
  [SMALL_STATE(178)] = 8515,
  [SMALL_STATE(179)] = 8534,
  [SMALL_STATE(180)] = 8549,
  [SMALL_STATE(181)] = 8568,
  [SMALL_STATE(182)] = 8587,
  [SMALL_STATE(183)] = 8606,
  [SMALL_STATE(184)] = 8625,
  [SMALL_STATE(185)] = 8644,
  [SMALL_STATE(186)] = 8663,
  [SMALL_STATE(187)] = 8682,
  [SMALL_STATE(188)] = 8697,
  [SMALL_STATE(189)] = 8716,
  [SMALL_STATE(190)] = 8735,
  [SMALL_STATE(191)] = 8751,
  [SMALL_STATE(192)] = 8767,
  [SMALL_STATE(193)] = 8780,
  [SMALL_STATE(194)] = 8793,
  [SMALL_STATE(195)] = 8804,
  [SMALL_STATE(196)] = 8817,
  [SMALL_STATE(197)] = 8830,
  [SMALL_STATE(198)] = 8839,
  [SMALL_STATE(199)] = 8849,
  [SMALL_STATE(200)] = 8859,
  [SMALL_STATE(201)] = 8869,
  [SMALL_STATE(202)] = 8877,
  [SMALL_STATE(203)] = 8887,
  [SMALL_STATE(204)] = 8897,
  [SMALL_STATE(205)] = 8907,
  [SMALL_STATE(206)] = 8917,
  [SMALL_STATE(207)] = 8927,
  [SMALL_STATE(208)] = 8937,
  [SMALL_STATE(209)] = 8947,
  [SMALL_STATE(210)] = 8957,
  [SMALL_STATE(211)] = 8967,
  [SMALL_STATE(212)] = 8977,
  [SMALL_STATE(213)] = 8987,
  [SMALL_STATE(214)] = 8997,
  [SMALL_STATE(215)] = 9007,
  [SMALL_STATE(216)] = 9017,
  [SMALL_STATE(217)] = 9025,
  [SMALL_STATE(218)] = 9035,
  [SMALL_STATE(219)] = 9045,
  [SMALL_STATE(220)] = 9055,
  [SMALL_STATE(221)] = 9065,
  [SMALL_STATE(222)] = 9075,
  [SMALL_STATE(223)] = 9085,
  [SMALL_STATE(224)] = 9095,
  [SMALL_STATE(225)] = 9103,
  [SMALL_STATE(226)] = 9111,
  [SMALL_STATE(227)] = 9121,
  [SMALL_STATE(228)] = 9131,
  [SMALL_STATE(229)] = 9141,
  [SMALL_STATE(230)] = 9151,
  [SMALL_STATE(231)] = 9161,
  [SMALL_STATE(232)] = 9171,
  [SMALL_STATE(233)] = 9181,
  [SMALL_STATE(234)] = 9191,
  [SMALL_STATE(235)] = 9199,
  [SMALL_STATE(236)] = 9207,
  [SMALL_STATE(237)] = 9217,
  [SMALL_STATE(238)] = 9227,
  [SMALL_STATE(239)] = 9237,
  [SMALL_STATE(240)] = 9247,
  [SMALL_STATE(241)] = 9257,
  [SMALL_STATE(242)] = 9264,
  [SMALL_STATE(243)] = 9271,
  [SMALL_STATE(244)] = 9278,
  [SMALL_STATE(245)] = 9285,
  [SMALL_STATE(246)] = 9292,
  [SMALL_STATE(247)] = 9299,
  [SMALL_STATE(248)] = 9306,
  [SMALL_STATE(249)] = 9313,
  [SMALL_STATE(250)] = 9320,
  [SMALL_STATE(251)] = 9327,
  [SMALL_STATE(252)] = 9334,
  [SMALL_STATE(253)] = 9341,
  [SMALL_STATE(254)] = 9348,
  [SMALL_STATE(255)] = 9355,
  [SMALL_STATE(256)] = 9362,
  [SMALL_STATE(257)] = 9369,
  [SMALL_STATE(258)] = 9376,
  [SMALL_STATE(259)] = 9383,
  [SMALL_STATE(260)] = 9390,
  [SMALL_STATE(261)] = 9397,
  [SMALL_STATE(262)] = 9404,
  [SMALL_STATE(263)] = 9411,
  [SMALL_STATE(264)] = 9418,
  [SMALL_STATE(265)] = 9425,
  [SMALL_STATE(266)] = 9432,
  [SMALL_STATE(267)] = 9439,
  [SMALL_STATE(268)] = 9446,
  [SMALL_STATE(269)] = 9453,
  [SMALL_STATE(270)] = 9460,
  [SMALL_STATE(271)] = 9467,
  [SMALL_STATE(272)] = 9474,
  [SMALL_STATE(273)] = 9481,
  [SMALL_STATE(274)] = 9488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prime_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prime_expression, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(258),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, .production_id = 8),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 10),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 9),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 9),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 7),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 8),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 8),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 11),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 11),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_decl, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 12),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 12),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 7),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 8),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 8),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(191),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(203),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(202),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(192),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(274),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(261),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2), SHIFT_REPEAT(203),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2), SHIFT_REPEAT(202),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2), SHIFT_REPEAT(267),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(271),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_para_decls_repeat1, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
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
