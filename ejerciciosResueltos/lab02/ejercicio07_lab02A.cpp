/*
Ejercicio 07 - Laboratorio 2A

El algoritmo de Euclides se utiliza para calcular el máximo común divisor entre dos números.
Impleméntelo recursivamente.
*/

#include <iostream>

int MCD(int, int);

int main(int argc, char const *argv[])
{
    int a = 25, b = 10;

    std::cout << "MCD(" << a << ", " << b << ") = " << MCD(a, b) << std::endl;

    return 0;
}

int MCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    return MCD(b % a, a);
}