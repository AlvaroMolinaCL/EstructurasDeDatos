/*
Ejercicio 01 - Laboratorio 2A

Implemente de forma recursiva la Serie de Fibonacci.
*/

#include <iostream>

int fibonacci(int);

int main(int argc, char const *argv[])
{
    std::cout << fibonacci(6) << std::endl;

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}