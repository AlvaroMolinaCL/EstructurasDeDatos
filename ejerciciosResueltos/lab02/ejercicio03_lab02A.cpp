/*
Ejercicio 03 - Laboratorio 2A

Imprime todos los valores de un arreglo utilizando recursividad.
*/

#include <iostream>

#define MAX 10

void imprimirArreglo(int[]);

int main(int argc, char const *argv[])
{
    int miArreglo[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    imprimirArreglo(miArreglo);

    return 0;
}

void imprimirArreglo(int miArreglo[])
{
    static int i;

    if (i == MAX)
    {
        i = 0;
        std::cout << std::endl;
        return;
    }

    std::cout << miArreglo[i] << " ";
    i++;

    imprimirArreglo(miArreglo);
}
