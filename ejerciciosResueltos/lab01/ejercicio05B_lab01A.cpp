/*
Ejercicio 05B - Laboratorio 1A

Se solicita invertir un vector de tamaño fijo en C++. Genere el vector directamente
en el programa principal. Genere la funcion invertirVector
*/

#include <iostream>

#define MAX 10

void invertirVector(int[]);

int main(int argc, char const *argv[])
{
    int miVector[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    invertirVector(miVector);

    return 0;
}

void invertirVector(int miVector[MAX])
{
    int miVectorInvertido[MAX];

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
}