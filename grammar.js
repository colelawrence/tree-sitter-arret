// @ts-check
/// <reference path="./grammar.d.ts"/>
// borrowed from https://github.com/tree-sitter/tree-sitter-embedded-template/blob/master/grammar.js / 4d32921 on Jul 5, 2018
module.exports = grammar({
  name: 'arret',

  word: $ => $.identifier,

  extras: $ => [
    $.line_comment,
    /[\s\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.import,
      $.expression,
    )),

    import: $ => seq(
      '(',
      'import',
      '[',
      repeat(
        $.identifier,
      ),
      ']',
      ')'
    ),

    line_comment: $ => /;[^\n\r]+[\n\r]?/,

    list: $ => choice(
      seq(
        $.open_paren_list,
        field('item', repeat($.expression)),
        $.close_paren_list,
      ),
      seq(
        $.open_paren_list_bracket,
        field('item', repeat($.expression)),
        $.close_paren_list_bracket,
      ),
    ),

    call: $ => seq(
      $.open_paren,
      field('item', repeat($.expression)),
      $.close_paren,
    ),

    expression: $ => choice(
      $.list,
      $.call,
      $.identifier,
      $.hole,
      $.number_constant_expr,
      $.string_constant_expr,
      $.dispatch,
    ),

    dispatch: $ => seq(
      '#{',
      field("item", repeat($.expression)),
      '}'
    ),

    open_paren: $ => '(',
    close_paren: $ => ')',

    open_paren_list: $ => '\'(',
    close_paren_list: $ => ')',

    open_paren_list_bracket: $ => '[',
    close_paren_list_bracket: $ => ']',

    open_quote: $ => '"',
    close_quote: $ => '"',

    identifier: $ => /[a-zA-Z!&\?\.><\-][_0-9a-zA-Z!&\?\.><\-]*/,
    number_constant_expr: $ => /[0-9]+\.?[0-9]*/,
    string_constant_expr: $ => seq(
      $.open_quote,
      optional($._string_parts),
      $.close_quote,
    ),

    _string_part: $ =>
      choice($.regular_string_part, $.string_escape, $.invalid_string_escape),

    _string_parts: $ => repeat1($._string_part),

    regular_string_part: $ => choice(/[^\\\"\n]+/, /\"/),
    regular_string_part_multiline: $ => choice(/[^\\\"]+/, /\"\"?/),

    string_escape: $ => /\\(u\{[0-9A-Fa-f]{4,6}\}|[nrt\"'\\])/,

    invalid_string_escape: $ => /\\(u\{[^}]*\}|[^nrt\"'\\])/,

    hole: $ => '_',
  }
});
