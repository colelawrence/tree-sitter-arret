//@ts-check
type Combinator = string | RegExp | any;

type Previous = {
  members: RuleMember[];
};

type RuleMember = { name: string };

/**
 * Every grammar rule is written as a JavaScript function that takes a parameter conventionally called $. The syntax $.identifier is how you refer to another grammar symbol within a rule.
 */
type Rule = 
/**
 * @param $ Symbols (the $ object) - Every grammar rule is written as a JavaScript function that takes a parameter conventionally called $. The syntax $.identifier is how you refer to another grammar symbol within a rule.
 */
($: Ruled<RuleSet>, prev: Previous) => Combinator;

type RuleSet = {
  [name: string]: Rule;
};

type Grammar<R extends RuleSet> = {
  name: string;
  /**
   * ## Rules
   * 
   *  * [Tree Sitter / "Structuring Rules Well"](http://tree-sitter.github.io/tree-sitter/creating-parsers#structuring-rules-well)
   *  * [Tree Sitter / "The First Few Rules"](http://tree-sitter.github.io/tree-sitter/creating-parsers#the-first-few-rules)
   * 
   * ###### Example
   * ```js
   * {
   *   // ...
   * 
   *   rules: {
   *     source_file: $ => repeat($._definition),
   * 
   *     _definition: $ => choice(
   *       $.function_definition
   *       // TODO: other kinds of definitions
   *     ),
   * 
   *     function_definition: $ => seq(
   *       'func',
   *       $.identifier,
   *       $.parameter_list,
   *       $._type,
   *       $.block
   *     ),
   * 
   *     parameter_list: $ => seq(
   *       '(',
   *        // TODO: parameters
   *       ')'
   *     ),
   * 
   *     _type: $ => choice(
   *       'bool'
   *       // TODO: other kinds of types
   *     ),
   * 
   *     block: $ => seq(
   *       '{',
   *       repeat($._statement),
   *       '}'
   *     ),
   * 
   *     _statement: $ => choice(
   *       $.return_statement
   *       // TODO: other kinds of statements
   *     ),
   * 
   *     return_statement: $ => seq(
   *       'return',
   *       $._expression,
   *       ';'
   *     ),
   * 
   *     _expression: $ => choice(
   *       $.identifier,
   *       $.number
   *       // TODO: other kinds of expressions
   *     ),
   * 
   *     identifier: $ => /[a-z]+/,
   * 
   *     number: $ => /\d+/
   *   }
   * }
   * ```
   */
  rules: R;
} & Partial<{
  /**
   * word - the name of a token that will match keywords for the purpose of the keyword extraction optimization.
   * 
   * ###### Example
   * ```js
   * grammar({
   *   name: 'javascript',
   * 
   *   word: $ => $.identifier,
   * 
   *   rules: {
   *     _expression: $ => choice(
   *       $.identifier,
   *       $.unary_expression,
   *       $.binary_expression
   *       // ...
   *     ),
   * 
   *     binary_expression: $ => choice(
   *       prec.left(1, seq($._expression, 'instanceof', $._expression)
   *       // ...
   *     ),
   * 
   *     unary_expression: $ => choice(
   *       prec.left(2, seq('typeof', $._expression))
   *       // ...
   *     ),
   * 
   *     identifier: $ => /[a-z_]+/
   *   }
   * });
   * ```
   * [Tree Sitter / "Keyword Extraction"](http://tree-sitter.github.io/tree-sitter/creating-parsers#keyword-extraction)
   */
  word: ($: Ruled<RuleSet>, previous: Combinator) => Combinator;
  /**
   * externals - an array of token names which can be returned by an external scanner. External scanners allow you to write custom C code which runs during the lexing process in order to handle lexical rules (e.g. Python’s indentation tokens) that cannot be described by regular expressions.
   * 
   * ###### Example
   * ```js
   * externals: $ => [
   *   $.indent,
   *   $.dedent,
   *   $.newline
   * ],
   * ```
   * [Tree Sitter / "External Scanners"](http://tree-sitter.github.io/tree-sitter/creating-parsers#external-scanners)
   */
  externals: ($: { [id: string]: Combinator }) => Combinator[];
  /** conflicts - an array of arrays of rule names. Each inner array represents a set of rules that’s involved in an LR(1) conflict that is intended to exist in the grammar. When these conflicts occur at runtime, Tree-sitter will use the GLR algorithm to explore all of the possible interpretations. If multiple parses end up succeeding, Tree-sitter will pick the subtree whose corresponding rule has the highest total dynamic precedence. */
  conflicts: ($: Ruled<RuleSet>, previous: Rule[][]) => Rule[][];
  /** inline - an array of rule names that should be automatically removed from the grammar by replacing all of their usages with a copy of their definition. This is useful for rules that are used in multiple places but for which you don’t want to create syntax tree nodes at runtime. */
  inline: ($: Ruled<RuleSet>, previous: Rule[]) => Rule[];
  /** extras - an array of tokens that may appear anywhere in the language. This is often used for whitespace and comments. The default value of extras is to accept whitespace. To control whitespace explicitly, specify extras: $ => [] in your grammar. */
  extras: ($: Ruled<RuleSet>, previous: Rule[]) => Rule[];
}>;

type Ruled<R> = {
  [P in keyof R]: Combinator;
};

declare module "tree-sitter-*/grammar" {
  const g: Grammar<any>;
  export = g;
}

declare function grammar<A extends RuleSet>(a: Grammar<A>): unknown;
declare function grammar<A extends RuleSet, B extends RuleSet>(
  a: Grammar<A>,
  b: Grammar<B>
): unknown;
declare function grammar<
  A extends RuleSet,
  B extends RuleSet,
  C extends RuleSet
>(a: Grammar<A>, b: Grammar<B>, c: Grammar<C>): unknown;
declare function grammar<
  A extends RuleSet,
  B extends RuleSet,
  C extends RuleSet
>(
  a: Grammar<A>,
  b: Grammar<B>,
  c: Grammar<C>,
  d: Grammar<any>,
  e?: Grammar<any>,
  f?: Grammar<any>,
  g?: Grammar<any>,
  h?: Grammar<any>,
  i?: Grammar<any>,
  j?: Grammar<any>,
  k?: Grammar<any>,
  l?: Grammar<any>,
  m?: Grammar<any>,
  n?: Grammar<any>,
  ...o: Grammar<any>[]
): unknown;

/** seq(rule1, rule2, ...) - This function creates a rule that matches any number of other rules, one after another. It is analogous to simply writing multiple symbols next to each other in EBNF notation. */
declare function seq(...rules: Combinator[]): Combinator;
/** choice(rule1, rule2, ...) - This function creates a rule that matches one of a set of possible rules. The order of the arguments does not matter. This is analogous to the | (pipe) operator in EBNF notation. */
declare function choice(...rules: Combinator[]): Combinator;
/** optional(rule) - This function creates a rule that matches zero or one occurrence of a given rule it is analogous to the [x] (square bracket) syntax in EBNF notation. */
declare function optional(rule: Combinator): Combinator;
/** repeat(rule) - This function creates a rule that matches zero-or-more occurrences of a given rule. It is analogous to the {x} (curly brace) syntax in EBNF notation. */
declare function repeat(rule: Combinator): Combinator;
/** repeat1(rule) - This function creates a rule that matches one-or-more occurrences of a given rule. The previous repeat rule is implemented in terms of repeat1 but is included because it is very commonly used. */
declare function repeat1(rule: Combinator): Combinator;
/**
 * This function marks the given rule as producing only a single token.
 * Tree-sitter’s default is to treat each String or RegExp literal in
 * the grammar as a separate token. Each token is matched separately by
 * the lexer and returned as its own leaf node in the tree. The token
 * function allows you to express a complex rule using the functions
 * described above (rather than as a single regular expression) but still
 * have Tree-sitter treat it as a single token.
 */
declare function token(rule: Combinator): Combinator;
/** alias(rule, name) - This function causes the given rule to appear with an alternative name in the syntax tree. If name is a symbol, as in alias($.foo, $.bar), then the aliased rule will appear as a named node called bar. And if name is a string literal, as in alias($.foo, 'bar'), then the aliased rule will appear as an anonymous node, as if the rule had been written as the simple string. */
declare function alias(...rules: Combinator[]): Combinator;
/**
 * field(name, rule) - This function assigns a field name to the child node(s) matched by the given rule. In the resulting syntax tree, you can then use that field name to access specific children.
 * 
 * ###### Example
 * ```js
 * function_definition: $ => seq(
 *   'func',
 *   field('name', $.identifier),
 *   field('parameters', $.parameter_list),
 *   field('return_type', $._type),
 *   field('body', $.block)
 * )
 * ```
 */
declare function field(name: string, rule: Combinator): Combinator;

interface Prec {
  /**This function marks the given rule as left-associative (and optionally applies a numerical precedence). When an LR(1) conflict arises in which all of the rules have the same numerical precedence, Tree-sitter will consult the rules’ associativity. If there is a left-associative rule, Tree-sitter will prefer matching a rule that ends earlier. This works similarly to associativity */
  left(index: number, c: Combinator): Combinator;
  /** This function is like prec.left, but it instructs Tree-sitter to prefer matching a rule that ends later. */
  right(index: number, c: Combinator): Combinator;
  /** This function marks the given rule as left-associative (and optionally applies a numerical precedence). When an LR(1) conflict arises in which all of the rules have the same numerical precedence, Tree-sitter will consult the rules’ associativity. If there is a left-associative rule, Tree-sitter will prefer matching a rule that ends earlier. This works similarly to associativity */
  left(c: Combinator): Combinator;
  /** This function is like prec.left, but it instructs Tree-sitter to prefer matching a rule that ends later. */
  right(c: Combinator): Combinator;
  /** This function is similar to prec, but the given numerical precedence is
   * applied at runtime instead of at parser generation time. This is only
   * necessary when handling a conflict dynamically using the the conflicts
   * field in the grammar, and when there is a genuine ambiguity: multiple
   * rules correctly match a given piece of code. In that event, Tree-sitter
   * compares the total dynamic precedence associated with each rule, and
   * selects the one with the highest total. This is similar to dynamic
   * precedence directives in Bison grammars.
   */
  dynamic(index: number, c: Combinator): Combinator;
  /** This function marks the given rule with a numerical precedence which will be used to resolve LR(1) Conflicts at parser-generation time. When two rules overlap in a way that represents either a true ambiguity or a local ambiguity given one token of lookahead, Tree-sitter will try to resolve the conflict by matching the rule with the higher precedence. The default precedence of all rules is zero. This works similarly to the precedence directives in Yacc grammars. */
  (index: number, c: Combinator): Combinator;
}

declare const prec: Prec;
