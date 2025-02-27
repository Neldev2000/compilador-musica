%{
#include <token.h>
%}

ESPACIO     [ \t\n]
OCTAVA      [0-9]
LETRA       [A-Za-z]
NUMERO      {OCTAVA}+
COMENTARIO  "//".*
NOTA_LAT    "Do"|"Re"|"Mi"|"Fa"|"Sol"|"La"|"Si"
NOTA_ING    "C"|"D"|"E"|"F"|"G"|"A"|"B"
ALTER       "b"|"#"|"♭"

%%
{ESPACIO}       { /* Ignorar espacios */ }
{COMENTARIO}    { return TOKEN_COMENTARIO; }

"Tonalidad"     { return TOKEN_TONALIDAD; }
"Tempo"         { return TOKEN_TEMPO; }
"Compas"        { return TOKEN_COMPAS; }

"Blanca"        { return TOKEN_BLANCA; }
"Negra"         { return TOKEN_NEGRA; }
"Corchea"       { return TOKEN_CORCHEA; }
"Semicorchea"   { return TOKEN_SEMICORCHEA; }

"M"             { return TOKEN_MAYOR; }
"m"             { return TOKEN_MENOR; }

{NUMERO}        { return TOKEN_NUMERO; }
"/"             { return TOKEN_BARRA; }

"Do"|"C"        { return TOKEN_NOTA_DO; }
"Re"|"D"        { return TOKEN_NOTA_RE; }
"Mi"|"E"        { return TOKEN_NOTA_MI; }
"Fa"|"F"        { return TOKEN_NOTA_FA; }
"Sol"|"G"       { return TOKEN_NOTA_SOL; }
"La"|"A"        { return TOKEN_NOTA_LA; }
"Si"|"B"        { return TOKEN_NOTA_SI; }

"#"             { return TOKEN_SOSTENIDO; }
"b"|"♭"         { return TOKEN_BEMOL; }

[A-G][#b]?[0-9] { return TOKEN_NOTA_COMPLETA; }
[A-Z][a-z]+[#b]?[0-9] { return TOKEN_NOTA_COMPLETA; }

[a-zA-Z_][a-zA-Z0-9_]* { return TOKEN_IDENTIFIER; }

.               { /* Ignorar caracteres no reconocidos */ }

%%

int yywrap() { return 1; }