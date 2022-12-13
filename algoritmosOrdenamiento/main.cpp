/* Ejemplo de funcionamiento de algoritmos de ordenamiento */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sort.hpp"

#define MAX_RAND 100

void setArray(int *, int);
void printArray(int *, int);

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Semilla para la función rand
    int const n = 10;
    int u[n], v[n];

    setArray(u, n);
    printArray(v, n);

    std::cout << "Selection sort\n";
    printArray(u, n);
    selectionSort(u, n);
    printArray(u, n);

    std::cout << "Insertion sort\n";
    printArray(v, n);
    insertionSort(v, n);
    printArray(v, n);

    return 0;
}

/* Función para llenar arreglos de forma aleatoria */
void setArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % MAX_RAND;
    }
}

/* Función para imprimir un arreglo por pantalla */
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\t";
    }
    std::cout << "\n";
}