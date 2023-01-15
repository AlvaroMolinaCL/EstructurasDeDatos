/*
Ejercicio

Cree una clase "player" la cual posea las coordenadas de dónde está ubicado, cuál es
la distancia que ha recorrido y una función que simule el cómo se desplaza.
*/

#ifndef IPLAYER_HPP
#define IPLAYER_HPP

#include <string>

class iPlayer
{
private:
    int X;
    int Y;
    int distancia;

public:
    virtual void setPos(int, int) = 0;
    virtual void Mover(std::string) = 0;
};

#endif