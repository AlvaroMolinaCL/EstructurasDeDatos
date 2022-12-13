/* Ejemplo de una clase en C++ */

#include <iostream>

class Circulo // Se crea una clase llamada Circulo
{
private: // Atríbutos y métodos privados (que solo pueden ser usados dentro de la clase en que son declarados)
    /* Atributos */
    float radio;

public: // Atríbutos y métodos públicos (que pueden ser usados por cualquier objeto o instancia externa a la clase)
    /*
    void setRadio(float radio)
    {
        // radio = radio;
        this->radio = radio;
    }
    */

    /* Métodos */
    Circulo(float radio) // Constructor de la clase
    {
        // radio = radio;
        this->radio = radio;
    }

    float getRadio()
    {
        return radio; // Se retorna el valor del radio
    }

    float perimetro()
    {
        return 2 * 3.1415 * radio; // Se retorna el valor del perímetro
    }
};

int main(int argc, char const *argv[])
{
    // class Circulo miCirculo
    Circulo miCirculo = Circulo(7); // Se crea un objeto miCirculo a partir de la clase Circulo con radio = 7
    // miCirculo.setRadio(4);
    miCirculo.perimetro(); // Se llama al método para cálcular el perímetro de miCirculo

    std::cout << miCirculo.getRadio() << std::endl;  // Se imprime por pantalla el valor del radio
    std::cout << miCirculo.perimetro() << std::endl; // Se imprime por pantalla el valor del perímetro

    return 0;
}