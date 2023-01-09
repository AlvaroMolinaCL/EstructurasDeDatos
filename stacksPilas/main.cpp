/* Ejemplo de uso de la pila */

#include <iostream>
#include "ListStack.hpp"

int main(int argc, char const *argv[])
{
    iStack *myStack = new ListStack();

    myStack->push(8);
    myStack->push(3);
    myStack->push(7);
    myStack->push(10);
    myStack->push(15);
    myStack->push(9);
    myStack->pop();
    myStack->pop();
    myStack->pop();

    std::cout << "El tamano de la pila es: " << myStack->size();

    /*
    // Ingreso de datos a la pila por parte del usuario
    int numDatos;
    element_t datoPila;

    std::cout << "Cuantos datos tendra la pila? \n";
    std::cin >> numDatos;

    std::cout << "Ingrese datos a la pila: \n";

    for (int i = 0; i < numDatos; i++)
    {
        std::cin >> datoPila;
        myStack->push(datoPila);
    }

    while (myStack->size() > 0)
    {
        std::cout << myStack->top() << "\t";
        myStack->pop();
    }
    */

    /*
    // Imprimir por pantalla datos que contiene la pila (también hay un ejemplo de implementación desde ListStack.cpp)
    while (myStack->size() > 0)
    {
        std::cout << myStack->top() << "\t";
        myStack->pop();
    }
    */

    /*
    // Buscar el mayor elemento de una pila
    int mayor = 0;

    while (myStack->size() > 0)
    {
        if (myStack->top() > mayor)
        {
            mayor = myStack->top();
        }
        myStack->pop();
    }

    std::cout << "El mayor elemento de la pila es " << mayor << "\n";
    */

    /*
    // Buscar el menor elemento de una pila
    int menor = myStack->top();

    while (myStack->size() > 0)
    {
        if (myStack->top() < menor)
        {
            menor = myStack->top();
        }
        myStack->pop();
    }

    std::cout << "El menor elemento de la pila es " << menor << "\n";
    */

    return 0;
}