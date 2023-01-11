/* Archivo de interfaz para el montículo máximo binario (binary max heap) */

#ifndef IBMAXHEAP_HPP
#define IBMAXHEAP_HPP

typedef int element_t; // Se define el tipo para los datos que contendrán los nodos del árbol (se usa "int" como ejemplo)

class iBMaxHeap // Aquí se define el contrato del árbol binario de búsqueda (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void insert(element_t) = 0; // Opción que inserta un nuevo elemento al montículo máximo binario
    virtual void removeMax() = 0;       // Opción que elimina el elemento máximo del montículo binario
    virtual void printHeap() = 0;       // Opción que imprime por pantalla el montículo máximo binario
    virtual element_t getMax() = 0;     // Opción que retorna la raíz del montículo máximo binario
    virtual int parent(int) = 0;        // Opción que retorna el padre a partir de un índice dado
    virtual int size() = 0;             // Opción para conocer el tamaño del montículo máximo binario
};

#endif