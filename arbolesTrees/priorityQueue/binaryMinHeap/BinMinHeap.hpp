/* Archivo de definiciones para el montículo mínimo binario (binary min heap) */

#include "iBMinHeap.hpp"

class BinMinHeap : public iBMinHeap // Aquí se hereda el contrato del montículo mínimo binario y se definen sus operaciones
{
private:
    element_t *heapArray;                // Arreglo que almacena los datos de cada nodo
    int capacity;                        // Capacidad del arreglo
    int _size;                           // Variable que almacena el tamaño del montículo mínimo binario
    void swap(element_t *, element_t *); // Función auxiliar que realiza permutación
public:
    BinMinHeap(int);               // Constructor del montículo mínimo binario
    ~BinMinHeap();                 // Destructor del montículo mínimo binario
    void insert(element_t);        // Opción que inserta un nuevo elemento al montículo mínimo binario
    void decrease(int, element_t); // Operación que disminuye el valor de un elemento del montículo mínimo binario
    element_t removeMin();         // Opción que elimina el elemento mínimo del montículo binario
    void downHeap(int);            // Operación que permite realizar heap a un subárbol con la raíz en el índice dado
    void remove(int);              // Opción que elimina un elemento específico del montículo mínimo binario
    element_t min();               // Opción que retorna la raíz del montículo mínimo binario
    int parent(int);               // Opción que retorna el padre a partir de un índice dado
    int left(int);                 // Opción que retorna el hijo izquierdo a partir de un índice dado
    int right(int);                // Opción que retorna el hijo derecho a partir de un índice dado
};