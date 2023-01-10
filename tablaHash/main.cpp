/* Ejemplo de uso de la tabla hash */

#include <iostream>
#include "HashTable.hpp"

int main(int argc, char const *argv[])
{
    iHash *myHashTable = new HashTable();

    myHashTable->insert({3876, 3});
    myHashTable->insert({4832, 6});
    myHashTable->insert({3987, 2});
    myHashTable->insert({2343, 8});
    myHashTable->insert({6476, 4});
    myHashTable->insert({4232, 9});
    myHashTable->remove(3876);
    myHashTable->remove(6476);

    std::cout << "El tamano de la tabla hash es: " << myHashTable->size() << std::endl;
    std::cout << "La tabla hash esta vacia? (0 = Falso / 1 = Verdadero): " << myHashTable->empty() << std::endl;

    return 0;
}