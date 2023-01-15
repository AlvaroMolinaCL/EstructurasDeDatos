/*
Ejercicio

Cree una clase llamada Rectangulo que posea atributos para sus lados, un método para
calcular su perímetro y otro método para calcular su área.
*/

#ifndef IRECTANGULO_HPP
#define IRECTANGULO_HPP

class iRectangulo
{
public:
    virtual void setLado1() = 0;
    virtual int getLado1() = 0;
    virtual void setLado2() = 0;
    virtual int getLado2() = 0;
};

#endif