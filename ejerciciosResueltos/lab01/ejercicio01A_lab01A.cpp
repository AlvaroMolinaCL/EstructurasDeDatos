/*
Ejercicio 01A - Laboratorio 1A

Modifique el programa del Ejercicio 01 para que acepte como entrada un nombre y muestre el mensaje personalizado,
ejemplo: ’Hola, Juan’
*/

#include <iostream>

#define MAX 10

int main(int argc, char const *argv[])
{
    char nombre[MAX];

    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;
    std::cout << "Hola, " << nombre << std::endl;

    return 0;
}
