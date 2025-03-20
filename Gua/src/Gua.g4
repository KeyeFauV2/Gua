grammar Gua;

// Règle de départ
prog: (functionDecl | statement)* EOF;

// Déclaration de fonction
functionDecl: 'function' ID '(' paramList? ')' block;

// Liste des paramètres
paramList: ID (',' ID)*;

// Bloc de code
block: '{' statement* '}';

// Déclarations de variables (optionnel)
varDecl: 'var' ID '=' expression ';';

// Statements
statement
    : varDecl
    | exprStmt
    | returnStmt
    | functionDecl // Support des fonctions imbriquées
    ;

// Statement d'expression
exprStmt: expression ';';

// Statement de retour
returnStmt: 'return' expression ';';

// Expressions
expression
    : ID
    | INT
    | DOUBLE
    | STRING
    | expression '+' expression
    | '(' expression ')'
    ;

// Tokens
ID: [a-zA-Z_][a-zA-Z0-9_]* ;
INT: [0-9]+ ;
DOUBLE: [0-9]+ '.' [0-9]+ ;
STRING: '"' (~["\r\n] | '\\' .)* '"' ;
WS: [ \t\r\n]+ -> skip ;
COMMENT: '//' ~[\r\n]* -> skip ;