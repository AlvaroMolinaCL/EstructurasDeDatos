/* Ejemplo de uso de la fila usando STL de C++ */

#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    typedef int element_t;

    std::queue<element_t> myQueue;

    myQueue.push(8);
    myQueue.push(3);
    myQueue.push(7);
    myQueue.push(10);
    myQueue.push(15);
    myQueue.push(9);
    myQueue.pop();
    myQueue.pop();
    myQueue.pop();

    std::cout << "El tamano de la fila es: " << myQueue.size() << std::endl;
    std::cout << "El frente de la fila es: " << myQueue.front() << std::endl;
    std::cout << "El ultimo de la fila es: " << myQueue.back() << std::endl;

    return 0;
}