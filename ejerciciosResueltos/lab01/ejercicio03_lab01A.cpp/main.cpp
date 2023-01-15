/*
Ejercicio 03 - Laboratorio 1A

Generar una biblioteca llamada utilidades.hpp que contenda las funciones solicitadas en el Ejercicio 02.
*/

#include <iostream>
#include "utilidades.hpp"

int main(int argc, char const *argv[])
{
    int numero = 5;

    esPar(numero);
    esPrimo(numero);
    esPositivo(numero);
    esEntero(numero);

    return 0;
}