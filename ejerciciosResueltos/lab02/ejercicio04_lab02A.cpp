/*
Ejercicio 04 - Laboratorio 2A

Implemente un algoritmo que resuelva el problema de las torres de Hanoí, y dado un n, entregue la
cantidad de pasos para resolverlo.
*/

#include <iostream>

int torresHanoi(int, char, char, char);

int main(int argc, char const *argv[])
{
    int n = 5;

    torresHanoi(n, 'a', 'c', 'b');

    return 0;
}

int torresHanoi(int n, char varillaOrigen, char varillaDestino, char varillaAuxiliar)
{
    /* Mejorar */
    static int acumulador;

    if (n == 0)
    {
        return 0;
    }

    torresHanoi(n - 1, varillaOrigen, varillaAuxiliar, varillaDestino);
    torresHanoi(n - 1, varillaAuxiliar, varillaDestino, varillaOrigen);

    std::cout << "La cantidad de pasos necesarios para poder resolver el problema fueron " << acumulador++ << std::endl;
}