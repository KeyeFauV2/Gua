grammar Gua;

// Règles principales
program
: statement* EOF
;

// Instructions
statement
: varDecl ';'?                // déclaration de variable (avec affectation optionnelle)
| assignment ';'?             // affectation
| exprStmt ';'?               // expression exécutable
| ifStmt                      // instruction conditionnelle
| whileStmt                   // boucle
| block                       // bloc { ... } (facultatif)
;

// Déclaration de variable (affectation initiale optionnelle)
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

// Bloc d'instructions (pour grouper plusieurs instructions)
block
: '{' statement* '}'
;

// Expressions avec divers opérateurs et priorités
expression
: expression '^' expression           # PowerExpr
| expression MUL expression             # MulDivExpr
| expression DIV expression             # MulDivExpr
| expression ADD expression             # AddSubExpr
| expression SUB expression             # AddSubExpr
| expression '==' expression            # EqualityExpr
| expression '!=' expression            # EqualityExpr
| expression '>' expression             # RelationalExpr
| expression '<' expression             # RelationalExpr
| expression '>=' expression            # RelationalExpr
| expression '<=' expression            # RelationalExpr
| IDENTIFIER                            # IdExpr
| INT                                   # IntExpr
| FLOAT                                 # FloatExpr
| STRING                                # StringExpr
| '(' expression ')'                    # ParenExpr
;

// Définition des tokens pour les opérateurs arithmétiques
ADD: '+' ;
SUB: '-' ;
MUL: '*' ;
DIV: '/' ;

// Définition des tokens pour les opérateurs relationnels
// Ici, on utilise directement des littéraux dans la règle expression pour "==", "!=", ">", etc.

// Les tokens pour les identifiants et les valeurs
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]* ;
INT: [0-9]+ ;
FLOAT: [0-9]+ '.' [0-9]+ ; // simple token pour nombre décimal
STRING: '"' (~["\r\n])* '"' ;

// Ignorer les espaces, tabulations et retours à la ligne WS: [ \t\r\n]+ -> skip ;