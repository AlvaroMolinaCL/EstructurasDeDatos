#include <iostream>

class Circulo
{
    private:
        // Atributos
        float radio;

    public:
        /*
        void setRadio(float radio)
        {
            // radio = radio;
            this->radio = radio;
        }
        */

        Circulo(float radio)
        {
            // radio = radio;
            this->radio = radio;
        }

        float getRadio()
        {
            return radio;
        }

        // Métodos
        float perimetro()
        {
            return 2 * 3.1415 * radio;
        }
};

int main(int argc, char const *argv[])
{
    // class Circulo miCirculo
    Circulo miCirculo = Circulo(7);
    // miCirculo.setRadio(4);
    miCirculo.perimetro();
    
    std::cout << miCirculo.getRadio() << "\n";
    std::cout << miCirculo.perimetro() << "\n";

    return 0;
}