/* Archivo de definiciones para la pila (ADT tipo LIFO) */

#include "iStack.hpp"

struct sNode // Estructura para los nodos de la pila
{
    element_t ele; // Variable que almacena los datos de la pila
    sNode *next;   // Puntero siguiente que permite recorrer la pila
};

class ListStack : public iStack // Aquí se hereda el contrato de la pila y se definen sus operaciones
{
private:
    sNode *_top; // Tope (o cabeza) de la pila
    int _size;   // Variable que almacena el tamaño de la pila
public:
    ListStack();          // Constructor de la pila
    ~ListStack();         // Destructor de la pila
    void push(element_t); // Opción para insertar un elemento a la pila
    void pop();           // Opción para eliminar un elemento de la pila
    element_t top();      // Opción para conocer el tope (o cabeza) de la pila
    int size();           // Opción para conocer el tamaño de la pila
    bool empty();         // Opción para consultar si la pila está vacía o no
};