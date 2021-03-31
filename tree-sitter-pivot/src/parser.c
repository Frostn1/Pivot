#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_func = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_bool = 4,
  anon_sym_int = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_return = 8,
  anon_sym_SEMI = 9,
  anon_sym_inf = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  sym_escape_sequence = 13,
  anon_sym_True = 14,
  anon_sym_False = 15,
  sym_identifier = 16,
  sym_number = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_function_definition = 20,
  sym_parameter_list = 21,
  sym_block = 22,
  sym__statement = 23,
  sym_return_statement = 24,
  sym__expression = 25,
  sym__literals = 26,
  sym_rune = 27,
  sym_string_literal = 28,
  sym_boolean_literal = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
  aux_sym_string_literal_repeat1 = 32,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_inf] = "inf",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__literals] = "_literals",
  [sym_rune] = "rune",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__literals] = sym__literals,
  [sym_rune] = sym_rune,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
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
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
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
  [sym_number] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_rune] = {
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_inf);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_inf,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(21), 5,
      sym__expression,
      sym__literals,
      sym_rune,
      sym_string_literal,
      sym_boolean_literal,
  [24] = 3,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [36] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_return,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [48] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_func,
    STATE(5), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [60] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_return,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [72] = 3,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(6), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [84] = 3,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    STATE(8), 1,
      aux_sym_string_literal_repeat1,
  [94] = 3,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(42), 1,
      aux_sym_string_literal_token1,
    STATE(8), 1,
      aux_sym_string_literal_repeat1,
  [104] = 3,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      aux_sym_string_literal_token1,
    STATE(9), 1,
      aux_sym_string_literal_repeat1,
  [114] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_func,
  [119] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_func,
  [124] = 2,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [131] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_func,
  [136] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_parameter_list,
  [143] = 1,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [148] = 1,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
  [152] = 1,
    ACTIONS(62), 1,
      sym_identifier,
  [156] = 1,
    ACTIONS(64), 1,
      anon_sym_SEMI,
  [160] = 1,
    ACTIONS(66), 1,
      anon_sym_SEMI,
  [164] = 1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
  [168] = 1,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
  [172] = 1,
    ACTIONS(72), 1,
      anon_sym_SEMI,
  [176] = 1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
  [180] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 152,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 160,
  [SMALL_STATE(21)] = 164,
  [SMALL_STATE(22)] = 168,
  [SMALL_STATE(23)] = 172,
  [SMALL_STATE(24)] = 176,
  [SMALL_STATE(25)] = 180,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
