/* Ejemplo de uso del montículo máximo binario (binary max heap) */

#include <iostream>
#include "BinMaxHeap.hpp"

int main(int argc, char const *argv[])
{
    iBMaxHeap *myHeap = new BinMaxHeap(11);

    myHeap->insert(6);
	myHeap->insert(4);
	myHeap->insert(37);
	myHeap->insert(12);
	myHeap->insert(41);
	myHeap->insert(23);
    myHeap->printHeap();
    std::cout << std::endl;
    myHeap->removeMax();
    myHeap->printHeap();
    std::cout << std::endl;
    myHeap->removeMax();
    myHeap->printHeap();
    std::cout << std::endl;

    return 0;
}