/*
Ejercicio 05A - Laboratorio 1A

Se solicita invertir un vector de tamaño fijo en C++. Genere el vector directamente
en el programa principal.
*/

#include <iostream>

#define MAX 10

int main(int argc, char const *argv[])
{
    int miVector[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, miVectorInvertido[MAX];

    std::cout << "Vector original: \t";
    for (int i = 0; i < MAX; i++)
    {
        std::cout << miVector[i] << "\t";
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX; i++)
    {
        miVectorInvertido[i] = miVector[MAX - (i + 1)];
    }

    std::cout << "Vector invertido: \t";
    for (int i = 0; i < MAX; i++)
    {
        std::cout << miVectorInvertido[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}