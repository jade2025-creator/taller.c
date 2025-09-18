Taller: Recursividad y Gestión de Datos (taller.c)

Objetivo: aplicación de consola en C que gestiona una lista predefinida de estudiantes (codigo, nota) y realiza operaciones RECURSIVAS: - buscar nota máxima (recursivo) - calcular promedio (suma recursiva) - ordenar por código (Selection Sort RECURSIVO)
Instrucciones rápidas: - Compilar: gcc taller.c -o taller - Ejecutar: ./taller

Estructura del archivo:
 1) Comentarios explicativos y pasos (este encabezado)
 2) typedef Estudiante 
 3) Declaración de prototipos de funciones recursivas + helpers 
 4) Implementación de funciones (con explicación del caso base y paso recursivo) 
 5) main() con menú interactivo

 el proceso a realizar es de la siguente manera:
 Paso 1: definir la estructura "Estudiante" con "codigo" (int) y "nota" (double) 
 Paso 2: crear un arreglo predefinido de Estudiante dentro de main (datos fijos) 
 Paso 3: implementar una función recursiva para encontrar la nota máxima - Caso base: cuando el índice es el último, retornar su nota - Paso recursivo: comparar la nota actual con el máximo del resto 
 Paso 4: implementar una función recursiva que sume todas las notas - Caso base: cuando el índice == n, sumar 0 - Paso recursivo: arr[idx].nota + suma(idx+1) - El promedio = suma / n 
 Paso 5: implementar Selection Sort recursivo - findMinIndex(arr, start, n): devuelve el índice mínimo entre [start..n-1] * Caso base: start == n-1 -> return start * Paso recursivo: obten el min del resto y compáralo con start - selectionSortRec(arr, start, n): * Caso base: start >= n-1 -> ordenar terminado * Paso recursivo: buscar min en [start..n-1], swap con start, llamar con start+1 
 Paso 6: menú interactivo que llama a las funciones anteriores y muestra resultados.