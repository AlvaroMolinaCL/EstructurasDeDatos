/*
Ejercicio 03 - Laboratorio 1A

Generar una biblioteca llamada utilidades.hpp que contenda las funciones solicitadas en el Ejercicio 02.
*/

#include <iostream>
#include <cmath>
#include "utilidades.hpp"

bool esPar(int num)
{
    if (num % 2 == 0)
    {
        std::cout << "El numero es par" << std::endl;
    }
    else
    {
        std::cout << "El numero es impar" << std::endl;
    }
}

bool esPrimo(int num)
{
    if (num == 0 || num == 1 || num == 4)
    {
        std::cout << "El numero no es primo" << std::endl;
        return false;
    }
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            std::cout << "El numero no es primo" << std::endl;
            return false;
        }
    }
    std::cout << "El numero es primo" << std::endl;
}

bool esPositivo(int num)
{
    if (num >= 0)
    {
        std::cout << "El numero es positivo" << std::endl;
    }
    else
    {
        std::cout << "El numero es negativo" << std::endl;
    }
}

bool esEntero(int num)
{
    /* Revisar */
    double parteEntera;
    double parteDecimal = std::modf(num, &parteEntera);

    if(parteDecimal == 0.0)
    {
        std::cout << "El numero es entero" << std::endl;
    }
    else
    {
        std::cout << "El numero no es entero" << std::endl;
    }
}