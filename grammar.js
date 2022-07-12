module.exports = grammar({
  name: 'ungrammar',
  extras: $ => [/\s/, $.line_comment],
  conflicts: $ => [
    [$.seq_rule]
  ],
  rules: {
    source_file: $ => repeat($.node),
    node: $ => seq($.identifier, '=', $.rule),
    rule: $ => $.alt_rule,
    atom_rule: $ => choice($.node_rule, $.token_rule, $.labeled_rule, seq('(', $.rule, ')'), $.rep_rule, $.opt_rule),
    rep_rule: $ => seq($.atom_rule, '*'),
    opt_rule: $ => seq($.atom_rule, '?'),
    node_rule: $ => $.identifier,
    token_rule: $ => $.token,
    labeled_rule: $ => prec.left(1,seq($.identifier, ':', $.atom_rule)),
    seq_rule: $ => repeat1($.atom_rule),
    alt_rule: $ => seq($.seq_rule, repeat(seq('|', $.seq_rule))),
    token: $ => seq('\'', $.token_identifier, '\''),
    identifier: _ => /[a-zA-Z_]+/,
    token_identifier: _ => /(?:[^'\\]|\\\\|\\')+/,
    line_comment: _ => token(seq('//', /.*/)),
  }
});
