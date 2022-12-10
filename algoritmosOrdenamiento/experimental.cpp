#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include "sort.hpp"

#define MAX_RAND 100
#define N 1000

void setArray(int *, int);
void printArray(int *, int);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int repeticiones = 100; // Cantidad de repeticiones
    std::chrono::high_resolution_clock::time_point ti_ss, tf_ss;
    int v[N];

    // Experimento para selectionSort
    for (int n = 100; n < N; n = n + 100)
    {
        std::chrono::nanoseconds acum{};
        for (int i = 0; i < repeticiones; i++)
        {
            setArray(v, n);
            // Medir
            ti_ss = std::chrono::high_resolution_clock::now();
            selectionSort(v, n);
            tf_ss = std::chrono::high_resolution_clock::now();
            // Diferencia
            acum += std::chrono::duration_cast<std::chrono::nanoseconds>(tf_ss - ti_ss);
        }
        std::cout << n << "," << acum.count() / repeticiones << "\n";
    }
    return 0;
}

void setArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % MAX_RAND;
    }
}

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\t";
    }
    std::cout << "\n";
}