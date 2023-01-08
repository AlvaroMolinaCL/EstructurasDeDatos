/* Archivo de interfaz para el árbol binario de búsqueda */

#ifndef ISBINTREE_HPP
#define ISBINTREE_HPP

typedef int element_t; // Se define el tipo para los datos que contendrán los nodos del árbol (se usa "int" como ejemplo)

struct sbtNode // Estructura para los nodos del árbol binario de búsqueda
{
    element_t ele;  // Variable que almacena el dato del nodo
    sbtNode *left;  // Puntero hacia la rama izquierda
    sbtNode *right; // Puntero hacia la rama derecha
};

class iSBinTree // Aquí se define el contrato del árbol binario de búsqueda (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void Delete() = 0;                         // Opción para eliminar un nodo del árbol binario de búsqueda
    virtual void Delete(sbtNode *) = 0;                // Operación de eliminación de un nodo del árbol binario de búsqueda
    virtual void insert(element_t) = 0;                // Opción para insertar un nodo al árbol binario de búsqueda
    virtual void insert(element_t, sbtNode *) = 0;     // Operación de inserción de un nodo al árbol binario de búsqueda
    virtual sbtNode *search(element_t) = 0;            // Opción para buscar un nodo en el árbol binario de búsqueda
    virtual sbtNode *search(element_t, sbtNode *) = 0; // Operación de búsqueda de un nodo en el árbol binario de búsqueda
    virtual void preOrder(sbtNode *) = 0;              // Opción para recorrer el árbol en pre-orden
    virtual void preOrderPrint() = 0;                  // Opción para imprimir por pantalla el recorrido del árbol en pre-orden
    virtual void inOrder(sbtNode *) = 0;               // Opción para recorrer el árbol en in-orden
    virtual void inOrderPrint() = 0;                   // Opción para imprimir por pantalla el recorrido del árbol en in-orden
    virtual void postOrder(sbtNode *) = 0;             // Opción para recorrer el árbol en post-orden
    virtual void postOrderPrint() = 0;                 // Opción para imprimir por pantalla el recorrido del árbol en post-orden
};

#endif