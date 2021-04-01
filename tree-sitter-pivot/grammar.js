module.exports = grammar({
    name: 'pivot',

        rules: {
            source_file: $ => repeat($._definition),
        
            _definition: $ => choice(
                $.function_definition,
                $.import_definition,
                // TODO: other kinds of definitions
            ),
            import_definition: $ => seq(
                'import',
                $.identifier,
                'from',
                $.file_importion_rule
            ),
                
            
            function_definition: $ => seq(
                'func',
                $.identifier,
                $.parameter_list,
                $.block
            ),
        
            parameter_list: $ => choice(
                seq(
                '(',')'
                ),
                seq(
                    '(',
                    $.identifier,
                    ')'
                ),
                seq(
                    '(',
                    repeat(seq($.identifier,',')),
                    $.identifier,
                    ')'
                )
            ),
        
            _type: $ => choice(
                'bool',
                'int'
                // TODO: other kinds of types
            ),
        
            block: $ => seq(
                '{',
                repeat($._statement),
                '}'
            ),
        
            _statement: $ => choice(
                $.return_statement,
                $._variable_statement
                // TODO: other kinds of statements
            ),
        
            return_statement: $ => seq(
                'return',
                $._expression,
                ';'
            ),

            _variable_statement: $ => choice(
                $.init_statment,
                $.const_statment
            ),
            
            init_statment: $ => seq(
                    'init',
                    $.identifier,
                    $.assignment,
                    $._expression,
                    ';'
                    ),

            const_statment: $ => seq(
                'const',
                $.identifier,
                $.assignment,
                $._expression,
                ';'
                ),

            assignment: $ => '=',
            
            _expression: $ => choice(
                $._literals,
                $.identifier,
                $.rune_literal
                // TODO: other kinds of expressions
            ),

            _literals: ($) =>
                    choice(
                        $.integer_literal,
                        // $.float_literal,
                        $.boolean_literal,
                        // $.null_literal,
                        // $.undefined_literal,
                        // $.char_literal,
                        $.string_literal,
                        // $.multiline_string_literal,
                        // $.enum_literal,
                        // $.rune_literal
                    ),
                
            rune_literal: $ => choice(
                'inf'
            ),
            string_literal: $ =>  choice(
                seq('"', repeat(/[^"\n\r]/),'"'),
                seq("'", repeat(/[^'\n\r]/), "'")
              ),
            escape_sequence: (_) =>
                    token.immediate(
                        seq(
                        "\\",
                        choice(
                            /[^xu\n]/,
                            /u[0-9a-fA-F]{4}/,
                            /u{[0-9a-fA-F]+}/,
                            /x[0-9a-fA-F]{2}/
                        )
                        )
                    ),
            
            boolean_literal: $ => choice("True", "False"),
            identifier: $ => /[a-zA-Z]+/,
            integer_literal: $ => /\d+/,
            file_importion_rule: $ => /'.*\.io'/,

                
        }
});

