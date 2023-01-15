/*
Ejercicio 02 (modificado) - Laboratorio 1A

Genere un algoritmo que indique cuando un número es par e impar, también debe indicar cuando es positivo o negativo.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int numero;

    std::cout << "Ingrese un numero" << std::endl;
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        if (numero >= 0)
        {
            std::cout << "El numero es par positivo" << std::endl;
        }
        else
        {
            std::cout << "El numero es par negativo" << std::endl;
        }
    }
    else
    {
        if (numero >= 0)
        {
            std::cout << "El numero es impar positivo" << std::endl;
        }
        else
        {
            std::cout << "El numero es impar negativo" << std::endl;
        }
    }
    return 0;
}
