/*
Ejercicio 04B - Laboratorio 1A

Transforme el programa en la función void primos(); que reciba como parámetro de entrada
un número n e imprima los números primos desde 1 a n.
*/

#include <iostream>

void primos(int);

int main(int argc, char const *argv[])
{
    int n = 0;
    
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    primos(n);

    return 0;
}

void primos(int num)
{
    for (int i = 2; i <= num; i++)
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
}