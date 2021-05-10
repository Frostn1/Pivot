module.exports = grammar({
    name: 'pivot',

        rules: {
            source_file: $ => repeat($._definition),
        
            _definition: $ => choice(
                $.function_definition,
                $.import_definition,
                $._statement,
                // TODO: other kinds of definitions
            ),
            import_definition: $ => seq(
                'import',
                $.identifier,
                'from',
                $.file_importion_rule
            ),
                
            
            /*pre_definition: $ => seq(
                'pre',
                $.overidable_identifiers,
                $.overiders_parameter_list,
                $.block,
                ')'
            ),*/
            function_definition: $ => seq(
                $.const,
                $.identifier,
                '=',
                $.parameter_list,
                '=>',
                $.block,
                ';'
            ),
            
            overiders_parameter_list: $ => choice(
                seq(
                    '(',
                    $._type,
                    $.identifier,
                    ':'
                ),
                seq(
                    '(',
                    repeat(seq($._type,$.identifier,',')),
                    $._type,
                    $.identifier,
                    ':'
                )
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
                'int',
                'char'
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
            /*overidable_identifiers: $ => choice(
                'print',
                'get',
            ),*/
            _variable_statement: $ => choice(
                $.let_statment,
                $.const_statment
            ),
            
            let_statment: $ => seq(
                    $.let,
                    $.identifier,
                    $.assignment,
                    $._expression,
                    ';'
                    ),

            const_statment: $ => seq(
                $.const,
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
                        $.float_literal,
                        $.integer_literal,
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
            identifier: $ => /[a-zA-Z][a-zA-Z0-9]+/,
            integer_literal: $ => /\d+/,
            float_literal: $ => /[+-]?([0-9]*[.])?[0-9]+/,
            file_importion_rule: $ => /'.*\.io'/,
            const: $ => 'const',
            let: $ => 'let',
                
        }
});