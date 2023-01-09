/* Ejemplo de uso de la lista */

#include <iostream>
#include "dLinkedList.hpp"

int main(int argc, char const *argv[])
{
    iList *myList = new DLinkedList();

    myList->add(8); // 3 
    myList->add(3); // 2
    myList->add(7); // (Eliminado)
    myList->add(15); // 1
    myList->add(9); // 0
    myList->remove(2);

    std::cout << "El tamano de la lista es: " << myList->size() << std::endl;
    std::cout << "El primer elemento de la lista es: " << myList->get() << std::endl;
    std::cout << "El elemento contenido en el indice 2 de la lista es: " << myList->get(2) << std::endl;

    return 0;
}