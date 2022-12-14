/*
Ejemplo 02A: Calcular el factorial de un número n de forma iterativa

Compilar con g++ ejemplo02A_factorialIterativo.cpp -o ejemplo02A_factorialIterativo.exe
*/

#include <iostream>

int factorialIterativo(int); // Firma de la función factorialIterativo

int main(int argc, char const *argv[])
{
    std::cout << "El factorial es " << factorialIterativo(5) << std::endl; // Se imprime por pantalla el resultado entregado por factorialIterativo con entrada n = 5
    return 0;
}

// Función que calcula el factorial de un número de forma iterativa
int factorialIterativo(int n)
{
    int factorial = 1; // Se declara una variable factorial de tipo entero inicializada en 1

    for (int i = 0; i <= n; i++) // Condición Inicial: i = 0; Condición Final: i <= n; Incremento: +1
    {
        factorial = factorial * i; // Se calcula el factorial de forma iterativa
    }
    return factorial; // Se retorna el valor del factorial
}