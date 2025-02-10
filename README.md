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
// Configuración inicial
tempo 120
compas 4/4

// Notas musicales
Do4 negra
Re4 negra
Mi4 negra
Fa4 negra

// Acordes
[Do4,Mi4,Sol4] blanca

// Patrones rítmicos
patron ritmo1 {
    Do4 corchea
    Mi4 corchea
    Sol4 corchea
    Mi4 corchea
}
```

## Equipo
- Lorena
- Julio
