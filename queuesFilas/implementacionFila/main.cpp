/* Ejemplo de uso de la fila */

#include <iostream>
#include "ListQueue.hpp"

int main(int argc, char const *argv[])
{
    iQueue *myQueue = new ListQueue();

    myQueue->enqueue(8);
    myQueue->enqueue(3);
    myQueue->enqueue(7);
    myQueue->enqueue(10);
    myQueue->enqueue(15);
    myQueue->enqueue(9);
    myQueue->dequeue();
    myQueue->dequeue();
    myQueue->dequeue();

    std::cout << "El tamano de la fila es: " << myQueue->size() << std::endl;
    std::cout << "El frente de la fila es: " << myQueue->front() << std::endl;
    std::cout << "El ultimo de la fila es: " << myQueue->back() << std::endl;

    return 0;
}