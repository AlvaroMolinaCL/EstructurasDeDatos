/* Archivo de implementación para el árbol binario */

#include <iostream>
#include "BinaryTree.hpp"

// BinaryTree::BinaryTree()
// {
//
// };
//
// BinaryTree::~BinaryTree()
// {
//
// };

void preOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        std::cout << " " << aux->ele;
        preOrder(aux->left);
        preOrder(aux->right);
    }
}

void inOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        inOrder(aux->left);
        std::cout << " " << aux->ele;
        inOrder(aux->right);
    }
}

void postOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        postOrder(aux->left);
        postOrder(aux->right);
        std::cout << " " << aux->ele;
    }
}