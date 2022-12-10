/* Archivo de definiciones para la pila (ADT tipo LIFO) */

#include "iQueue.hpp"

struct qNode // Estructura para los nodos de la fila
{
    element_t ele; // Variable que almacena los datos de la fila
    qNode *next;   // Puntero siguiente que permite recorrer la fila
};

class ListQueue : public iQueue // Aquí se hereda el contrato de la fila y se definen sus operaciones
{
private:
    qNode *_front; // Frente o primer elemento de la fila
    qNode *_back;  // Último elemento de la fila
    int _size;     // Variable que almacena el tamaño de la fila
public:
    ListQueue();             // Constructor de la fila
    ~ListQueue();            // Destructor de la fila
    void enqueue(element_t); // Opción para insertar un elemento a la fila
    void dequeue();          // Opción para eliminar un elemento de la fila
    element_t front();       // Opción para conocer el primer elemento de la fila
    element_t back();        // Opción para conocer el último elemento de la fila
    int size();              // Opción para conocer el tamaño de la fila
    bool empty();            // Opción para consultar si la fila está vacía o no
};