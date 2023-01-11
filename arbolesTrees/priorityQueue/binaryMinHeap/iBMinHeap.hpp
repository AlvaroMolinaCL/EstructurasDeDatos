/* Archivo de interfaz para el montículo mínimo binario (binary min heap) */

#ifndef IBMINHEAP_HPP
#define IBMINHEAP_HPP

typedef int element_t; // Se define el tipo para los datos que contendrán los nodos del árbol (se usa "int" como ejemplo)

class iBMinHeap // Aquí se define el contrato del árbol binario de búsqueda (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void insert(element_t) = 0;        // Opción que inserta un nuevo elemento al montículo mínimo binario
    virtual void decrease(int, element_t) = 0; // Operación que disminuye el valor de un elemento del montículo mínimo binario
    virtual element_t removeMin() = 0;         // Opción que elimina el elemento mínimo del montículo binario
    virtual void downHeap(int) = 0;            // Operación que permite realizar heap a un subárbol con la raíz en el índice dado
    virtual void remove(int) = 0;              // Opción que elimina un elemento específico del montículo mínimo binario
    virtual element_t getMin() = 0;               // Opción que retorna la raíz del montículo mínimo binario
    virtual int parent(int) = 0;               // Opción que retorna el padre a partir de un índice dado
    virtual int left(int) = 0;                 // Opción que retorna el hijo izquierdo a partir de un índice dado
    virtual int right(int) = 0;                // Opción que retorna el hijo derecho a partir de un índice dado
    virtual int size() = 0;
};

#endif