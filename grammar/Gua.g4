grammar Gua;

// Règles principales
program
    : statement* EOF
    ;

// Instructions
statement
    : varDecl ';' 
    | assignment ';' 
    | exprStmt ';' 
    | ifStmt 
    | whileStmt 
    | block 
    | functionDecl 
    | classDecl 
    | interfaceDecl 
    | includeStmt
    ;

// Déclaration d'inclusion de modules
includeStmt
    : 'include' STRING
    ;

// Déclaration de variable (avec affectation initiale optionnelle)
varDecl
    : 'var' IDENTIFIER ('=' expression)?
    ;

// Affectation simple
assignment
    : IDENTIFIER '=' expression
    ;

// Instruction d'expression
exprStmt
    : expression
    ;

// Instruction conditionnelle if-then-else sans parenthèses
ifStmt
    : 'if' expression 'then' statement ('else' statement)? 'end'
    ;

// Boucle while
whileStmt
    : 'while' expression 'do' statement 'end'
    ;

// Bloc d'instructions
block
    : 'begin' statement* 'end'
    ;

// Déclaration de fonction
functionDecl
    : 'function' IDENTIFIER '(' paramList? ')' block 'end'
    ;

// Liste de paramètres
paramList
    : IDENTIFIER (',' IDENTIFIER)*
    ;

// Déclaration de classe
classDecl
    : 'class' IDENTIFIER (':' IDENTIFIER)? (',' IDENTIFIER)* classBody 'end'
    ;

// Corps de classe
classBody
    : (constructorDecl | deconstructorDecl | functionDecl | varDecl | interfaceImplDecl)*
    ;

// Déclaration de constructeur
constructorDecl
    : 'constructor' '(' paramList? ')' block 'end'
    ;

// Déclaration de destructeur
deconstructorDecl
    : 'deconstructor' '(' ')' block 'end'
    ;

// Implémentation d'interface
interfaceImplDecl
    : 'implements' IDENTIFIER
    ;

// Déclaration d'interface
interfaceDecl
    : 'interface' IDENTIFIER interfaceBody 'end'
    ;

// Corps d'interface
interfaceBody
    : (functionSignature)*
    ;

// Signature de fonction dans une interface
functionSignature
    : 'function' IDENTIFIER '(' paramList? ')'
    ;

// Expression
expression
    : expression '^' expression                           # PowerExpr
    | expression MUL expression                           # MulDivExpr
    | expression DIV expression                           # MulDivExpr
    | expression ADD expression                           # AddSubExpr
    | expression SUB expression                           # AddSubExpr
    | expression '==' expression                          # EqualityExpr
    | expression '!=' expression                          # EqualityExpr
    | expression '>' expression                           # RelationalExpr
    | expression '<' expression                           # RelationalExpr
    | expression '>=' expression                          # RelationalExpr
    | expression '<=' expression                          # RelationalExpr
    | IDENTIFIER '(' argList? ')'                         # FunctionCallExpr
    | 'new' IDENTIFIER '(' argList? ')'                   # NewExpr
    | expression '.' IDENTIFIER '(' argList? ')'           # MemberFunctionCallExpr
    | expression '.' IDENTIFIER                           # MemberAccessExpr
    | IDENTIFIER                                          # IdExpr
    | INT                                                 # IntExpr
    | FLOAT                                               # FloatExpr
    | STRING                                              # StringExpr
    | '(' expression ')'                                  # ParenExpr
    ;

// Liste d'arguments
argList
    : expression (',' expression)*
    ;

// Opérateurs arithmétiques
ADD: '+' ;
SUB: '-' ;
MUL: '*' ;
DIV: '/' ;

// Tokens pour les identifiants et les valeurs
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]* ;
INT: [0-9]+ ;
FLOAT: [0-9]+ '.' [0-9]+ ; // À améliorer si besoin
STRING: '"' (~["\r\n])* '"' ;

// Ignorer les espaces, tabulations et retours à la ligne
WS: [ \t\r\n]+ -> skip ;