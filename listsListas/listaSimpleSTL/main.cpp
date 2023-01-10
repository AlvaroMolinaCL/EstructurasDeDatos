/* Ejemplo de uso de la lista usando STL de C++ */

#include <iostream>
#include <list>

int main(int argc, char const *argv[])
{
    typedef int element_t;

    std::list<int> myList;

    myList.push_front(8);
    myList.push_front(3);
    myList.push_back(7);
    myList.push_front(10);
    myList.push_front(15);
    myList.push_back(9);
    myList.pop_back();
    myList.pop_back();
    myList.pop_front();

    std::cout << "El tamano de la lista es: " << myList.size() << std::endl;
    std::cout << "El frente de la lista es: " << myList.front() << std::endl;
    std::cout << "El ultimo de la lista es: " << myList.back() << std::endl;

    return 0;
}