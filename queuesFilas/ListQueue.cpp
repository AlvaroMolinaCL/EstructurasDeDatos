/* Archivo de implementación para la fila (ADT tipo FIFO) */

#include <cstdlib>
#include "ListQueue.hpp"

ListQueue::ListQueue() // Constructor de la fila
{
    _size = 0;        // El tamaño de la pila se inicializa en 0, ya que una pila nueva está vacía
    _front = nullptr; // El frente de la fila se inicializa en nulo, ya que una fila nueva no tiene elementos
    _back = nullptr;  // El último de la fila se inicializa en nulo, ya que una fila nueva no tiene elementos
};

ListQueue::~ListQueue() // Destructor de la fila
{
    // El destructor se deja en blanco, ya que aquí la fila deja de existir
};

void ListQueue::enqueue(element_t ele) // Opción para insertar un elemento a la fila
{
    qNode *aux;                           // Se crea un puntero (o nodo) auxiliar
    aux = (qNode *)malloc(sizeof(qNode)); // Se reserva memoria para el nodo auxiliar, con esto se crea un nuevo nodo
    aux->ele = ele;                       // El dato guardado en el nodo auxiliar es asignado al nodo de destino
    aux->next = nullptr;                  // El siguiente del nodo auxiliar es asignado como nulo

    if (_front == nullptr) // Si la fila no tiene frente asignado
    {
        _front = aux; // El frente de la fila es asignado como el nodo auxiliar
        _back = aux;  // El último de la fila es asignado como el nodo auxiliar
    }
    else
    {
        _back->next = aux; // El siguiente del último de la fila es asignado como el nodo auxiliar
        _back = aux;       // El último de la fila es asignado como el nodo auxiliar
    }

    _size++; // Se incrementa el tamaño de la fila
};

void ListQueue::dequeue() // Opción para eliminar un elemento de la fila
{
    qNode *aux; // Se crea un puntero (o nodo) auxiliar

    if (_front != nullptr && _back != nullptr) // Si la fila no está vacía (tiene al menos un elemento)
    {
        if (_front == _back) // Si la fila tiene un único elemento
        {
            aux = _front;             // El nodo auxiliar es asignado como el frente de la fila
            free(aux);                // Con el puntero auxiliar posicionado en el elemento a eliminar, se libera la memoria ocupada y se elimina el nodo
            _front = _back = nullptr; // Como la fila ya no tiene más elementos, se les asigna nulo al frente y último del mismo
        }
        else // En caso contrario a lo indicado en la línea 44
        {
            aux = _front;          // El nodo auxiliar es asignado como el frente de la fila
            _front = _front->next; // El frente de la fila es asignado como su respectivo siguiente
            free(aux);             // Con el puntero auxiliar posicionado en el elemento a eliminar, se libera la memoria ocupada y se elimina el nodo
        }
        _size--; // Se decrementa el tamaño de la fila
    }
};

element_t ListQueue::front() // Opción para conocer el primer elemento de la fila
{
    if (_front != nullptr) // Si la fila no está vacía
    {
        return _front->ele; // Se retorna el frente o primer elemento de la fila
    }
};

element_t ListQueue::back() // Opción para conocer el último elemento de la fila
{
    if (_back != nullptr) // Si la fila no está vacía
    {
        return _back->ele; // Se retorna el último elemento de la fila
    }
};

int ListQueue::size() // Opción para conocer el tamaño de la fila
{
    return _size; // Se retorna el tamaño de la fila
};

bool ListQueue::empty() // Opción para consultar si la fila está vacía o no
{
    if (_front == nullptr && _back == nullptr) // Si la fila no tiene frente ni último elemento (lo que querría decir que está vacía)
    {
        return true; // Se retorna verdadero
    }
    else // En caso contrario a lo indicado en la línea 83
    {
        return false; // Se retorna falso
    }
};