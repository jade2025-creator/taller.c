#include <stdio.h>
#include <stdlib.h>

//definicion de tipos
typedef struct {
    int codigo;
    double  nota;
} estudiante;

double maxNotaRec( const estudiante arr[], int index, int n);
double sumaNotaRec( const estudiante arr[], int index, int n);
int findMinIndex( const estudiante arr[], int start, int n);
void selectionSortRec( estudiante arr[], int start, int n);
void swapEstudiantes( estudiante *a, estudiante *b);
void imprimirEstudiantes( const estudiante arr[], int n);

// funciones recursivas
double maxNotaRec( const estudiante arr[], int index, int n) {
    if (n <= 0 || index >= n ) {
        return -1.0; // mostrara un error si esta vacio el arreglo
    }

if (index == n - 1){
    return arr[index].nota;// caso base
}
double maxRest = maxNotaRec(arr, index + 1, n); // paso recursivo

return (arr[index].nota > maxRest) ? arr[index].nota : maxRest;
}

double sumaNotaRec(const estudiante arr[], int index, int n) {
    if (index >= n)
    {
        return 0.0; // caso base de la suma de notas
    }
    return arr[index].nota + sumaNotaRec(arr, index + 1, n); // paso recursivo de la suma de notas
    
}
int finMinIndex(const estudiante arr[], int start, int n) {
    if (start >= n - 1) {
        return start; // caso base 
    }
    int minRest = findMinIndex(arr, start + 1, n); // paso recursivo
    return(arr[start].codigo < arr[minRest].codigo) ? start : minRest;
}

void selectionSortRect(estudiante arr[], int start, int n) {
    if (start >= n - 1)
    {
        return 0; // caso base
    }
    int minIndex = findMinIndex(arr, start, n);
    if (minIndex != start) 
    {
        swapEstudiantes(&arr[start], &arr[minIndex]);
    }
    selectionSortRec(arr, start + 1, n); // pasos recursivo
}

void swapEstudiantes(estudiante *a, estudiante *b) {
    estudiante tmp = *a;
    *a = *b;
    *b = tmp;
}

void imprimirEstudiantes(const estudiante  arr[], int n) {
    printf("Listado de estudiantes\n (codigo - nota):\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d | %.2f\n", arr[i].codigo, arr[i].nota);

    }