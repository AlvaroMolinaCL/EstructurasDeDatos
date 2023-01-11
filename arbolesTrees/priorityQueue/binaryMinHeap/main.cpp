/* Ejemplo de uso del montículo mínimo binario (binary min heap) */

#include <iostream>
#include "BinMinHeap.hpp"

int main(int argc, char const *argv[])
{
    iBMinHeap *myHeap = new BinMinHeap(11);

    myHeap->insert(6);
	myHeap->insert(4);
	myHeap->remove(3);
	myHeap->insert(37);
	myHeap->insert(12);
	myHeap->insert(41);
	myHeap->insert(23);

    std::cout << myHeap->removeMin() << " ";
	std::cout << myHeap->getMin() << " ";
	myHeap->decrease(2, 3);
	std::cout << myHeap->getMin();
    std::cout << std::endl;

    return 0;
}