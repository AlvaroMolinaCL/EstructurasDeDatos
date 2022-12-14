/*
Ejemplo 01A: Suma de números iterativa

Dado un número n, sumar los primeros n números.

* Entrada: n = 5
* Salida: 1 + 2 + 3 + 4 + 5 = 15

Compilar con g++ ejemplo01A_sumaIterativa.cpp -o ejemplo01A_sumaIterativa.exe
*/

#include <iostream>

int sumaIterativa(int); // Firma de la función sumaIterativa

int main(int argc, char const *argv[])
{
    std::cout << "El resultado de la suma es " << sumaIterativa(5) << std::endl; // Se imprime por pantalla el resultado entregado por sumaIterativa con entrada n = 5
    return 0;
}

// Función que realiza suma de números de forma iterativa
int sumaIterativa(int n)
{
    int suma = 0; // Se declara una variable suma de tipo entero inicializada en 0

    for (int i = 1; i <= n; i++) // Condición Inicial: i = 1; Condición Final: i <= n; Incremento: +1
    {
        suma = i + suma; // Se realiza la suma de forma iterativa
    }
    return suma; // Se retorna el valor de la suma
}