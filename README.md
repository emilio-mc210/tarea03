# Tarea03
Tarea 3 de plataformas abiertas.

## Compilar cada .c con:

    gcc -Wall archivo-fuente.c -o ejecutable

## Descripción General

Este repositorio contiene dos programas escritos en C que resuelven problemas distintos relacionados con el manejo de texto y números desde la entrada estándar (`stdin`).

## Archivos:

`T3_1_C4G871.c`

Este programa realiza las siguintes funciones:

1. Solicita al usuario una cadena de texto.
2. solicita un caracter a buscar dentro de la cadena. 
3. Cuenta cuantas veces aparece el caracter en la cadena.
4. Muestra la cadena en orden inverso.

### Detalles:

1. Se utiliza fgets() para poder leer una cadena con espacios.
2. Se coloca un espacio en el formato de scanf() para evitar problemas con la cadena ingresada anteriormente.


`T3_2_C4G871.c`


Este programa procesa líneas desde la entrada estándar (`stdin`). Su funcionamiento es el siguiente:

1. Lee números del `stdin`, desde un archivo y uno por línea. 
2. Si la línea solo contiene un número se escribe en el `stdout`. 
3. Si la línea contiene algo distinto a un número o hay varios en una misma línea, escribe en `stderr` un mensaje. 
4. El programa esta pensado para utilizarse con redireccion de la salida del prgrama, como se muestra a continuacin:

`./programa < arhcivo_input > archivo_output 2> archivo_error`

### Detalles:

1. Se pueden ingresar lineas de texto manualmente, porque acepta datos del stdin, pero no se va a detener el programa.  
Se debe usar `Ctrl`+`C` para detener el programa en caso de usarse sin redireccion de salida.

## Resultados:

### Problema 1:
    Ingrese un string: holaaaa_ adios
    Ingrese un caracter para revisar: a
    El caracter a se repite 5 veces.
    El string al reves es: 
    soida _aaaaloh

### Problema 2:
    ./T3_2 < T3_C4G871.txt > output.txt 2> error.txt

    output.txt:
    Numero: 123
    Numero: 456
    Numero: 1010101
    Numero: -910
    Numero: 34
    Numero: 0

    error.txt:
    Error - Linea invalida: abc
    Error - Linea invalida: hola
    Error - Linea invalida: no
    Error - Linea invalida: adios
