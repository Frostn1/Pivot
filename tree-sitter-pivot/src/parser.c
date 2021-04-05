#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_from = 2,
  anon_sym_pre = 3,
  anon_sym_RPAREN = 4,
  anon_sym_func = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_bool = 9,
  anon_sym_int = 10,
  anon_sym_char = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_return = 14,
  anon_sym_SEMI = 15,
  anon_sym_print = 16,
  anon_sym_get = 17,
  anon_sym_init = 18,
  anon_sym_const = 19,
  sym_assignment = 20,
  anon_sym_inf = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_literal_token1 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_string_literal_token2 = 25,
  sym_escape_sequence = 26,
  anon_sym_True = 27,
  anon_sym_False = 28,
  sym_identifier = 29,
  sym_integer_literal = 30,
  sym_file_importion_rule = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_import_definition = 34,
  sym_function_definition = 35,
  sym_parameter_list = 36,
  sym_block = 37,
  sym__statement = 38,
  sym_return_statement = 39,
  sym__variable_statement = 40,
  sym_init_statment = 41,
  sym_const_statment = 42,
  sym__expression = 43,
  sym__literals = 44,
  sym_rune_literal = 45,
  sym_string_literal = 46,
  sym_boolean_literal = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_parameter_list_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_string_literal_repeat1 = 51,
  aux_sym_string_literal_repeat2 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_pre] = "pre",
  [anon_sym_RPAREN] = ")",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_print] = "print",
  [anon_sym_get] = "get",
  [anon_sym_init] = "init",
  [anon_sym_const] = "const",
  [sym_assignment] = "assignment",
  [anon_sym_inf] = "inf",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym_integer_literal] = "integer_literal",
  [sym_file_importion_rule] = "file_importion_rule",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import_definition] = "import_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__variable_statement] = "_variable_statement",
  [sym_init_statment] = "init_statment",
  [sym_const_statment] = "const_statment",
  [sym__expression] = "_expression",
  [sym__literals] = "_literals",
  [sym_rune_literal] = "rune_literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_const] = anon_sym_const,
  [sym_assignment] = sym_assignment,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym_integer_literal] = sym_integer_literal,
  [sym_file_importion_rule] = sym_file_importion_rule,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import_definition] = sym_import_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__variable_statement] = sym__variable_statement,
  [sym_init_statment] = sym_init_statment,
  [sym_const_statment] = sym_const_statment,
  [sym__expression] = sym__expression,
  [sym__literals] = sym__literals,
  [sym_rune_literal] = sym_rune_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_file_importion_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_import_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_init_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_const_statment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == '{') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_assignment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_inf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_True);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_False);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_file_importion_rule);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_assignment] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(8),
    [sym_import_definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_inf,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_integer_literal,
    ACTIONS(15), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(33), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [27] = 7,
    ACTIONS(9), 1,
      anon_sym_inf,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_integer_literal,
    ACTIONS(15), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(48), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [54] = 7,
    ACTIONS(9), 1,
      anon_sym_inf,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_integer_literal,
    ACTIONS(15), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(47), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [81] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_init,
    ACTIONS(35), 1,
      anon_sym_const,
    STATE(6), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_init_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [102] = 5,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(42), 1,
      anon_sym_init,
    ACTIONS(45), 1,
      anon_sym_const,
    STATE(6), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_init_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [123] = 5,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_init,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(5), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_init_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [144] = 4,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_func,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(9), 4,
      sym__definition,
      sym_import_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [160] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_import,
    ACTIONS(57), 1,
      anon_sym_func,
    STATE(9), 4,
      sym__definition,
      sym_import_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [176] = 1,
    ACTIONS(60), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_init,
      anon_sym_const,
  [183] = 1,
    ACTIONS(62), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_init,
      anon_sym_const,
  [190] = 1,
    ACTIONS(64), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_init,
      anon_sym_const,
  [197] = 3,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_string_literal_token1,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
  [207] = 3,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_string_literal_token2,
    STATE(16), 1,
      aux_sym_string_literal_repeat2,
  [217] = 3,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_string_literal_token1,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
  [227] = 3,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_literal_token2,
    STATE(16), 1,
      aux_sym_string_literal_repeat2,
  [237] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_func,
  [243] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_func,
  [249] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_func,
  [255] = 3,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      aux_sym_string_literal_token2,
    STATE(14), 1,
      aux_sym_string_literal_repeat2,
  [265] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_string_literal_token1,
    STATE(15), 1,
      aux_sym_string_literal_repeat1,
  [275] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_func,
  [281] = 3,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [291] = 2,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [298] = 2,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [305] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_parameter_list,
  [312] = 2,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_COMMA,
  [319] = 2,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [326] = 2,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [333] = 1,
    ACTIONS(115), 1,
      sym_identifier,
  [337] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [341] = 1,
    ACTIONS(119), 1,
      anon_sym_SEMI,
  [345] = 1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [349] = 1,
    ACTIONS(123), 1,
      sym_assignment,
  [353] = 1,
    ACTIONS(125), 1,
      sym_assignment,
  [357] = 1,
    ACTIONS(127), 1,
      sym_identifier,
  [361] = 1,
    ACTIONS(129), 1,
      sym_identifier,
  [365] = 1,
    ACTIONS(131), 1,
      anon_sym_SEMI,
  [369] = 1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [373] = 1,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [377] = 1,
    ACTIONS(109), 1,
      anon_sym_COMMA,
  [381] = 1,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
  [385] = 1,
    ACTIONS(139), 1,
      sym_file_importion_rule,
  [389] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [393] = 1,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
  [397] = 1,
    ACTIONS(145), 1,
      anon_sym_from,
  [401] = 1,
    ACTIONS(147), 1,
      anon_sym_SEMI,
  [405] = 1,
    ACTIONS(149), 1,
      anon_sym_SEMI,
  [409] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [413] = 1,
    ACTIONS(153), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 275,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 305,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 357,
  [SMALL_STATE(37)] = 361,
  [SMALL_STATE(38)] = 365,
  [SMALL_STATE(39)] = 369,
  [SMALL_STATE(40)] = 373,
  [SMALL_STATE(41)] = 377,
  [SMALL_STATE(42)] = 381,
  [SMALL_STATE(43)] = 385,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 393,
  [SMALL_STATE(46)] = 397,
  [SMALL_STATE(47)] = 401,
  [SMALL_STATE(48)] = 405,
  [SMALL_STATE(49)] = 409,
  [SMALL_STATE(50)] = 413,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_statment, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_statment, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(41),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pivot(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
