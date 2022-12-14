/*
Ejemplo 03B: Potencia de un número mediante función por referencia

Compilar con g++ ejemplo03B_potenciaReferencia.cpp -o ejemplo03B_potenciaReferencia.exe
*/

#include <iostream>

int potenciaR(int *, int); // Firma de la función potenciaR

int main(int argc, char const *argv[])
{
    int x = 4;
    int y = 3;
    int potencia;

    potencia = potenciaR(&x, y);

    std::cout << potencia;

    return 0;
}

// Función que calcula la potencia de un número por referencia
int potenciaR(int *b, int e)
{
    int i;
    int p;
    int _b;

    _b = *b; // Se asigna el contenido de b en _b

    for (p = 1; e > 0; e--)
    {
        p = _b * p;
    }
    *b = p;

    return p;
}