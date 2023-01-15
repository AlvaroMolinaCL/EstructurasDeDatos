/*
Ejercicio

Utilizando la siguiente interfaz, cree una clase que simule un mazo de cartas que pueda robar la carta del tope.
*/

#ifndef IDECK_HPP
#define IDECK_HPP

#include <string>

class iDeck
{
private:
    int size = 0;

public:
    virtual int getSize() = 0;
    virtual void printDeck() = 0;
};

#endif