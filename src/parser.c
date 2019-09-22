#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 43
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_import = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_RPAREN = 6,
  sym_line_comment = 7,
  anon_sym_POUND_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_open_paren_list = 10,
  anon_sym_DQUOTE = 11,
  sym_number_constant_expr = 12,
  aux_sym_regular_string_part_token1 = 13,
  aux_sym_regular_string_part_token2 = 14,
  aux_sym_regular_string_part_multiline_token2 = 15,
  sym_string_escape = 16,
  sym_invalid_string_escape = 17,
  sym_hole = 18,
  sym_source_file = 19,
  sym_import = 20,
  sym_list = 21,
  sym_call = 22,
  sym_expression = 23,
  sym_dispatch = 24,
  sym_open_paren = 25,
  sym_close_paren = 26,
  sym_close_paren_list = 27,
  sym_open_paren_list_bracket = 28,
  sym_close_paren_list_bracket = 29,
  sym_open_quote = 30,
  sym_close_quote = 31,
  sym_string_constant_expr = 32,
  sym__string_part = 33,
  aux_sym__string_parts = 34,
  sym_regular_string_part = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_import_repeat1 = 37,
  aux_sym_list_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_import] = "import",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [sym_line_comment] = "line_comment",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [sym_open_paren_list] = "open_paren_list",
  [anon_sym_DQUOTE] = "\"",
  [sym_number_constant_expr] = "number_constant_expr",
  [aux_sym_regular_string_part_token1] = "regular_string_part_token1",
  [aux_sym_regular_string_part_token2] = "regular_string_part_token2",
  [aux_sym_regular_string_part_multiline_token2] = "regular_string_part_multiline_token2",
  [sym_string_escape] = "string_escape",
  [sym_invalid_string_escape] = "invalid_string_escape",
  [sym_hole] = "hole",
  [sym_source_file] = "source_file",
  [sym_import] = "import",
  [sym_list] = "list",
  [sym_call] = "call",
  [sym_expression] = "expression",
  [sym_dispatch] = "dispatch",
  [sym_open_paren] = "open_paren",
  [sym_close_paren] = "close_paren",
  [sym_close_paren_list] = "close_paren_list",
  [sym_open_paren_list_bracket] = "open_paren_list_bracket",
  [sym_close_paren_list_bracket] = "close_paren_list_bracket",
  [sym_open_quote] = "open_quote",
  [sym_close_quote] = "close_quote",
  [sym_string_constant_expr] = "string_constant_expr",
  [sym__string_part] = "_string_part",
  [aux_sym__string_parts] = "_string_parts",
  [sym_regular_string_part] = "regular_string_part",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_open_paren_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_number_constant_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_regular_string_part_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regular_string_part_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regular_string_part_multiline_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_hole] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dispatch] = {
    .visible = true,
    .named = true,
  },
  [sym_open_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren_list] = {
    .visible = true,
    .named = true,
  },
  [sym_open_paren_list_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren_list_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_open_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_close_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_string_constant_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__string_part] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_parts] = {
    .visible = false,
    .named = false,
  },
  [sym_regular_string_part] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_item = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 1},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(28);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(28);
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(28);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(28);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(49);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(50);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_open_paren_list);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number_constant_expr);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number_constant_expr);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_regular_string_part_token1);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_regular_string_part_token1);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_regular_string_part_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_regular_string_part_multiline_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(46);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_invalid_string_escape);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_open_paren_list] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_constant_expr] = ACTIONS(1),
    [aux_sym_regular_string_part_token2] = ACTIONS(1),
    [aux_sym_regular_string_part_multiline_token2] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym_hole] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_import] = STATE(10),
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(10),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [2] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(2),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(30),
    [anon_sym_RBRACE] = ACTIONS(28),
    [sym_open_paren_list] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym_number_constant_expr] = ACTIONS(19),
    [sym_hole] = ACTIONS(19),
  },
  [3] = {
    [sym_import] = STATE(3),
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(3),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(50),
    [sym_open_paren_list] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym_number_constant_expr] = ACTIONS(41),
    [sym_hole] = ACTIONS(41),
  },
  [4] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(9),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_close_paren_list] = STATE(18),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [5] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(2),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_close_paren_list_bracket] = STATE(19),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [6] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(2),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_close_paren] = STATE(15),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [7] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(6),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_close_paren] = STATE(21),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [8] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(5),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_close_paren_list_bracket] = STATE(18),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [9] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(2),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_close_paren_list] = STATE(19),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [10] = {
    [sym_import] = STATE(3),
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(3),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [11] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(2),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [12] = {
    [sym_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_expression] = STATE(11),
    [sym_dispatch] = STATE(24),
    [sym_open_paren] = STATE(7),
    [sym_open_paren_list_bracket] = STATE(8),
    [sym_open_quote] = STATE(28),
    [sym_string_constant_expr] = STATE(24),
    [aux_sym_list_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_open_paren_list] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_constant_expr] = ACTIONS(7),
    [sym_hole] = ACTIONS(7),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_open_paren_list] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_number_constant_expr] = ACTIONS(73),
    [sym_hole] = ACTIONS(73),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_open_paren_list] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_number_constant_expr] = ACTIONS(75),
    [sym_hole] = ACTIONS(75),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_open_paren_list] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number_constant_expr] = ACTIONS(77),
    [sym_hole] = ACTIONS(77),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_open_paren_list] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_number_constant_expr] = ACTIONS(79),
    [sym_hole] = ACTIONS(79),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_open_paren_list] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number_constant_expr] = ACTIONS(81),
    [sym_hole] = ACTIONS(81),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_open_paren_list] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_number_constant_expr] = ACTIONS(83),
    [sym_hole] = ACTIONS(83),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_open_paren_list] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number_constant_expr] = ACTIONS(85),
    [sym_hole] = ACTIONS(85),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_open_paren_list] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_number_constant_expr] = ACTIONS(87),
    [sym_hole] = ACTIONS(87),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_open_paren_list] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_number_constant_expr] = ACTIONS(89),
    [sym_hole] = ACTIONS(89),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym_open_paren_list] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_number_constant_expr] = ACTIONS(91),
    [sym_hole] = ACTIONS(91),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_open_paren_list] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_number_constant_expr] = ACTIONS(93),
    [sym_hole] = ACTIONS(93),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [sym_open_paren_list] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_number_constant_expr] = ACTIONS(95),
    [sym_hole] = ACTIONS(95),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_open_paren_list] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_number_constant_expr] = ACTIONS(97),
    [sym_hole] = ACTIONS(97),
  },
  [26] = {
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(101),
    [sym_open_paren_list] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_number_constant_expr] = ACTIONS(101),
    [sym_hole] = ACTIONS(101),
  },
  [27] = {
    [sym_close_quote] = STATE(14),
    [sym__string_part] = STATE(33),
    [aux_sym__string_parts] = STATE(33),
    [sym_regular_string_part] = STATE(33),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [aux_sym_regular_string_part_token1] = ACTIONS(109),
    [aux_sym_regular_string_part_token2] = ACTIONS(109),
    [sym_string_escape] = ACTIONS(111),
    [sym_invalid_string_escape] = ACTIONS(111),
  },
  [28] = {
    [sym_close_quote] = STATE(22),
    [sym__string_part] = STATE(27),
    [aux_sym__string_parts] = STATE(27),
    [sym_regular_string_part] = STATE(27),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [aux_sym_regular_string_part_token1] = ACTIONS(109),
    [aux_sym_regular_string_part_token2] = ACTIONS(109),
    [sym_string_escape] = ACTIONS(113),
    [sym_invalid_string_escape] = ACTIONS(113),
  },
  [29] = {
    [sym_identifier] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(115),
    [sym_open_paren_list] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_number_constant_expr] = ACTIONS(115),
    [sym_hole] = ACTIONS(115),
  },
  [30] = {
    [sym_identifier] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(101),
    [sym_open_paren_list] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_number_constant_expr] = ACTIONS(101),
    [sym_hole] = ACTIONS(101),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(117),
    [sym_open_paren_list] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_number_constant_expr] = ACTIONS(117),
    [sym_hole] = ACTIONS(117),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_POUND_LBRACE] = ACTIONS(119),
    [sym_open_paren_list] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_number_constant_expr] = ACTIONS(119),
    [sym_hole] = ACTIONS(119),
  },
  [33] = {
    [sym__string_part] = STATE(33),
    [aux_sym__string_parts] = STATE(33),
    [sym_regular_string_part] = STATE(33),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [aux_sym_regular_string_part_token1] = ACTIONS(123),
    [aux_sym_regular_string_part_token2] = ACTIONS(123),
    [sym_string_escape] = ACTIONS(126),
    [sym_invalid_string_escape] = ACTIONS(126),
  },
  [34] = {
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [aux_sym_regular_string_part_token1] = ACTIONS(129),
    [aux_sym_regular_string_part_token2] = ACTIONS(129),
    [sym_string_escape] = ACTIONS(129),
    [sym_invalid_string_escape] = ACTIONS(129),
  },
  [35] = {
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [aux_sym_regular_string_part_token1] = ACTIONS(131),
    [aux_sym_regular_string_part_token2] = ACTIONS(131),
    [sym_string_escape] = ACTIONS(131),
    [sym_invalid_string_escape] = ACTIONS(131),
  },
  [36] = {
    [aux_sym_import_repeat1] = STATE(37),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_line_comment] = ACTIONS(3),
  },
  [37] = {
    [aux_sym_import_repeat1] = STATE(38),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(139),
    [sym_line_comment] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_import_repeat1] = STATE(38),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_line_comment] = ACTIONS(3),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_line_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(148),
    [sym_line_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_line_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(152),
    [sym_line_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
  [9] = {.count = 1, .reusable = true}, SHIFT(26),
  [11] = {.count = 1, .reusable = true}, SHIFT(29),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(35),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [28] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(35),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(17),
  [63] = {.count = 1, .reusable = true}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, SHIFT(13),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(20),
  [71] = {.count = 1, .reusable = true}, SHIFT(16),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_close_paren, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_string_constant_expr, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3, .production_id = 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_dispatch, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_close_paren_list, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3, .production_id = 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_dispatch, 3, .production_id = 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_string_constant_expr, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_close_paren_list_bracket, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_close_quote, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_open_paren, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_open_paren, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(40),
  [105] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [107] = {.count = 1, .reusable = false}, SHIFT(25),
  [109] = {.count = 1, .reusable = false}, SHIFT(34),
  [111] = {.count = 1, .reusable = false}, SHIFT(33),
  [113] = {.count = 1, .reusable = false}, SHIFT(27),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_open_paren_list_bracket, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_import, 5),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_import, 6),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_parts, 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_parts, 2), SHIFT_REPEAT(34),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_parts, 2), SHIFT_REPEAT(33),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_regular_string_part, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_open_quote, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(37),
  [135] = {.count = 1, .reusable = true}, SHIFT(41),
  [137] = {.count = 1, .reusable = true}, SHIFT(38),
  [139] = {.count = 1, .reusable = true}, SHIFT(42),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(38),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_repeat1, 2),
  [146] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [148] = {.count = 1, .reusable = true}, SHIFT(36),
  [150] = {.count = 1, .reusable = true}, SHIFT(31),
  [152] = {.count = 1, .reusable = true}, SHIFT(32),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_arret(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
