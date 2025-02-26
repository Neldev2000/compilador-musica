# Compilador de Música

Este proyecto implementa un compilador que traduce un lenguaje de dominio específico (DSL) para notación musical a archivos MIDI.

## Estructura del Proyecto

```
.
├── src/                  # Archivos de implementación (.cpp)
│   ├── scanner/          # Implementación del analizador léxico
│   ├── parser/           # Implementación del analizador sintáctico
│   ├── semantic/         # Implementación del analizador semántico
│   └── generator/        # Implementación del generador MIDI
├── include/              # Archivos de cabecera (.h)
│   ├── scanner/          # Cabeceras del analizador léxico
│   ├── parser/           # Cabeceras del analizador sintáctico
│   ├── semantic/         # Cabeceras del analizador semántico
│   └── generator/        # Cabeceras del generador MIDI
├── test/                 # Archivos de prueba y ejemplos del lenguaje musical (.mus)
└── lib/                  # Bibliotecas externas
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

## Uso y Pruebas
El proyecto actualmente está en desarrollo. Por el momento, puedes encontrar ejemplos del lenguaje musical en la carpeta `test/`:

- `test1.mus`: Contiene ejemplos básicos de la sintaxis del lenguaje
- `test2.mus`: Contiene ejemplos más avanzados de composición musical

Para examinar estos archivos de prueba:
```bash
cat test/test1.mus  # Ver el contenido del primer archivo de prueba
cat test/test2.mus  # Ver el contenido del segundo archivo de prueba
```

La funcionalidad de generación de archivos MIDI está en desarrollo. Próximamente se podrá usar el compilador de la siguiente manera:
```bash
./compilador_musical archivo.mus -o salida.midi
```

## Sintaxis del Lenguaje Musical
```
// Estructura general del lenguaje

Estandares denifidos
tempo 120
compas 4/4

// - Palabras reservadas - 

Tonalidad
Tempo 
Compas
M = Mayor -> 0
m = menor -> 1
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
```

## Equipo
- Lorena
- Julio