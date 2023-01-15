/*
Ejercicio 02 - Laboratorio 2A

Calcule de forma recursiva la potencia de un número positivo.
*/

#include <iostream>

int potencia(int, int);

int main(int argc, char const *argv[])
{
    int base = 0, exponente = 0;
    int resultado = 0;

    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    resultado = potencia(base, exponente);

    std::cout << "La potencia de " << base << " elevado a " << exponente << " es " << resultado;

    return 0;
}

int potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    else if (exponente > 0)
    {
        return base * potencia(base, exponente - 1);
    }
}
