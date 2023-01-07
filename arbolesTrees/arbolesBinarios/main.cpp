#include <iostream>
#include <cstdlib>
#include "BinaryTree.hpp"

int main(int argc, char const *argv[])
{
    struct btNode *root = insert(1);
    root->left = insert(2);
    root->right = insert(3);
    root->left->left = insert(4);

    std::cout << "-- Recorrido del Arbol Binario --" << std::endl;
    std::cout << "Pre-orden: ";
    preOrder(root);
    std::cout << std::endl
              << "In-orden: ";
    inOrder(root);
    std::cout << std::endl
              << "Post-orden: ";
    postOrder(root);

    return 0;
}