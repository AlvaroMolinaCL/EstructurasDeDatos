/* Ejemplo de uso del árbol binario de búsqueda (se usa como ejemplo el árbol de la imagen ejemploArbolBinarioBusqueda.png)*/

#include <iostream>
#include "SBinaryTree.hpp"

int main(int argc, char const *argv[])
{
    iSBinTree *myTree = new SBinaryTree();

    myTree->insert(2);
    myTree->insert(4);
    myTree->insert(19);
    myTree->insert(1);
    myTree->insert(22);
    myTree->insert(9);
    myTree->insert(11);
    myTree->insert(8);
    myTree->insert(10);
    myTree->remove(19);
    myTree->remove(22);
    myTree->insert(6);
    myTree->remove(11);
    myTree->insert(5);
    myTree->insert(7);
    myTree->insert(3);
    myTree->remove(2);

    std::cout << "-- Recorrido Arbol Binario de Busqueda --" << std::endl;
    std::cout << "Pre-orden: ";
    myTree->preOrder();
    std::cout << std::endl
              << "In-orden: ";
    myTree->inOrder();
    std::cout << std::endl
              << "Post-orden: ";
    myTree->postOrder();

    free(myTree);

    return 0;
}