/*
Ejemplo 01B: Suma de números recursiva

Dado un número n, sumar los primeros n números.

* Entrada: n = 5
* Salida: 1 + 2 + 3 + 4 + 5 = 15

Compilar con g++ ejemplo01B_sumaRecursiva.cpp -o ejemplo01B_sumaRecursiva.exe
*/

#include <iostream>

int sumaRecursiva(int); // Firma de la función sumaRecursiva

int main(int argc, char const *argv[])
{
    std::cout << "El resultado de la suma es " << sumaRecursiva(5) << std::endl; // Se imprime por pantalla el resultado entregado por sumaRecursiva con entrada n = 5
    return 0;
}

// Función que realiza suma de números de forma recursiva
int sumaRecursiva(int n)
{
    /* Caso base */
    if (n == 1) // Si n = 1
    {
        return 1; // Entonces no hay nada que sumar. Se retorna la misma entrada
    }
    /* Caso general */
    else // En cualquier otro caso distinto
    {
        return sumaRecursiva(n - 1) + n; // Se realiza la suma de forma recursiva, llamándose la función a sí misma y retornando el valor de la suma
    }
}