/* Análisis experimental de complejidad temporal de algoritmos de ordenamiento */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "sort.hpp"

#define MAX_RAND 100 // Rango máximo para el llenado de arreglos aleatorios
#define N 1000 // Tamaño máximo del arreglo

void setArray(int *, int);
void printArray(int *, int);

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Semilla para la función rand
    int repeticiones = 100; // Cantidad de repeticiones
    std::chrono::high_resolution_clock::time_point ti_ss, tf_ss; // Se declaran variables para almacenar tiempo inicial y final desde la biblioteca chrono
    int v[N]; // Se declara un arreglo de tipo entero y tamaño N

    // Experimento para selectionSort
    for (int n = 100; n < N; n = n + 100)
    {
        std::chrono::nanoseconds acum{};
        for (int i = 0; i < repeticiones; i++)
        {
            setArray(v, n); // Se llena el arreglo 'v' con números aleatorios (entre 0 y 99)
            ti_ss = std::chrono::high_resolution_clock::now(); // Aquí se comienza a medir el tiempo de ejecución del algoritmo
            selectionSort(v, n); // Se llama al algoritmo Selection Sort, que se usará como ejemplo en este caso
            tf_ss = std::chrono::high_resolution_clock::now(); // Aquí de termina de medir el tiempo de ejecución del algoritmo
            acum += std::chrono::duration_cast<std::chrono::nanoseconds>(tf_ss - ti_ss); // Diferencia entre tiempo final e inicial
        }
        std::cout << n << "," << acum.count() / repeticiones << "\n";
    }
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