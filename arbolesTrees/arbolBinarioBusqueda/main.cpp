#include <iostream>
#include "SBinaryTree.hpp"

int main(int argc, char const *argv[])
{
    iSBinTree *myTree = new SBinaryTree();

    myTree->insert(15);
    myTree->insert(9);
    myTree->insert(6);
    myTree->insert(14);
    myTree->insert(13);
    myTree->insert(20);
    myTree->insert(17);
    myTree->insert(64);
    myTree->insert(26);
    myTree->insert(72);

    std::cout << "-- Recorrido Arbol Binario de Busqueda --" << std::endl;
    std::cout << "Pre-orden: ";
    myTree->preOrderPrint();
    std::cout << std::endl
              << "In-orden: ";
    myTree->inOrderPrint();
    std::cout << std::endl
              << "Post-orden: ";
    myTree->postOrderPrint();

    return 0;
}