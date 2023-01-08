/* Archivo de definiciones para el árbol binario de búsqueda */

#include "iSBinTree.hpp"

class SBinaryTree : public iSBinTree // Aquí se hereda el contrato del árbol binario de búsqueda y se definen sus operaciones
{
private:
    sbtNode *root; // Puntero hacia la raíz del árbol
public:
    SBinaryTree();                         // Constructor del árbol binario de búsqueda
    ~SBinaryTree();                        // Destructor del árbol binario de búsqueda
    void Delete(sbtNode *);                // Operación de eliminación de un nodo del árbol binario de búsqueda
    void Delete();                         // Opción para eliminar un nodo del árbol binario de búsqueda
    void insert(element_t, sbtNode *);     // Operación de inserción de un nodo al árbol binario de búsqueda
    void insert(element_t);                // Opción para insertar un nodo al árbol binario de búsqueda
    sbtNode *search(element_t, sbtNode *); // Operación de búsqueda de un nodo en el árbol binario de búsqueda
    sbtNode *search(element_t);            // Opción para buscar un nodo en el árbol binario de búsqueda
    void preOrder(sbtNode *);              // Opción para recorrer el árbol en pre-orden
    void preOrderPrint();                  // Opción para imprimir por pantalla el recorrido del árbol en pre-orden
    void inOrder(sbtNode *);               // Opción para recorrer el árbol en in-orden
    void inOrderPrint();                   // Opción para imprimir por pantalla el recorrido del árbol en in-orden
    void postOrder(sbtNode *);             // Opción para recorrer el árbol en post-orden
    void postOrderPrint();                 // Opción para imprimir por pantalla el recorrido del árbol en post-orden
};