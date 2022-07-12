#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_STAR = 4,
  anon_sym_QMARK = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  anon_sym_SQUOTE = 8,
  sym_identifier = 9,
  sym_token_identifier = 10,
  sym_line_comment = 11,
  sym_source_file = 12,
  sym_node = 13,
  sym_rule = 14,
  sym_atom_rule = 15,
  sym_rep_rule = 16,
  sym_opt_rule = 17,
  sym_node_rule = 18,
  sym_token_rule = 19,
  sym_labeled_rule = 20,
  sym_seq_rule = 21,
  sym_alt_rule = 22,
  sym_token = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_seq_rule_repeat1 = 25,
  aux_sym_alt_rule_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_SQUOTE] = "'",
  [sym_identifier] = "identifier",
  [sym_token_identifier] = "token_identifier",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym_node] = "node",
  [sym_rule] = "rule",
  [sym_atom_rule] = "atom_rule",
  [sym_rep_rule] = "rep_rule",
  [sym_opt_rule] = "opt_rule",
  [sym_node_rule] = "node_rule",
  [sym_token_rule] = "token_rule",
  [sym_labeled_rule] = "labeled_rule",
  [sym_seq_rule] = "seq_rule",
  [sym_alt_rule] = "alt_rule",
  [sym_token] = "token",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_seq_rule_repeat1] = "seq_rule_repeat1",
  [aux_sym_alt_rule_repeat1] = "alt_rule_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_identifier] = sym_identifier,
  [sym_token_identifier] = sym_token_identifier,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_node] = sym_node,
  [sym_rule] = sym_rule,
  [sym_atom_rule] = sym_atom_rule,
  [sym_rep_rule] = sym_rep_rule,
  [sym_opt_rule] = sym_opt_rule,
  [sym_node_rule] = sym_node_rule,
  [sym_token_rule] = sym_token_rule,
  [sym_labeled_rule] = sym_labeled_rule,
  [sym_seq_rule] = sym_seq_rule,
  [sym_alt_rule] = sym_alt_rule,
  [sym_token] = sym_token,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_seq_rule_repeat1] = aux_sym_seq_rule_repeat1,
  [aux_sym_alt_rule_repeat1] = aux_sym_alt_rule_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_token_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_atom_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rep_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_node_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_token_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_alt_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seq_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alt_rule_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_token_identifier);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_token_identifier);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_token_identifier);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_token_identifier);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
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
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_node] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_rule] = STATE(29),
    [sym_atom_rule] = STATE(17),
    [sym_rep_rule] = STATE(13),
    [sym_opt_rule] = STATE(13),
    [sym_node_rule] = STATE(13),
    [sym_token_rule] = STATE(13),
    [sym_labeled_rule] = STATE(13),
    [sym_seq_rule] = STATE(20),
    [sym_alt_rule] = STATE(25),
    [sym_token] = STATE(15),
    [aux_sym_seq_rule_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_atom_rule] = STATE(17),
    [sym_rep_rule] = STATE(13),
    [sym_opt_rule] = STATE(13),
    [sym_node_rule] = STATE(13),
    [sym_token_rule] = STATE(13),
    [sym_labeled_rule] = STATE(13),
    [sym_token] = STATE(15),
    [aux_sym_seq_rule_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_identifier] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_rule] = STATE(32),
    [sym_atom_rule] = STATE(17),
    [sym_rep_rule] = STATE(13),
    [sym_opt_rule] = STATE(13),
    [sym_node_rule] = STATE(13),
    [sym_token_rule] = STATE(13),
    [sym_labeled_rule] = STATE(13),
    [sym_seq_rule] = STATE(28),
    [sym_alt_rule] = STATE(25),
    [sym_token] = STATE(15),
    [aux_sym_seq_rule_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_atom_rule] = STATE(17),
    [sym_rep_rule] = STATE(13),
    [sym_opt_rule] = STATE(13),
    [sym_node_rule] = STATE(13),
    [sym_token_rule] = STATE(13),
    [sym_labeled_rule] = STATE(13),
    [sym_token] = STATE(15),
    [aux_sym_seq_rule_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_identifier] = ACTIONS(28),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_atom_rule] = STATE(17),
    [sym_rep_rule] = STATE(13),
    [sym_opt_rule] = STATE(13),
    [sym_node_rule] = STATE(13),
    [sym_token_rule] = STATE(13),
    [sym_labeled_rule] = STATE(13),
    [sym_token] = STATE(15),
    [aux_sym_seq_rule_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym_seq_rule_repeat1,
    STATE(15), 1,
      sym_token,
    STATE(17), 1,
      sym_atom_rule,
    STATE(23), 1,
      sym_seq_rule,
    STATE(13), 5,
      sym_rep_rule,
      sym_opt_rule,
      sym_node_rule,
      sym_token_rule,
      sym_labeled_rule,
  [32] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym_seq_rule_repeat1,
    STATE(15), 1,
      sym_token,
    STATE(17), 1,
      sym_atom_rule,
    STATE(23), 1,
      sym_seq_rule,
    STATE(13), 5,
      sym_rep_rule,
      sym_opt_rule,
      sym_node_rule,
      sym_token_rule,
      sym_labeled_rule,
  [64] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(11), 1,
      sym_atom_rule,
    STATE(15), 1,
      sym_token,
    STATE(13), 5,
      sym_rep_rule,
      sym_opt_rule,
      sym_node_rule,
      sym_token_rule,
      sym_labeled_rule,
  [90] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [107] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [121] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [135] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [149] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [163] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [177] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [191] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [209] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      sym_identifier,
  [223] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [237] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(22), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [251] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(21), 2,
      sym_node,
      aux_sym_source_file_repeat1,
  [265] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [289] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [303] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
  [312] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_alt_rule_repeat1,
  [325] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_alt_rule_repeat1,
  [338] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_alt_rule_repeat1,
  [351] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [359] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
  [366] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [373] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      anon_sym_EQ,
  [387] = 2,
    ACTIONS(90), 1,
      sym_token_identifier,
    ACTIONS(92), 1,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 251,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 303,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 366,
  [SMALL_STATE(32)] = 373,
  [SMALL_STATE(33)] = 380,
  [SMALL_STATE(34)] = 387,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(34),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_rule, 1),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seq_rule, 1), SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_rule, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_rule, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rep_rule, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_rule, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_rule, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_rule, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_rule, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_rule, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_rule, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ungrammar(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
