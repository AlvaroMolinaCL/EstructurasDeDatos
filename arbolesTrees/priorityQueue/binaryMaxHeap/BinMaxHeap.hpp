/* Archivo de definiciones para el montículo máximo binario (binary max heap) */

#include "iBMaxHeap.hpp"

class BinMaxHeap : public iBMaxHeap // Aquí se hereda el contrato del montículo mínimo binario y se definen sus operaciones
{
private:
    element_t *heapArray;                // Arreglo que almacena los datos de cada nodo
    int capacity;                        // Capacidad del arreglo
    int _size;                           // Variable que almacena el tamaño del montículo mínimo binario
    void swap(element_t *, element_t *); // Función auxiliar que realiza permutación
public:
    BinMaxHeap(int);        // Constructor del montículo máximo binario
    ~BinMaxHeap();          // Destructor del montículo máximo binario
    void insert(element_t); // Opción que inserta un nuevo elemento al montículo máximo binario
    void removeMax();       // Opción que elimina el elemento máximo del montículo binario
    void printHeap();       // Opción que imprime por pantalla el montículo máximo binario
    element_t getMax();     // Opción que retorna la raíz del montículo máximo binario
    int parent(int);        // Opción que retorna el padre a partir de un índice dado
    int size();             // Opción para conocer el tamaño del montículo máximo binario
};