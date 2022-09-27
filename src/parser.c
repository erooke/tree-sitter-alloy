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
#define STATE_COUNT 307
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_no = 13,
  anon_sym_all = 14,
  anon_sym_sum = 15,
  anon_sym_mult = 16,
  anon_sym_PIPE = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_DOT = 19,
  anon_sym_LT_COLON = 20,
  anon_sym_COLON_GT = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_AMP = 23,
  anon_sym_PLUS_PLUS = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_not = 28,
  anon_sym_in = 29,
  anon_sym_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_until = 35,
  anon_sym_releases = 36,
  anon_sym_since = 37,
  anon_sym_triggered = 38,
  anon_sym_AMP_AMP = 39,
  anon_sym_and = 40,
  anon_sym_LT_EQ_GT = 41,
  anon_sym_iff = 42,
  anon_sym_PIPE_PIPE = 43,
  anon_sym_or = 44,
  anon_sym_SEMI = 45,
  anon_sym_TILDE = 46,
  anon_sym_CARET = 47,
  anon_sym_STAR = 48,
  anon_sym_POUND = 49,
  anon_sym_some = 50,
  anon_sym_lone = 51,
  anon_sym_one = 52,
  anon_sym_set = 53,
  anon_sym_always = 54,
  anon_sym_eventually = 55,
  anon_sym_after = 56,
  anon_sym_before = 57,
  anon_sym_historically = 58,
  anon_sym_once = 59,
  anon_sym_let = 60,
  anon_sym_none = 61,
  anon_sym_univ = 62,
  anon_sym_iden = 63,
  aux_sym_number_token1 = 64,
  anon_sym_fact = 65,
  anon_sym_enum = 66,
  anon_sym_var = 67,
  anon_sym_abstract = 68,
  anon_sym_sig = 69,
  anon_sym_extends = 70,
  anon_sym_disj = 71,
  anon_sym_LPAREN = 72,
  anon_sym_RPAREN = 73,
  anon_sym_LBRACK = 74,
  anon_sym_RBRACK = 75,
  sym_name = 76,
  sym_qual_name = 77,
  sym_comment = 78,
  sym_source_file = 79,
  sym_module_decl = 80,
  sym__declaration = 81,
  sym_cmd_decl = 82,
  sym_scope = 83,
  sym_typescope = 84,
  sym_pred_decl = 85,
  sym_fun_decl = 86,
  sym__expression = 87,
  sym_quantified_expression = 88,
  sym_prime_expression = 89,
  sym_binary_expression = 90,
  sym_unary_expression = 91,
  sym_constant_expression = 92,
  sym_number = 93,
  sym_block = 94,
  sym_fact_decl = 95,
  sym_enum_decl = 96,
  sym_sig_decl = 97,
  sym_sig_extension = 98,
  sym_decl = 99,
  sym_para_decls = 100,
  sym_field_decl = 101,
  sym_mult = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_scope_repeat1 = 104,
  aux_sym_quantified_expression_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_enum_decl_repeat1 = 107,
  aux_sym_sig_decl_repeat1 = 108,
  aux_sym_sig_extension_repeat1 = 109,
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
  [anon_sym_no] = "no",
  [anon_sym_all] = "all",
  [anon_sym_sum] = "sum",
  [anon_sym_mult] = "mult",
  [anon_sym_PIPE] = "|",
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
  [sym_quantified_expression] = "quantified_expression",
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
  [aux_sym_quantified_expression_repeat1] = "quantified_expression_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_sig_decl_repeat1] = "sig_decl_repeat1",
  [aux_sym_sig_extension_repeat1] = "sig_extension_repeat1",
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
  [anon_sym_no] = anon_sym_no,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_mult] = anon_sym_mult,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_quantified_expression] = sym_quantified_expression,
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
  [aux_sym_quantified_expression_repeat1] = aux_sym_quantified_expression_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_sig_decl_repeat1] = aux_sym_sig_decl_repeat1,
  [aux_sym_sig_extension_repeat1] = aux_sym_sig_extension_repeat1,
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
  [anon_sym_no] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PIPE] = {
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
  [sym_quantified_expression] = {
    .visible = true,
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
  [aux_sym_quantified_expression_repeat1] = {
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
};

enum {
  field_left = 1,
  field_name = 2,
  field_operand = 3,
  field_operator = 4,
  field_quantifier = 5,
  field_right = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_quantifier] = "quantifier",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operand, 1},
    {field_operator, 0},
  [3] =
    {field_quantifier, 0},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_type, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [12] =
    {field_type, 3},
  [13] =
    {field_type, 4},
  [14] =
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
  [34] = 32,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 38,
  [41] = 36,
  [42] = 38,
  [43] = 36,
  [44] = 36,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 17,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 12,
  [55] = 14,
  [56] = 16,
  [57] = 19,
  [58] = 58,
  [59] = 20,
  [60] = 60,
  [61] = 21,
  [62] = 23,
  [63] = 2,
  [64] = 29,
  [65] = 27,
  [66] = 28,
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
  [80] = 53,
  [81] = 11,
  [82] = 79,
  [83] = 78,
  [84] = 77,
  [85] = 76,
  [86] = 75,
  [87] = 74,
  [88] = 30,
  [89] = 73,
  [90] = 72,
  [91] = 71,
  [92] = 70,
  [93] = 69,
  [94] = 68,
  [95] = 95,
  [96] = 10,
  [97] = 26,
  [98] = 98,
  [99] = 99,
  [100] = 18,
  [101] = 25,
  [102] = 4,
  [103] = 52,
  [104] = 104,
  [105] = 13,
  [106] = 106,
  [107] = 107,
  [108] = 51,
  [109] = 6,
  [110] = 50,
  [111] = 48,
  [112] = 104,
  [113] = 22,
  [114] = 114,
  [115] = 58,
  [116] = 8,
  [117] = 117,
  [118] = 118,
  [119] = 15,
  [120] = 5,
  [121] = 31,
  [122] = 9,
  [123] = 3,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 7,
  [128] = 106,
  [129] = 67,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 5,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 15,
  [149] = 149,
  [150] = 150,
  [151] = 8,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 22,
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
  [173] = 22,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 8,
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
  [200] = 197,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
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
  [217] = 205,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 220,
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
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 5,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 280,
  [289] = 289,
  [290] = 290,
  [291] = 15,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 280,
  [301] = 301,
  [302] = 302,
  [303] = 280,
  [304] = 304,
  [305] = 305,
  [306] = 306,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(298);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '~') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(504);
      if (lookahead == '~') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(504);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(533);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'j') ADVANCE(294);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(269);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == '|') ADVANCE(222);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 145:
      if (eof) ADVANCE(149);
      if (lookahead == '(') ADVANCE(298);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_check);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_but);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_but);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_pred);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_pred);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_pred);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_mult);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_mult);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_mult);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(216);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_until);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_releases);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_releases);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_since);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_since);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_triggered);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_triggered);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_iff);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_lone);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_lone);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_lone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_one);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_eventually);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_eventually);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_eventually);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_historically);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_historically);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_historically);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_once);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_once);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_univ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_univ);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_univ);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_iden);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_iden);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_iden);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_fact);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_fact);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_fact);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_sig);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_sig);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_disj);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_disj);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_disj);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_disj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'j') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == 'u') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'j') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(468);
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'j') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 's') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_qual_name);
      if (lookahead == '/') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(534);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
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
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 146},
  [135] = {.lex_state = 146},
  [136] = {.lex_state = 146},
  [137] = {.lex_state = 146},
  [138] = {.lex_state = 148},
  [139] = {.lex_state = 146},
  [140] = {.lex_state = 146},
  [141] = {.lex_state = 146},
  [142] = {.lex_state = 146},
  [143] = {.lex_state = 147},
  [144] = {.lex_state = 146},
  [145] = {.lex_state = 146},
  [146] = {.lex_state = 146},
  [147] = {.lex_state = 147},
  [148] = {.lex_state = 148},
  [149] = {.lex_state = 148},
  [150] = {.lex_state = 146},
  [151] = {.lex_state = 147},
  [152] = {.lex_state = 146},
  [153] = {.lex_state = 146},
  [154] = {.lex_state = 146},
  [155] = {.lex_state = 146},
  [156] = {.lex_state = 146},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 146},
  [159] = {.lex_state = 146},
  [160] = {.lex_state = 146},
  [161] = {.lex_state = 146},
  [162] = {.lex_state = 146},
  [163] = {.lex_state = 146},
  [164] = {.lex_state = 146},
  [165] = {.lex_state = 146},
  [166] = {.lex_state = 146},
  [167] = {.lex_state = 146},
  [168] = {.lex_state = 146},
  [169] = {.lex_state = 146},
  [170] = {.lex_state = 146},
  [171] = {.lex_state = 146},
  [172] = {.lex_state = 146},
  [173] = {.lex_state = 146},
  [174] = {.lex_state = 146},
  [175] = {.lex_state = 146},
  [176] = {.lex_state = 146},
  [177] = {.lex_state = 146},
  [178] = {.lex_state = 146},
  [179] = {.lex_state = 146},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 145},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 145},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 145},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 145},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 145},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 13},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 13},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 145},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 145},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 145},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 13},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 0},
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
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_mult] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(273),
    [sym_module_decl] = STATE(137),
    [sym__declaration] = STATE(134),
    [sym_cmd_decl] = STATE(134),
    [sym_pred_decl] = STATE(134),
    [sym_fun_decl] = STATE(134),
    [sym_fact_decl] = STATE(134),
    [sym_enum_decl] = STATE(134),
    [sym_sig_decl] = STATE(134),
    [sym_mult] = STATE(287),
    [aux_sym_source_file_repeat1] = STATE(134),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(29), 14,
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
    ACTIONS(31), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [67] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 18,
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
    ACTIONS(41), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [128] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 9,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(45), 27,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 18,
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
    ACTIONS(65), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 18,
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
    ACTIONS(69), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [333] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      anon_sym_or,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(39), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(41), 20,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [432] = 3,
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
    ACTIONS(89), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [493] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 12,
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
    ACTIONS(93), 32,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [568] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      anon_sym_or,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
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
    ACTIONS(31), 20,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [665] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 7,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(31), 21,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
      anon_sym_or,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [758] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 8,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(31), 22,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
      anon_sym_iff,
      anon_sym_or,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [847] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 12,
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
    ACTIONS(45), 32,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [922] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
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
    ACTIONS(31), 23,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1007] = 3,
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
    ACTIONS(97), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1068] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
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
    ACTIONS(31), 27,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
      anon_sym_and,
      anon_sym_iff,
      anon_sym_or,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1151] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      anon_sym_or,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(43), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(45), 20,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1248] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(43), 12,
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
    ACTIONS(45), 34,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
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
    ACTIONS(31), 32,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1396] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
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
    ACTIONS(31), 34,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1469] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(29), 13,
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
    ACTIONS(31), 34,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 18,
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
    ACTIONS(101), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(29), 13,
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
    ACTIONS(31), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1670] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      anon_sym_or,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(103), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(105), 20,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 18,
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
    ACTIONS(45), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1830] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 12,
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
    ACTIONS(45), 32,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
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
    ACTIONS(31), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 18,
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
    ACTIONS(109), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [2029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(29), 16,
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
    ACTIONS(31), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 18,
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
    ACTIONS(113), 35,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [2155] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(75), 1,
      anon_sym_and,
    ACTIONS(77), 1,
      anon_sym_LT_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_iff,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      anon_sym_or,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(71), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(115), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_POUND,
    ACTIONS(117), 20,
      anon_sym_no,
      anon_sym_all,
      anon_sym_sum,
      anon_sym_mult,
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
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
      aux_sym_number_token1,
      sym_qual_name,
  [2254] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(149), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    STATE(206), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(222), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(13), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2339] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(151), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    STATE(206), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(222), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(17), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2424] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(179), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    STATE(204), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(219), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(105), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2509] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(181), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    STATE(204), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(219), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(49), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2594] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2670] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_no,
    ACTIONS(195), 1,
      anon_sym_sum,
    ACTIONS(198), 1,
      anon_sym_DASH,
    ACTIONS(201), 1,
      anon_sym_BANG,
    ACTIONS(210), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      anon_sym_set,
    ACTIONS(219), 1,
      anon_sym_let,
    ACTIONS(225), 1,
      aux_sym_number_token1,
    ACTIONS(228), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(192), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(207), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(213), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(222), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(204), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2746] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(36), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2822] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(44), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2898] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(41), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [2974] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3050] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(43), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3126] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3202] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym_qual_name,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_number,
    STATE(37), 1,
      aux_sym_block_repeat1,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(24), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3278] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_disj,
    ACTIONS(247), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(118), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3351] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(249), 1,
      anon_sym_disj,
    ACTIONS(251), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(99), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3424] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(253), 1,
      anon_sym_disj,
    ACTIONS(255), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(125), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3497] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(257), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(25), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3567] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(43), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3637] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(18), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3707] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(149), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(13), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3777] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(289), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(26), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3847] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(151), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(17), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [3917] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 10,
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
  [3983] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 12,
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
  [4047] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
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
  [4109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 4,
      anon_sym_PIPE,
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
  [4165] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(291), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(122), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4235] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(31), 6,
      anon_sym_PIPE,
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
  [4289] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(293), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(132), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4359] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(31), 6,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 22,
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
  [4411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(31), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 22,
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
  [4461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(31), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 23,
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
  [4509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(31), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(29), 25,
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
  [4555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 7,
      anon_sym_PIPE,
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
  [4599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(107), 27,
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
  [4641] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(295), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(127), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4711] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(297), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(96), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4781] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(299), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(81), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4851] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(301), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(54), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4921] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(303), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(55), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [4991] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(305), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(56), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5061] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(307), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(57), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5131] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(309), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(59), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5201] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(311), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(61), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5271] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(313), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(62), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5341] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(315), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(63), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5411] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(317), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(64), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5481] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(319), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(65), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5551] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(181), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(49), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5621] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(29), 8,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5689] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(321), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(27), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5759] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(323), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(29), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5829] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(325), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(2), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5899] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(327), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(23), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [5969] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(21), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6039] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(331), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(20), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(111), 27,
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
  [6151] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(333), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(19), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6221] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(335), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(16), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6291] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(337), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(14), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6361] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(339), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(12), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6431] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(341), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(11), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6501] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(343), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(10), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6571] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(345), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(131), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6641] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
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
  [6711] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 21,
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
  [6767] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(255), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(125), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [6837] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(347), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6909] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(45), 6,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 21,
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
  [6963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 27,
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
  [7005] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 16,
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
  [7067] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(353), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(97), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7137] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(355), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(4), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7207] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(43), 21,
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
  [7263] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(357), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(31), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7333] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(359), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(130), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7403] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(179), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(105), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(67), 27,
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
  [7515] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(361), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(100), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7585] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(363), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(101), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7655] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(365), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(102), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(99), 27,
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
  [7767] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(369), 1,
      anon_sym_PIPE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(367), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7839] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(371), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(9), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [7909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 7,
      anon_sym_PIPE,
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
  [7951] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(373), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(114), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [8021] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(375), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_PIPE,
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
  [8135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(63), 27,
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
  [8177] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(115), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8249] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(93), 4,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(91), 21,
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
  [8305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(39), 27,
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
  [8347] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(379), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(133), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [8417] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(383), 1,
      anon_sym_PIPE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(381), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8489] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(247), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(118), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [8559] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
    ACTIONS(39), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8631] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_no,
    ACTIONS(157), 1,
      anon_sym_sum,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      aux_sym_number_token1,
    ACTIONS(385), 1,
      sym_qual_name,
    STATE(109), 1,
      sym_number,
    ACTIONS(155), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(165), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(169), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(175), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(121), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(163), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [8701] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_no,
    ACTIONS(123), 1,
      anon_sym_sum,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_set,
    ACTIONS(139), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      aux_sym_number_token1,
    ACTIONS(387), 1,
      sym_qual_name,
    STATE(6), 1,
      sym_number,
    ACTIONS(121), 2,
      anon_sym_all,
      anon_sym_mult,
    ACTIONS(131), 3,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_STAR,
    ACTIONS(135), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    ACTIONS(141), 3,
      anon_sym_none,
      anon_sym_univ,
      anon_sym_iden,
    STATE(7), 6,
      sym__expression,
      sym_quantified_expression,
      sym_prime_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_constant_expression,
    ACTIONS(129), 7,
      anon_sym_not,
      anon_sym_always,
      anon_sym_eventually,
      anon_sym_after,
      anon_sym_before,
      anon_sym_historically,
      anon_sym_once,
  [8771] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [8836] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [8901] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [8966] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 2,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(281), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(283), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_iff,
    ACTIONS(285), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(275), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(277), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
    ACTIONS(279), 4,
      anon_sym_until,
      anon_sym_releases,
      anon_sym_since,
      anon_sym_triggered,
  [9031] = 14,
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
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(136), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [9084] = 14,
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
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(136), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [9137] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 1,
      anon_sym_pred,
    ACTIONS(409), 1,
      anon_sym_fun,
    ACTIONS(415), 1,
      anon_sym_fact,
    ACTIONS(418), 1,
      anon_sym_enum,
    ACTIONS(421), 1,
      anon_sym_var,
    ACTIONS(424), 1,
      anon_sym_abstract,
    ACTIONS(427), 1,
      anon_sym_sig,
    ACTIONS(430), 1,
      sym_name,
    STATE(287), 1,
      sym_mult,
    ACTIONS(403), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(412), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(136), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [9190] = 14,
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
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym_mult,
    ACTIONS(9), 2,
      anon_sym_run,
      anon_sym_check,
    ACTIONS(15), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
    STATE(135), 8,
      sym__declaration,
      sym_cmd_decl,
      sym_pred_decl,
      sym_fun_decl,
      sym_fact_decl,
      sym_enum_decl,
      sym_sig_decl,
      aux_sym_source_file_repeat1,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 15,
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
  [9267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_block,
    ACTIONS(435), 13,
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
  [9295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_block,
    ACTIONS(441), 13,
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
  [9323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_block,
    ACTIONS(445), 13,
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
  [9351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_block,
    ACTIONS(449), 13,
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
  [9379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      anon_sym_for,
    STATE(169), 1,
      sym_scope,
    ACTIONS(453), 13,
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
  [9407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_block,
    ACTIONS(459), 13,
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
  [9435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_block,
    ACTIONS(463), 13,
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
  [9463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      sym_block,
    ACTIONS(467), 13,
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
  [9491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_for,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_scope,
    ACTIONS(471), 13,
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
  [9519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 15,
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
  [9543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 1,
      anon_sym_but,
    ACTIONS(479), 1,
      sym_qual_name,
    ACTIONS(475), 13,
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
  [9571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_block,
    ACTIONS(483), 13,
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
  [9599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 14,
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
  [9622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(487), 13,
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
  [9647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(493), 13,
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
  [9670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(497), 13,
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
  [9693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 13,
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
  [9718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(475), 13,
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
  [9743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 14,
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
  [9766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 13,
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
  [9791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 13,
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
  [9813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 13,
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
  [9835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 13,
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
  [9857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 13,
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
  [9879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 13,
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
  [9901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 13,
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
  [9923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 13,
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
  [9945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 13,
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
  [9967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 13,
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
  [9989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 13,
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
  [10011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 13,
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
  [10033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 13,
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
  [10055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 13,
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
  [10077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 13,
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
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 13,
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
  [10121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 13,
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
  [10143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 13,
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
  [10165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 13,
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
  [10187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 13,
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
  [10209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 13,
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
  [10231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 13,
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
  [10253] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(192), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(268), 1,
      sym_field_decl,
  [10281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(264), 1,
      sym_field_decl,
  [10309] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(269), 1,
      sym_field_decl,
  [10337] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(235), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10365] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(240), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10393] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(233), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10421] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(264), 1,
      sym_field_decl,
  [10446] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(572), 1,
      anon_sym_disj,
    ACTIONS(575), 1,
      sym_name,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(295), 1,
      sym_field_decl,
  [10471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(240), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(237), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(268), 1,
      sym_field_decl,
  [10546] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(235), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    ACTIONS(557), 1,
      anon_sym_var,
    STATE(187), 1,
      aux_sym_sig_decl_repeat1,
    STATE(232), 1,
      sym_decl,
    STATE(233), 1,
      sym_field_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10596] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_exactly,
    ACTIONS(581), 1,
      anon_sym_DASH,
    ACTIONS(584), 1,
      aux_sym_number_token1,
    STATE(193), 1,
      aux_sym_scope_repeat1,
    STATE(284), 1,
      sym_typescope,
    STATE(286), 1,
      sym_number,
  [10618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_exactly,
    ACTIONS(589), 1,
      anon_sym_DASH,
    ACTIONS(591), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_typescope,
    STATE(193), 1,
      aux_sym_scope_repeat1,
    STATE(286), 1,
      sym_number,
  [10640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_exactly,
    ACTIONS(589), 1,
      anon_sym_DASH,
    ACTIONS(591), 1,
      aux_sym_number_token1,
    STATE(152), 1,
      sym_typescope,
    STATE(196), 1,
      aux_sym_scope_repeat1,
    STATE(286), 1,
      sym_number,
  [10662] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_exactly,
    ACTIONS(589), 1,
      anon_sym_DASH,
    ACTIONS(591), 1,
      aux_sym_number_token1,
    STATE(158), 1,
      sym_typescope,
    STATE(193), 1,
      aux_sym_scope_repeat1,
    STATE(286), 1,
      sym_number,
  [10684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(593), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_exactly,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(599), 1,
      aux_sym_number_token1,
    STATE(149), 1,
      sym_number,
    STATE(156), 1,
      sym_typescope,
    STATE(194), 1,
      aux_sym_scope_repeat1,
  [10720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_abstract,
    ACTIONS(605), 1,
      anon_sym_sig,
    STATE(276), 1,
      sym_mult,
    ACTIONS(601), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [10738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(607), 4,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      anon_sym_in,
    ACTIONS(617), 1,
      anon_sym_extends,
    STATE(290), 1,
      sym_sig_extension,
  [10771] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(207), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(244), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_in,
    ACTIONS(617), 1,
      anon_sym_extends,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_sig_extension,
  [10809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(207), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(220), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(204), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(219), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(207), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(223), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_disj,
    ACTIONS(624), 1,
      sym_name,
    STATE(207), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(298), 1,
      sym_decl,
  [10885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(207), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(247), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_in,
    ACTIONS(617), 1,
      anon_sym_extends,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_sig_extension,
  [10923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(208), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(245), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [10942] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_in,
    ACTIONS(617), 1,
      anon_sym_extends,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_sig_extension,
  [10961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_sig,
    STATE(276), 1,
      sym_mult,
    ACTIONS(601), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [10976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_LBRACK,
    STATE(170), 1,
      sym_block,
    STATE(265), 1,
      sym_para_decls,
  [10995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(202), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(246), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [11014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_sig,
    STATE(281), 1,
      sym_mult,
    ACTIONS(601), 3,
      anon_sym_some,
      anon_sym_lone,
      anon_sym_one,
  [11029] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_in,
    ACTIONS(617), 1,
      anon_sym_extends,
    ACTIONS(637), 1,
      anon_sym_LBRACE,
    STATE(274), 1,
      sym_sig_extension,
  [11048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(206), 1,
      aux_sym_quantified_expression_repeat1,
    STATE(222), 1,
      sym_decl,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
  [11067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym_para_decls,
  [11083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      sym_block,
  [11099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      anon_sym_PIPE,
    STATE(123), 1,
      sym_block,
  [11115] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_disj,
    ACTIONS(147), 1,
      sym_name,
    STATE(248), 1,
      aux_sym_enum_decl_repeat1,
    STATE(270), 1,
      sym_decl,
  [11131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    STATE(28), 1,
      sym_block,
  [11147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(653), 1,
      anon_sym_PIPE,
    STATE(3), 1,
      sym_block,
  [11163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 3,
      anon_sym_var,
      anon_sym_disj,
      sym_name,
  [11172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(657), 1,
      sym_name,
    STATE(165), 1,
      sym_block,
  [11185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(661), 1,
      sym_qual_name,
    STATE(147), 1,
      sym_block,
  [11198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(663), 1,
      sym_qual_name,
    STATE(143), 1,
      sym_block,
  [11211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_DASH,
    ACTIONS(665), 2,
      anon_sym_exactly,
      aux_sym_number_token1,
  [11222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DASH,
    ACTIONS(591), 1,
      aux_sym_number_token1,
    STATE(305), 1,
      sym_number,
  [11235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_COLON,
  [11245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_PLUS,
  [11255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [11281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [11291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_name,
    STATE(255), 1,
      aux_sym_enum_decl_repeat1,
  [11301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
  [11311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [11321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [11349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
  [11369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [11379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [11389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [11399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
  [11409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [11429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_name,
    STATE(257), 1,
      aux_sym_enum_decl_repeat1,
  [11439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_disj,
      sym_name,
  [11457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_name,
    STATE(267), 1,
      aux_sym_enum_decl_repeat1,
  [11467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_qual_name,
    STATE(272), 1,
      aux_sym_sig_extension_repeat1,
  [11477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_qual_name,
    STATE(256), 1,
      aux_sym_sig_extension_repeat1,
  [11497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_COLON,
  [11527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_block,
  [11537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_name,
    STATE(239), 1,
      aux_sym_enum_decl_repeat1,
  [11547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_name,
    STATE(242), 1,
      aux_sym_enum_decl_repeat1,
  [11557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_PLUS,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
  [11567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_block,
  [11587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(258), 1,
      aux_sym_enum_decl_repeat1,
  [11597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(251), 1,
      aux_sym_enum_decl_repeat1,
  [11607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_run,
      anon_sym_check,
  [11643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_qual_name,
    STATE(256), 1,
      aux_sym_sig_extension_repeat1,
  [11653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
  [11660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [11667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
  [11674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_sig,
  [11681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_qual_name,
  [11688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
  [11695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
  [11702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_number_token1,
  [11709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_sig,
  [11716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_qual_name,
  [11723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_qual_name,
  [11730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
  [11737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_name,
  [11744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_qual_name,
  [11751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_sig,
  [11758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_number_token1,
  [11765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [11772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
  [11779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_qual_name,
  [11786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_COLON,
  [11793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_PLUS,
  [11800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_name,
  [11807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [11814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
  [11821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
  [11828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
  [11835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_sig,
  [11842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_number_token1,
  [11849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_name,
  [11856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_name,
  [11863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_number_token1,
  [11870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_qual_name,
  [11877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_qual_name,
  [11884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 211,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 493,
  [SMALL_STATE(10)] = 568,
  [SMALL_STATE(11)] = 665,
  [SMALL_STATE(12)] = 758,
  [SMALL_STATE(13)] = 847,
  [SMALL_STATE(14)] = 922,
  [SMALL_STATE(15)] = 1007,
  [SMALL_STATE(16)] = 1068,
  [SMALL_STATE(17)] = 1151,
  [SMALL_STATE(18)] = 1248,
  [SMALL_STATE(19)] = 1321,
  [SMALL_STATE(20)] = 1396,
  [SMALL_STATE(21)] = 1469,
  [SMALL_STATE(22)] = 1540,
  [SMALL_STATE(23)] = 1601,
  [SMALL_STATE(24)] = 1670,
  [SMALL_STATE(25)] = 1769,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1905,
  [SMALL_STATE(28)] = 1968,
  [SMALL_STATE(29)] = 2029,
  [SMALL_STATE(30)] = 2094,
  [SMALL_STATE(31)] = 2155,
  [SMALL_STATE(32)] = 2254,
  [SMALL_STATE(33)] = 2339,
  [SMALL_STATE(34)] = 2424,
  [SMALL_STATE(35)] = 2509,
  [SMALL_STATE(36)] = 2594,
  [SMALL_STATE(37)] = 2670,
  [SMALL_STATE(38)] = 2746,
  [SMALL_STATE(39)] = 2822,
  [SMALL_STATE(40)] = 2898,
  [SMALL_STATE(41)] = 2974,
  [SMALL_STATE(42)] = 3050,
  [SMALL_STATE(43)] = 3126,
  [SMALL_STATE(44)] = 3202,
  [SMALL_STATE(45)] = 3278,
  [SMALL_STATE(46)] = 3351,
  [SMALL_STATE(47)] = 3424,
  [SMALL_STATE(48)] = 3497,
  [SMALL_STATE(49)] = 3567,
  [SMALL_STATE(50)] = 3637,
  [SMALL_STATE(51)] = 3707,
  [SMALL_STATE(52)] = 3777,
  [SMALL_STATE(53)] = 3847,
  [SMALL_STATE(54)] = 3917,
  [SMALL_STATE(55)] = 3983,
  [SMALL_STATE(56)] = 4047,
  [SMALL_STATE(57)] = 4109,
  [SMALL_STATE(58)] = 4165,
  [SMALL_STATE(59)] = 4235,
  [SMALL_STATE(60)] = 4289,
  [SMALL_STATE(61)] = 4359,
  [SMALL_STATE(62)] = 4411,
  [SMALL_STATE(63)] = 4461,
  [SMALL_STATE(64)] = 4509,
  [SMALL_STATE(65)] = 4555,
  [SMALL_STATE(66)] = 4599,
  [SMALL_STATE(67)] = 4641,
  [SMALL_STATE(68)] = 4711,
  [SMALL_STATE(69)] = 4781,
  [SMALL_STATE(70)] = 4851,
  [SMALL_STATE(71)] = 4921,
  [SMALL_STATE(72)] = 4991,
  [SMALL_STATE(73)] = 5061,
  [SMALL_STATE(74)] = 5131,
  [SMALL_STATE(75)] = 5201,
  [SMALL_STATE(76)] = 5271,
  [SMALL_STATE(77)] = 5341,
  [SMALL_STATE(78)] = 5411,
  [SMALL_STATE(79)] = 5481,
  [SMALL_STATE(80)] = 5551,
  [SMALL_STATE(81)] = 5621,
  [SMALL_STATE(82)] = 5689,
  [SMALL_STATE(83)] = 5759,
  [SMALL_STATE(84)] = 5829,
  [SMALL_STATE(85)] = 5899,
  [SMALL_STATE(86)] = 5969,
  [SMALL_STATE(87)] = 6039,
  [SMALL_STATE(88)] = 6109,
  [SMALL_STATE(89)] = 6151,
  [SMALL_STATE(90)] = 6221,
  [SMALL_STATE(91)] = 6291,
  [SMALL_STATE(92)] = 6361,
  [SMALL_STATE(93)] = 6431,
  [SMALL_STATE(94)] = 6501,
  [SMALL_STATE(95)] = 6571,
  [SMALL_STATE(96)] = 6641,
  [SMALL_STATE(97)] = 6711,
  [SMALL_STATE(98)] = 6767,
  [SMALL_STATE(99)] = 6837,
  [SMALL_STATE(100)] = 6909,
  [SMALL_STATE(101)] = 6963,
  [SMALL_STATE(102)] = 7005,
  [SMALL_STATE(103)] = 7067,
  [SMALL_STATE(104)] = 7137,
  [SMALL_STATE(105)] = 7207,
  [SMALL_STATE(106)] = 7263,
  [SMALL_STATE(107)] = 7333,
  [SMALL_STATE(108)] = 7403,
  [SMALL_STATE(109)] = 7473,
  [SMALL_STATE(110)] = 7515,
  [SMALL_STATE(111)] = 7585,
  [SMALL_STATE(112)] = 7655,
  [SMALL_STATE(113)] = 7725,
  [SMALL_STATE(114)] = 7767,
  [SMALL_STATE(115)] = 7839,
  [SMALL_STATE(116)] = 7909,
  [SMALL_STATE(117)] = 7951,
  [SMALL_STATE(118)] = 8021,
  [SMALL_STATE(119)] = 8093,
  [SMALL_STATE(120)] = 8135,
  [SMALL_STATE(121)] = 8177,
  [SMALL_STATE(122)] = 8249,
  [SMALL_STATE(123)] = 8305,
  [SMALL_STATE(124)] = 8347,
  [SMALL_STATE(125)] = 8417,
  [SMALL_STATE(126)] = 8489,
  [SMALL_STATE(127)] = 8559,
  [SMALL_STATE(128)] = 8631,
  [SMALL_STATE(129)] = 8701,
  [SMALL_STATE(130)] = 8771,
  [SMALL_STATE(131)] = 8836,
  [SMALL_STATE(132)] = 8901,
  [SMALL_STATE(133)] = 8966,
  [SMALL_STATE(134)] = 9031,
  [SMALL_STATE(135)] = 9084,
  [SMALL_STATE(136)] = 9137,
  [SMALL_STATE(137)] = 9190,
  [SMALL_STATE(138)] = 9243,
  [SMALL_STATE(139)] = 9267,
  [SMALL_STATE(140)] = 9295,
  [SMALL_STATE(141)] = 9323,
  [SMALL_STATE(142)] = 9351,
  [SMALL_STATE(143)] = 9379,
  [SMALL_STATE(144)] = 9407,
  [SMALL_STATE(145)] = 9435,
  [SMALL_STATE(146)] = 9463,
  [SMALL_STATE(147)] = 9491,
  [SMALL_STATE(148)] = 9519,
  [SMALL_STATE(149)] = 9543,
  [SMALL_STATE(150)] = 9571,
  [SMALL_STATE(151)] = 9599,
  [SMALL_STATE(152)] = 9622,
  [SMALL_STATE(153)] = 9647,
  [SMALL_STATE(154)] = 9670,
  [SMALL_STATE(155)] = 9693,
  [SMALL_STATE(156)] = 9718,
  [SMALL_STATE(157)] = 9743,
  [SMALL_STATE(158)] = 9766,
  [SMALL_STATE(159)] = 9791,
  [SMALL_STATE(160)] = 9813,
  [SMALL_STATE(161)] = 9835,
  [SMALL_STATE(162)] = 9857,
  [SMALL_STATE(163)] = 9879,
  [SMALL_STATE(164)] = 9901,
  [SMALL_STATE(165)] = 9923,
  [SMALL_STATE(166)] = 9945,
  [SMALL_STATE(167)] = 9967,
  [SMALL_STATE(168)] = 9989,
  [SMALL_STATE(169)] = 10011,
  [SMALL_STATE(170)] = 10033,
  [SMALL_STATE(171)] = 10055,
  [SMALL_STATE(172)] = 10077,
  [SMALL_STATE(173)] = 10099,
  [SMALL_STATE(174)] = 10121,
  [SMALL_STATE(175)] = 10143,
  [SMALL_STATE(176)] = 10165,
  [SMALL_STATE(177)] = 10187,
  [SMALL_STATE(178)] = 10209,
  [SMALL_STATE(179)] = 10231,
  [SMALL_STATE(180)] = 10253,
  [SMALL_STATE(181)] = 10281,
  [SMALL_STATE(182)] = 10309,
  [SMALL_STATE(183)] = 10337,
  [SMALL_STATE(184)] = 10365,
  [SMALL_STATE(185)] = 10393,
  [SMALL_STATE(186)] = 10421,
  [SMALL_STATE(187)] = 10446,
  [SMALL_STATE(188)] = 10471,
  [SMALL_STATE(189)] = 10496,
  [SMALL_STATE(190)] = 10521,
  [SMALL_STATE(191)] = 10546,
  [SMALL_STATE(192)] = 10571,
  [SMALL_STATE(193)] = 10596,
  [SMALL_STATE(194)] = 10618,
  [SMALL_STATE(195)] = 10640,
  [SMALL_STATE(196)] = 10662,
  [SMALL_STATE(197)] = 10684,
  [SMALL_STATE(198)] = 10698,
  [SMALL_STATE(199)] = 10720,
  [SMALL_STATE(200)] = 10738,
  [SMALL_STATE(201)] = 10752,
  [SMALL_STATE(202)] = 10771,
  [SMALL_STATE(203)] = 10790,
  [SMALL_STATE(204)] = 10809,
  [SMALL_STATE(205)] = 10828,
  [SMALL_STATE(206)] = 10847,
  [SMALL_STATE(207)] = 10866,
  [SMALL_STATE(208)] = 10885,
  [SMALL_STATE(209)] = 10904,
  [SMALL_STATE(210)] = 10923,
  [SMALL_STATE(211)] = 10942,
  [SMALL_STATE(212)] = 10961,
  [SMALL_STATE(213)] = 10976,
  [SMALL_STATE(214)] = 10995,
  [SMALL_STATE(215)] = 11014,
  [SMALL_STATE(216)] = 11029,
  [SMALL_STATE(217)] = 11048,
  [SMALL_STATE(218)] = 11067,
  [SMALL_STATE(219)] = 11083,
  [SMALL_STATE(220)] = 11099,
  [SMALL_STATE(221)] = 11115,
  [SMALL_STATE(222)] = 11131,
  [SMALL_STATE(223)] = 11147,
  [SMALL_STATE(224)] = 11163,
  [SMALL_STATE(225)] = 11172,
  [SMALL_STATE(226)] = 11185,
  [SMALL_STATE(227)] = 11198,
  [SMALL_STATE(228)] = 11211,
  [SMALL_STATE(229)] = 11222,
  [SMALL_STATE(230)] = 11235,
  [SMALL_STATE(231)] = 11245,
  [SMALL_STATE(232)] = 11255,
  [SMALL_STATE(233)] = 11263,
  [SMALL_STATE(234)] = 11273,
  [SMALL_STATE(235)] = 11281,
  [SMALL_STATE(236)] = 11291,
  [SMALL_STATE(237)] = 11301,
  [SMALL_STATE(238)] = 11311,
  [SMALL_STATE(239)] = 11321,
  [SMALL_STATE(240)] = 11331,
  [SMALL_STATE(241)] = 11341,
  [SMALL_STATE(242)] = 11349,
  [SMALL_STATE(243)] = 11359,
  [SMALL_STATE(244)] = 11369,
  [SMALL_STATE(245)] = 11379,
  [SMALL_STATE(246)] = 11389,
  [SMALL_STATE(247)] = 11399,
  [SMALL_STATE(248)] = 11409,
  [SMALL_STATE(249)] = 11419,
  [SMALL_STATE(250)] = 11429,
  [SMALL_STATE(251)] = 11439,
  [SMALL_STATE(252)] = 11449,
  [SMALL_STATE(253)] = 11457,
  [SMALL_STATE(254)] = 11467,
  [SMALL_STATE(255)] = 11477,
  [SMALL_STATE(256)] = 11487,
  [SMALL_STATE(257)] = 11497,
  [SMALL_STATE(258)] = 11507,
  [SMALL_STATE(259)] = 11517,
  [SMALL_STATE(260)] = 11527,
  [SMALL_STATE(261)] = 11537,
  [SMALL_STATE(262)] = 11547,
  [SMALL_STATE(263)] = 11557,
  [SMALL_STATE(264)] = 11567,
  [SMALL_STATE(265)] = 11577,
  [SMALL_STATE(266)] = 11587,
  [SMALL_STATE(267)] = 11597,
  [SMALL_STATE(268)] = 11607,
  [SMALL_STATE(269)] = 11617,
  [SMALL_STATE(270)] = 11627,
  [SMALL_STATE(271)] = 11635,
  [SMALL_STATE(272)] = 11643,
  [SMALL_STATE(273)] = 11653,
  [SMALL_STATE(274)] = 11660,
  [SMALL_STATE(275)] = 11667,
  [SMALL_STATE(276)] = 11674,
  [SMALL_STATE(277)] = 11681,
  [SMALL_STATE(278)] = 11688,
  [SMALL_STATE(279)] = 11695,
  [SMALL_STATE(280)] = 11702,
  [SMALL_STATE(281)] = 11709,
  [SMALL_STATE(282)] = 11716,
  [SMALL_STATE(283)] = 11723,
  [SMALL_STATE(284)] = 11730,
  [SMALL_STATE(285)] = 11737,
  [SMALL_STATE(286)] = 11744,
  [SMALL_STATE(287)] = 11751,
  [SMALL_STATE(288)] = 11758,
  [SMALL_STATE(289)] = 11765,
  [SMALL_STATE(290)] = 11772,
  [SMALL_STATE(291)] = 11779,
  [SMALL_STATE(292)] = 11786,
  [SMALL_STATE(293)] = 11793,
  [SMALL_STATE(294)] = 11800,
  [SMALL_STATE(295)] = 11807,
  [SMALL_STATE(296)] = 11814,
  [SMALL_STATE(297)] = 11821,
  [SMALL_STATE(298)] = 11828,
  [SMALL_STATE(299)] = 11835,
  [SMALL_STATE(300)] = 11842,
  [SMALL_STATE(301)] = 11849,
  [SMALL_STATE(302)] = 11856,
  [SMALL_STATE(303)] = 11863,
  [SMALL_STATE(304)] = 11870,
  [SMALL_STATE(305)] = 11877,
  [SMALL_STATE(306)] = 11884,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 4, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 4, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4, .production_id = 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 3, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 3, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prime_expression, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prime_expression, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_expression, 5, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantified_expression, 5, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(217),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(53),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 3, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 3, .production_id = 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 6, .production_id = 9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 6, .production_id = 9),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 8),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 5, .production_id = 8),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 7),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl, 4, .production_id = 7),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 7),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 7),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 8),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 9),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 9),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 10),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 10),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 11),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 11),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typescope, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typescope, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_decl, 12),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sig_decl, 12),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_decl, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_decl, 6),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 7),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact_decl, 3, .production_id = 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_decl, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_decl, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_decl, 8),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_decl, 8),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pred_decl, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pred_decl, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(221),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(250),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2), SHIFT_REPEAT(249),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(229),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(303),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(282),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(250),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2), SHIFT_REPEAT(249),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sig_decl_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_para_decls, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(278),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quantified_expression_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2), SHIFT_REPEAT(293),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extension, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [735] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sig_extension_repeat1, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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
