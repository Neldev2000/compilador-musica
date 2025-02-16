#include "token.h"

const char* token_str(token_t t)
{
    switch(t)
    {
        case TOKEN_EOF: return "<EOF>";
        case TOKEN_TONALIDAD: return "<TONALIDAD>";
        case TOKEN_TEMPO: return "<TEMPO>";
        case TOKEN_COMPAS: return "<COMPAS>";
        case TOKEN_NOTA_DO: return "<NOTA_DO>";
        case TOKEN_NOTA_RE: return "<NOTA_RE>";
        case TOKEN_NOTA_MI: return "<NOTA_MI>";
        case TOKEN_NOTA_FA: return "<NOTA_FA>";
        case TOKEN_NOTA_SOL: return "<NOTA_SOL>";
        case TOKEN_NOTA_LA: return "<NOTA_LA>";
        case TOKEN_NOTA_SI: return "<NOTA_SI>";
        case TOKEN_SOSTENIDO: return "<SOSTENIDO>";
        case TOKEN_BEMOL: return "<BEMOL>";
        case TOKEN_BLANCA: return "<BLANCA>";
        case TOKEN_NEGRA: return "<NEGRA>";
        case TOKEN_CORCHEA: return "<CORCHEA>";
        case TOKEN_SEMICORCHEA: return "<SEMICORCHEA>";
        case TOKEN_MAYOR: return "<MAYOR>";
        case TOKEN_MENOR: return "<MENOR>";
        case TOKEN_NUMERO: return "<NUMERO>";
        case TOKEN_BARRA: return "<BARRA>";
        case TOKEN_COMENTARIO: return "<COMENTARIO>";
        case TOKEN_IDENTIFIER: return "<IDENTIFIER>";
        case TOKEN_NOTA_COMPLETA: return "<NOTA_COMPLETA>";
        default: return "<UNKNOWN>";
    }
} 