/* Archivo de implementación para el árbol binario de búsqueda */

#include <iostream>
#include <cstdlib>
#include "SBinaryTree.hpp"

SBinaryTree::SBinaryTree() // Constructor del árbol binario de búsqueda
{
    root = nullptr; // Se inicializa la raíz del árbol como nulo (ya que un nuevo árbol inicialmente está vacío)
};

SBinaryTree::~SBinaryTree() // Destructor del árbol binario de búsqueda
{
    Delete(); // Se realiza la operación de eliminación del árbol binario de búsqueda
};

void SBinaryTree::Delete(sbtNode *leaf) // Operación de eliminación (o destrucción) del árbol binario de búsqueda
{
    if (leaf != nullptr) // Si el árbol no está vacío
    {
        Delete(leaf->left);  // Se realiza la operación de eliminación en el subárbol izquierdo
        Delete(leaf->right); // Se realiza la operación de eliminación en el subárbol derecho
        free(leaf);          // Se libera la memoria ocupada por la hoja del árbol
    }
};

void SBinaryTree::Delete() // Opción para eliminar (o destruir) el árbol binario de búsqueda
{
    Delete(root); // Se realiza la operación de eliminar la raíz (el único nodo restante), y con ello, todo el árbol
};

void SBinaryTree::insert(element_t e, sbtNode *leaf) // Operación de eliminación de un nodo del árbol binario de búsqueda
{
    if (e < leaf->ele) // Si el elemento a insertar tiene un valor menor a la raíz
    {
        if (leaf->left != nullptr) // Si el subárbol izquierdo no está vacío
        {
            insert(e, leaf->left); // Se inserta el elemento en el subárbol izquierdo
        }
        else // En caso contrario a lo indicado en la línea 36
        {
            leaf->left = (sbtNode *)malloc(sizeof(sbtNode)); // Se reserva memoria dinámica para el nodo a insertar en el subárbol izquierdo
            leaf->left->ele = e;                             // Se inserta el elemento en el subárbol izquierdo
            leaf->left->left = nullptr;                      // Se inicializa en nulo la rama izquierda del nuevo nodo insertado
            leaf->left->right = nullptr;                     // Se inicializa en nulo la rama derecha del nuevo nodo insertado
        }
    }
    else if (e >= leaf->ele) // Si el elemento a insertar tiene un valor mayor o igual a la raíz
    {
        if (leaf->right != nullptr) // Si el subárbol derecho no está vacío
        {
            insert(e, leaf->right); // Se inserta el elemento en el subárbol derecho
        }
        else // En caso contrario a lo indicado en la línea 50
        {
            leaf->right = (sbtNode *)malloc(sizeof(sbtNode)); // Se reserva memoria dinámica para el nodo a insertar en el subárbol derecho
            leaf->right->ele = e;                             // Se inserta el elemento en el subárbol derecho
            leaf->right->right = nullptr;                     // Se inicializa en nulo la rama derecha del nuevo nodo insertado
            leaf->right->left = nullptr;                      // Se inicializa en nulo la rama izquierda del nuevo nodo insertado
        }
    }
};

void SBinaryTree::insert(element_t e) // Opción para insertar un nodo al árbol binario de búsqueda
{
    if (root != nullptr) // Si el árbol no está vacío
    {
        insert(e, root); // Se realiza la operación de inserción de un nuevo nodo al árbol
    }
    else // En caso contrario a lo indicado en la línea 66
    {
        root = (sbtNode *)malloc(sizeof(sbtNode)); // Se reserva memoria dinámica para el nodo a insertar en la raíz del árbol
        root->ele = e;                             // Se inserta el elemento en la raíz del árbol
        root->left = nullptr;                      // Se inicializa en nulo el subárbol izquierdo
        root->right = nullptr;                     // Se inicializa en nulo el subárbol derecho
    }
};

sbtNode *SBinaryTree::minValue(sbtNode *n) // Operación que retorna el valor mínimo de un subárbol
{
    if (n == nullptr) // Si no hay nodos en el árbol
    {
        return n; // Se retorna el mismo valor ingresado
    }
    else if (n->left == nullptr) // Si no hay subárbol izquierdo
    {
        return n; // Se retorna el mismo valor ingresado
    }
    else // En caso contrario a lo indicado en las líneas 81 y 85
    {
        minValue(n->left); // Se realiza la operación de búsqueda del valor mínimo del subárbol
    }
};

sbtNode *SBinaryTree::remove(sbtNode *n, element_t k) // Operación de eliminación de un nodo del árbol binario de búsqueda
{
    sbtNode *aux; // Se declara un puntero auxiliar

    if (n == nullptr) // Si no hay nodos en el árbol
    {
        return nullptr; // Se retorna nulo
    }

    if (k < n->ele) // Si la clave ingresada es menor que la raíz del árbol
    {
        n->left = remove(n->left, k); // Se busca en el subárbol izquierdo
    }
    else if (k > n->ele) // Si la clave ingresada es mayor que la raíz del árbol
    {
        n->right = remove(n->right, k); // Se busca en el subárbol derecho
    }
    else // En caso contrario a lo indicado en las líneas 104 y 108 (si la clave coincide con la raíz del árbol)
    {
        if (n->left == nullptr && n->right == nullptr) // Si el nodo a eliminar no tiene hijos (ni subárbol izquierdo ni derecho)
        {
            free(n);     // Se libera la memoria ocupada y se elimina el nodo en cuestión
            n = nullptr; // El nodo eliminado se iguala a nulo
        }
        else if (n->right && n->left) // Si el nodo a eliminar tiene dos hijos (subárbol izquierdo y derecho)
        {
            sbtNode *aux = minValue(n->right);   // Se busca el nodo con valor mínimo en el subárbol derecho del nodo a eliminar
            n->ele = aux->ele;                   // Se copia el valor del nodo con valor mínimo encontrado en el nodo a eliminar
            n->right = remove(n->right, n->ele); // Se elimina el nodo con valor mínimo del subárbol derecho
        }
        else // En caso contrario a lo indicado en las líneas 114 y 119
        {
            aux = n; // Se iguala el puntero auxiliar con el nodo a eliminar

            if (n->right == nullptr) // Si el nodo a eliminar no tiene subárbol derecho
            {
                n = n->left; // Se iguala el nodo a eliminar con el subárbol izquierdo
            }
            else if (n->left == nullptr) // Si el nodo a eliminar no tiene subárbol izquierdo
            {
                n = n->right; // Se iguala el nodo a eliminar con el subárbol derecho
            }

            free(aux); // Se libera la memoria ocupada y se elimina el nodo en cuestión
        }
    }

    return n; // Se retorna el nuevo nodo raíz tras la eliminación del nodo en cuestión
};

sbtNode *SBinaryTree::remove(element_t k) // Opción para eliminar un nodo del árbol binario de búsqueda
{
    return remove(root, k); // Se realiza la operación de eliminación de un nodo del árbol
};

sbtNode *SBinaryTree::search(element_t k, sbtNode *leaf) // Operación de búsqueda de un nodo en el árbol binario de búsqueda
{
    if (leaf != nullptr) // Si el árbol no está vacío
    {
        if (k == leaf->ele) // Si la clave ingresada coincide con la raíz del árbol
        {
            return leaf; // Se retorna la raíz del árbol
        }
        if (k < leaf->ele) // Si la clave ingresada es menor que la raíz del árbol
        {
            return search(k, leaf->left); // Se realiza la operación de búsqueda en el subárbol izquierdo
        }
        else // En caso contrario a lo indicado en la línea 87
        {
            return search(k, leaf->right); // Se realiza la operación de búsqueda en el subárbol derecho
        }
    }
    else // En caso contrario a lo indicado en la línea 81
    {
        return nullptr; // Se retorna nulo
    }
};

sbtNode *SBinaryTree::search(element_t k) // Opción para buscar un nodo en el árbol binario de búsqueda
{
    return search(k, root); // Se realiza la operación de búsqueda del nodo con la clave k
};

void SBinaryTree::preOrder(sbtNode *leaf) // Opción para recorrer el árbol en pre-orden
{
    if (leaf != nullptr) // Si el árbol no está vacío
    {
        std::cout << " " << leaf->ele; // Se imprime por pantalla cada nodo visitado
        preOrder(leaf->left);          // Se visita el subárbol izquierdo
        preOrder(leaf->right);         // Se visita el subárbol derecho
    }
};

void SBinaryTree::preOrder() // Opción para imprimir por pantalla el recorrido del árbol en pre-orden
{
    preOrder(root);         // Se realiza la operación de recorrer el árbol en pre-orden
    std::cout << std::endl; // Se imprime un salto de línea
};

void SBinaryTree::inOrder(sbtNode *leaf) // Opción para recorrer el árbol en in-orden
{
    if (leaf != nullptr) // Si el árbol no está vacío
    {
        inOrder(leaf->left);           // Se visita el subárbol izquierdo
        std::cout << " " << leaf->ele; // Se imprime por pantalla cada nodo visitado
        inOrder(leaf->right);          // Se visita el subárbol derecho
    }
};

void SBinaryTree::inOrder() // Opción para imprimir por pantalla el recorrido del árbol en in-orden
{
    inOrder(root);          // Se realiza la operación de recorrer el árbol en in-orden
    std::cout << std::endl; // Se imprime un salto de línea
};

void SBinaryTree::postOrder(sbtNode *leaf) // Opción para recorrer el árbol en post-orden
{
    if (leaf != nullptr) // Si el árbol no está vacío
    {
        postOrder(leaf->left);         // Se visita el subárbol izquierdo
        postOrder(leaf->right);        // Se visita el subárbol derecho
        std::cout << " " << leaf->ele; // Se imprime por pantalla cada nodo visitado
    }
};

void SBinaryTree::postOrder() // Opción para imprimir por pantalla el recorrido del árbol en post-orden
{
    postOrder(root);        // Se realiza la operación de recorrer el árbol en post-orden
    std::cout << std::endl; // Se imprime un salto de línea
};