/* Archivo de implementación para el árbol binario de búsqueda */

#include <iostream>
#include "SBinaryTree.hpp"

using namespace std;

SBinaryTree::SBinaryTree() // Constructor del árbol binario de búsqueda
{
    root = nullptr;
}

SBinaryTree::~SBinaryTree() // Destructor del árbol binario de búsqueda
{
    Delete();
}

void SBinaryTree::Delete(sbtNode *aux) // Operación de eliminación de un nodo del árbol binario de búsqueda
{
    if (aux != nullptr)
    {
        Delete(aux->left);
        Delete(aux->right);
        delete aux;
    }
}

void SBinaryTree::Delete() // Opción para eliminar un nodo del árbol binario de búsqueda
{
    Delete(root);
}

void SBinaryTree::insert(element_t e, sbtNode *aux) // Operación de eliminación de un nodo del árbol binario de búsqueda
{
    if (e < aux->ele)
    {
        if (aux->left != nullptr)
        {
            insert(e, aux->left);
        }
        else
        {
            aux->left = new sbtNode;
            aux->left->ele = e;
            aux->left->left = nullptr;
            aux->left->right = nullptr;
        }
    }
    else if (e >= aux->ele)
    {
        if (aux->right != nullptr)
        {
            insert(e, aux->right);
        }
        else
        {
            aux->right = new sbtNode;
            aux->right->ele = e;
            aux->right->right = nullptr;
            aux->right->left = nullptr;
        }
    }
}

void SBinaryTree::insert(element_t e) // Opción para insertar un nodo al árbol binario de búsqueda
{
    if (root != nullptr)
    {
        insert(e, root);
    }
    else
    {
        root = new sbtNode;
        root->ele = e;
        root->left = nullptr;
        root->right = nullptr;
    }
}

sbtNode *SBinaryTree::search(element_t e, sbtNode *aux) // Operación de búsqueda de un nodo en el árbol binario de búsqueda
{
    if (aux != nullptr)
    {
        if (e == aux->ele)
        {
            return aux;
        }
        if (e < aux->ele)
        {
            return search(e, aux->left);
        }
        else
        {
            return search(e, aux->right);
        }
    }
    else
    {
        return nullptr;
    }
}

sbtNode *SBinaryTree::search(element_t e) // Opción para buscar un nodo en el árbol binario de búsqueda
{
    return search(e, root);
}

void SBinaryTree::preOrder(sbtNode *aux) // Opción para recorrer el árbol en pre-orden
{
    if (aux != nullptr)
    {
        cout << " " << aux->ele;
        preOrder(aux->left);
        preOrder(aux->right);
    }
}

void SBinaryTree::preOrderPrint() // Opción para imprimir por pantalla el recorrido del árbol en pre-orden
{
    preOrder(root);
    cout << "\n";
}

void SBinaryTree::inOrder(sbtNode *aux) // Opción para recorrer el árbol en in-orden
{
    if (aux != nullptr)
    {
        inOrder(aux->left);
        cout << " " << aux->ele;
        inOrder(aux->right);
    }
}

void SBinaryTree::inOrderPrint() // Opción para imprimir por pantalla el recorrido del árbol en in-orden
{
    inOrder(root);
    cout << "\n";
}

void SBinaryTree::postOrder(sbtNode *aux) // Opción para recorrer el árbol en post-orden
{
    if (aux != nullptr)
    {
        postOrder(aux->left);
        postOrder(aux->right);
        cout << " " << aux->ele;
    }
}

void SBinaryTree::postOrderPrint() // Opción para imprimir por pantalla el recorrido del árbol en post-orden
{
    postOrder(root);
    cout << "\n";
}