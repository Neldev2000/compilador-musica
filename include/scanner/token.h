#pragma once

typedef enum
{
    TOKEN_EOF = 0,
    // Palabras reservadas
    TOKEN_TONALIDAD = 258,
    TOKEN_TEMPO = 259,
    TOKEN_COMPAS = 260,
    
    // Notas musicales
    TOKEN_NOTA_DO = 261,    // C
    TOKEN_NOTA_RE = 262,    // D
    TOKEN_NOTA_MI = 263,    // E
    TOKEN_NOTA_FA = 264,    // F
    TOKEN_NOTA_SOL = 265,   // G
    TOKEN_NOTA_LA = 266,    // A
    TOKEN_NOTA_SI = 267,    // B
    
    // Alteraciones
    TOKEN_SOSTENIDO = 268,  // #
    TOKEN_BEMOL = 269,      // b
    
    // Duraciones
    TOKEN_BLANCA = 270,
    TOKEN_NEGRA = 271,
    TOKEN_CORCHEA = 272,
    TOKEN_SEMICORCHEA = 273,
    
    // Tonos
    TOKEN_MAYOR = 274,      // M
    TOKEN_MENOR = 275,      // m
    
    // Números y símbolos
    TOKEN_NUMERO = 276,
    TOKEN_BARRA = 277,      // /
    TOKEN_COMENTARIO = 278,
    
    // Otros
    TOKEN_IDENTIFIER = 279,
    
    // Nota completa (nota + alteración opcional + octava)
    TOKEN_NOTA_COMPLETA = 280
} token_t;

const char* token_str(token_t t);