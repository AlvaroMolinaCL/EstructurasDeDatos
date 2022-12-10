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
    aux = (qNode *)malloc(sizeof(qNode)); // Se crea el nodo auxiliar
    aux->ele = ele;                       // Se coloca el elemento
    if (_front = nullptr)
    {
        _front = aux;
    }
    else
    {
        _back->next = aux;
    }
    aux->next = nullptr;
    _back = aux;
    _size++; // Se incrementa el tamaño de la fila
};

void ListQueue::dequeue() // Opción para eliminar un elemento de la fila
{
    qNode *aux; // Se crea un puntero (o nodo) auxiliar
    _size--;    // Se decrementa el tamaño de la fila
};

element_t ListQueue::front() // Opción para conocer el primer elemento de la fila
{
    return _front->ele; // Se retorna el frente o primer elemento de la fila
};

element_t ListQueue::back() // Opción para conocer el último elemento de la fila
{
    return _back->ele; // Se retorna el último elemento de la fila
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
    else // En caso contrario a lo indicado en la línea --
    {
        return false; // Se retorna falso
    }
};