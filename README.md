# Compilador de Música

Este proyecto implementa un compilador que traduce un lenguaje de dominio específico (DSL) para notación musical a archivos MIDI.

## Estructura del Proyecto

```
.
├── src/                    # Archivos de implementación (.cpp)
│   ├── scanner/           # Implementación del analizador léxico
│   ├── parser/            # Implementación del analizador sintáctico
│   ├── semantic/          # Implementación del analizador semántico
│   └── generator/         # Implementación del generador MIDI
├── include/               # Archivos de cabecera (.h)
│   ├── scanner/          # Cabeceras del analizador léxico
│   ├── parser/           # Cabeceras del analizador sintáctico
│   ├── semantic/         # Cabeceras del analizador semántico
│   └── generator/        # Cabeceras del generador MIDI
├── test/                 # Archivos de prueba
├── lib/                  # Bibliotecas externas
├── docs/                 # Documentación
└── examples/             # Ejemplos de código musical
```

## Requisitos
- Compilador C++ (C++11 o superior)
- CMake (para la construcción del proyecto)

## Compilación
```bash
mkdir build
cd build
cmake ..
make
```

## Uso
El compilador procesará archivos de música textual (.mus) y generará archivos MIDI.

Ejemplo de uso:
```bash
./compilador_musical ejemplo.mus -o salida.midi
```

## Sintaxis del Lenguaje Musical
```
// Estructura general del lenguaje

Estandares denifidos
tempo 120
compas 4/4

// - Palabras reservadas - 

Clave -> armadura
tempo 
Compas
# : Sostenido -> +1/2
♭ -> b : Bemol -> -1/2

// Notas musicales
Do  -> C
Re  -> D
Mi  -> E
Fa  -> F
Sol -> G
La  -> A
Si  -> B

// Duracion

Figura                    Midi
______________________________
Blanca       ->  1/2   -> 960
Negra        ->  1/4   -> 480
Corchea      ->  1/8   -> 240
Semicorchea  ->  1/16  -> 120

//Notas y Duraciones
Cada nota se escribe con su letra asignada correspondiente (C, D, E), su octava (4 , 5) y su duracion (Negra, blanca, corchea).

## Equipo
- Lorena
- Julio
