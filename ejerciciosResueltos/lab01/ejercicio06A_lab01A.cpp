/*
Ejercicio 06A - Laboratorio 1A

Se solicita realizar la función potencia mediante el paso de parámetros por valor.
*/

#include <iostream>

int potenciaV(int, int); // Firma de la función potenciaV

int main(int argc, char const *argv[])
{
    int x = 4;
    int y = 3;
    int potencia;

    potencia = potenciaV(x, y);

    std::cout << potencia;

    return 0;
}

// Función que calcula la potencia de un número por valor
int potenciaV(int b, int e)
{
    int i; // Iterador
    int p; // Potencia

    for (p = 1; e > 0; e--)
    {
        p = b * p;
    }
    return p;
}