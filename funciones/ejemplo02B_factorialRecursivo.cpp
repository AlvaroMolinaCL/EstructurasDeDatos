/*
Ejemplo 02B: Calcular el factorial de un número n de forma recursiva

Compilar con g++ ejemplo02B_factorialRecursivo.cpp -o ejemplo02B_factorialRecursivo.exe
*/

#include <iostream>

int factorialRecursivo(int); // Firma de la función factorialRecursivo

int main(int argc, char const *argv[])
{
    std::cout << "El factorial es " << factorialRecursivo(5) << std::endl; // Se imprime por pantalla el resultado entregado por factorialRecursivo con entrada n = 5
    return 0;
}

// Función que calcula el factorial de un número de forma recursiva
int factorialRecursivo(int n)
{
    /* Caso base */
    if (n == 0 || n == 1) // Si n = 0 o n = 1
    {
        return 1; // Entonces no tiene sentido calcular el factorial, ya que siempre es el mismo valor. Se retorna el valor 1
    }
    /* Caso general */
    else // En cualquier otro caso distinto
    {
        return factorialRecursivo(n - 1) * n; // Se calcula el factorial de forma recursiva, llamándose la función a sí misma y retornando el valor del factorial
    }
}