/*
Ejercicio 01 - Funciones recursivas

Cree una función recursiva que invierta el orden de un número
y lo almacene en una variable.
*/

#include <iostream>
#include <math.h>

int invertirNumero(int, int); // Firma de la función invertirNumero

int main(int argc, char const *argv[])
{
    std::cout << invertirNumero(247, 3);
    return 0;
}

// Función que permite invertir el orden de un número
int invertirNumero(int val, int largo)
{
    /* Caso base */
    if (val == 0)
    {
        return 0;
    }
    /* Caso general */
    else
    {
        return ((val % 10) * (pow(10, largo)) + invertirNumero(val / 10, largo));
    }
}