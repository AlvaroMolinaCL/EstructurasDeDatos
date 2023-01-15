/*
Ejercicio 04A - Laboratorio 1A

Generar un programa que imprima los números primos del 1 al 100.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 2; i <= 100; i++)
    {
        int j = 2;

        while (i % j != 0)
        {
            j++;
        }

        if (j == i)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}
