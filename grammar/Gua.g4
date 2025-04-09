// grammar/Gua.g4
grammar Gua;

@header {
    package GuaParserGenerated;
}

program : statement* EOF ;

statement 
    : variableDeclaration
    | classDeclaration
    | functionDeclaration
    | expressionStatement
    | includeStatement
    | ifStatement
    | tryCatchFinallyStatement
    ;

includeStatement : 'include' STRING_LITERAL ';' ;

variableDeclaration 
    : 'var' IDENTIFIER '=' expression ('//' TYPE_NAME)? ';'
    ;

classDeclaration
    : 'class' IDENTIFIER (':' IDENTIFIER)? '{' classBody '}'
    ;

classBody 
    : (variableDeclaration | functionDeclaration)* 
    ;

functionDeclaration
    : ('override')? 'function' IDENTIFIER '(' parameterList? ')' (':' TYPE_NAME)? '{' block '}'
    ;

parameterList 
    : parameter (',' parameter)*
    ;

parameter 
    : IDENTIFIER ':' TYPE_NAME
    ;

expressionStatement
    : expression ';'
    ;

ifStatement
    : 'if' '(' expression ')' '{' block '}' ('else' '{' block '}')?
    ;

tryCatchFinallyStatement
    : 'try' '{' block '}' ('catch' '(' IDENTIFIER ')' '{' block '}') ('finally' '{' block '}')?
    ;

block
    : statement*
    ;

expression
    : assignment
    ;

assignment
    : IDENTIFIER '=' assignment
    | logicalOr
    ;

logicalOr
    : logicalAnd ( '||' logicalAnd )*
    ;

logicalAnd
    : equality ( '&&' equality )*
    ;

equality
    : comparison ( ('==' | '!=') comparison )*
    ;

comparison
    : addition ( ('<' | '>' | '<=' | '>=') addition )*
    ;

addition
    : multiplication ( ('+' | '-') multiplication )*
    ;

multiplication
    : unary ( ('*' | '/' | '%') unary )*
    ;

unary
    : ('!' | '-' ) unary
    | primary
    ;

primary
    : INTEGER
    | DOUBLE
    | CHAR
    | STRING_LITERAL
    | IDENTIFIER
    | '(' expression ')'
    | functionCall
    | classInstantiation
    ;

functionCall
    : IDENTIFIER ':' IDENTIFIER '(' argumentList? ')'
    ;

classInstantiation
    : 'new' IDENTIFIER '(' argumentList? ')'
    ;

argumentList 
    : expression (',' expression)*
    ;

// Lexer Rules
TYPE_NAME : [A-Z][a-zA-Z0-9_]* ;

IDENTIFIER : [a-zA-Z_][a-zA-Z0-9_]* ;

INTEGER : [0-9]+ ;

DOUBLE : [0-9]+ '.' [0-9]+ ;

CHAR : '\'' . '\'' ;

STRING_LITERAL : '"' (~["\\] | '\\' .)* '"' ;

COMMENT : '//' ~[\r\n]* -> skip ;

WHITESPACE : [ \t\r\n]+ -> skip ;