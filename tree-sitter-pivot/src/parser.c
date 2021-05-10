#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_from = 2,
  anon_sym_EQ = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_bool = 10,
  anon_sym_int = 11,
  anon_sym_char = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_return = 15,
  anon_sym_inf = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_literal_token1 = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_string_literal_token2 = 20,
  sym_escape_sequence = 21,
  anon_sym_True = 22,
  anon_sym_False = 23,
  sym_identifier = 24,
  sym_integer_literal = 25,
  sym_float_literal = 26,
  sym_file_importion_rule = 27,
  sym_const = 28,
  sym_let = 29,
  sym_source_file = 30,
  sym__definition = 31,
  sym_import_definition = 32,
  sym_function_definition = 33,
  sym_parameter_list = 34,
  sym_block = 35,
  sym__statement = 36,
  sym_return_statement = 37,
  sym__variable_statement = 38,
  sym_let_statment = 39,
  sym_const_statment = 40,
  sym_assignment = 41,
  sym__expression = 42,
  sym__literals = 43,
  sym_rune_literal = 44,
  sym_string_literal = 45,
  sym_boolean_literal = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_parameter_list_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
  aux_sym_string_literal_repeat1 = 50,
  aux_sym_string_literal_repeat2 = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
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
  [sym_float_literal] = "float_literal",
  [sym_file_importion_rule] = "file_importion_rule",
  [sym_const] = "const",
  [sym_let] = "let",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import_definition] = "import_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__variable_statement] = "_variable_statement",
  [sym_let_statment] = "let_statment",
  [sym_const_statment] = "const_statment",
  [sym_assignment] = "assignment",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
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
  [sym_float_literal] = sym_float_literal,
  [sym_file_importion_rule] = sym_file_importion_rule,
  [sym_const] = sym_const,
  [sym_let] = sym_let,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import_definition] = sym_import_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__variable_statement] = sym__variable_statement,
  [sym_let_statment] = sym_let_statment,
  [sym_const_statment] = sym_const_statment,
  [sym_assignment] = sym_assignment,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_RPAREN] = {
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
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_file_importion_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
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
  [sym_let_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_const_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
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
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_inf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_file_importion_rule);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_let);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_const] = ACTIONS(1),
    [sym_let] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__definition] = STATE(2),
    [sym_import_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__variable_statement] = STATE(2),
    [sym_let_statment] = STATE(2),
    [sym_const_statment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [sym_const] = ACTIONS(9),
    [sym_let] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(9), 1,
      sym_const,
    ACTIONS(11), 1,
      sym_let,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 9,
      sym__definition,
      sym_import_definition,
      sym_function_definition,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_let_statment,
      sym_const_statment,
      aux_sym_source_file_repeat1,
  [27] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(20), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      sym_const,
    ACTIONS(26), 1,
      sym_let,
    STATE(3), 9,
      sym__definition,
      sym_import_definition,
      sym_function_definition,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_let_statment,
      sym_const_statment,
      aux_sym_source_file_repeat1,
  [54] = 6,
    ACTIONS(29), 1,
      anon_sym_inf,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(37), 3,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
    STATE(39), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [80] = 6,
    ACTIONS(29), 1,
      anon_sym_inf,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(39), 3,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
    STATE(35), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [106] = 6,
    ACTIONS(29), 1,
      anon_sym_inf,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(41), 3,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
    STATE(36), 5,
      sym__expression,
      sym__literals,
      sym_rune_literal,
      sym_string_literal,
      sym_boolean_literal,
  [132] = 4,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parameter_list,
    ACTIONS(47), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(45), 6,
      anon_sym_inf,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
  [151] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      sym_const,
    ACTIONS(57), 1,
      sym_let,
    STATE(8), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_let_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [172] = 5,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym_let,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_const,
    STATE(8), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_let_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [193] = 5,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym_let,
    ACTIONS(62), 1,
      sym_const,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(9), 6,
      sym__statement,
      sym_return_statement,
      sym__variable_statement,
      sym_let_statment,
      sym_const_statment,
      aux_sym_block_repeat1,
  [214] = 2,
    ACTIONS(47), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(45), 6,
      anon_sym_inf,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
  [227] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_const,
      sym_let,
  [236] = 1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_const,
      sym_let,
  [245] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_const,
      sym_let,
  [254] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_return,
      sym_const,
      sym_let,
  [262] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_return,
      sym_const,
      sym_let,
  [270] = 3,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      aux_sym_string_literal_token2,
    STATE(17), 1,
      aux_sym_string_literal_repeat2,
  [280] = 3,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      aux_sym_string_literal_token1,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
  [290] = 3,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      aux_sym_string_literal_token2,
    STATE(21), 1,
      aux_sym_string_literal_repeat2,
  [300] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_literal_token1,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
  [310] = 3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      aux_sym_string_literal_token2,
    STATE(17), 1,
      aux_sym_string_literal_repeat2,
  [320] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_parameter_list_repeat1,
  [330] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_string_literal_token1,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
  [340] = 2,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [347] = 2,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [354] = 2,
    ACTIONS(109), 1,
      anon_sym_EQ,
    STATE(5), 1,
      sym_assignment,
  [361] = 2,
    ACTIONS(111), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_assignment,
  [368] = 2,
    ACTIONS(111), 1,
      anon_sym_EQ,
    STATE(5), 1,
      sym_assignment,
  [375] = 2,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [382] = 2,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [389] = 2,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [396] = 1,
    ACTIONS(119), 1,
      anon_sym_from,
  [400] = 1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [404] = 1,
    ACTIONS(123), 1,
      anon_sym_EQ_GT,
  [408] = 1,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [412] = 1,
    ACTIONS(127), 1,
      anon_sym_SEMI,
  [416] = 1,
    ACTIONS(129), 1,
      anon_sym_EQ_GT,
  [420] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [424] = 1,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [428] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [432] = 1,
    ACTIONS(137), 1,
      anon_sym_EQ_GT,
  [436] = 1,
    ACTIONS(139), 1,
      sym_file_importion_rule,
  [440] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [444] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [448] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [452] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ_GT,
  [456] = 1,
    ACTIONS(105), 1,
      anon_sym_COMMA,
  [460] = 1,
    ACTIONS(149), 1,
      anon_sym_SEMI,
  [464] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [468] = 1,
    ACTIONS(153), 1,
      sym_identifier,
  [472] = 1,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [476] = 1,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [480] = 1,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [484] = 1,
    ACTIONS(161), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 214,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 290,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 347,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 361,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 382,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 396,
  [SMALL_STATE(33)] = 400,
  [SMALL_STATE(34)] = 404,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 412,
  [SMALL_STATE(37)] = 416,
  [SMALL_STATE(38)] = 420,
  [SMALL_STATE(39)] = 424,
  [SMALL_STATE(40)] = 428,
  [SMALL_STATE(41)] = 432,
  [SMALL_STATE(42)] = 436,
  [SMALL_STATE(43)] = 440,
  [SMALL_STATE(44)] = 444,
  [SMALL_STATE(45)] = 448,
  [SMALL_STATE(46)] = 452,
  [SMALL_STATE(47)] = 456,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 464,
  [SMALL_STATE(50)] = 468,
  [SMALL_STATE(51)] = 472,
  [SMALL_STATE(52)] = 476,
  [SMALL_STATE(53)] = 480,
  [SMALL_STATE(54)] = 484,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statment, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_statment, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(23),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
