/* Archivo de implementación para la pila (ADT tipo LIFO) */

#include <iostream>
#include <cstdlib>
#include "ListStack.hpp"

ListStack::ListStack() // Constructor de la pila
{
    _size = 0;      // El tamaño de la pila se inicializa en 0, ya que una pila nueva está vacía
    _top = nullptr; // El tope de la pila se inicializa en nulo, ya que una pila nueva no tiene elementos
};

ListStack::~ListStack() // Destructor de la pila
{
    // El destructor se deja en blanco, ya que aquí la pila deja de existir
};

void ListStack::push(element_t ele) // Opción para insertar un elemento a la pila
{
    sNode *aux;                           // Se crea un puntero (o nodo) auxiliar
    aux = (sNode *)malloc(sizeof(sNode)); // Se reserva memoria para el nodo auxiliar, con esto se crea un nuevo nodo
    aux->ele = ele;                       // El dato guardado en el nodo auxiliar es asignado al nodo de destino
    aux->next = _top;                     // El siguiente del nodo auxiliar es asignado como el nuevo tope de la pila
    _top = aux;                           // Se iguala el tope de la pila de destino con el nodo auxiliar, con esto ya queda insertado el nuevo nodo
    _size++;                              // Se incrementa el tamaño de la pila
};

void ListStack::pop() // Opción para eliminar un elemento de la pila
{
    sNode *aux;        // Se crea un puntero (o nodo) auxiliar
    aux = _top;        // El puntero (o nodo) auxiliar es apuntado al tope de la pila original
    _top = _top->next; // El tope de la pila original es apuntado a su siguiente nodo, para así no perder la pila al eliminar el nodo
    free(aux);         // Con el puntero auxiliar posicionado en el elemento a eliminar, se libera la memoria ocupada y se elimina el nodo
    _size--;           // Se decrementa el tamaño de la pila
};

element_t ListStack::top() // Opción para conocer el tope (o cabeza) de la pila
{
    return _top->ele; // Se retorna el tope (o cabeza) de la pila
};

int ListStack::size() // Opción para conocer el tamaño de la pila
{
    return _size; // Se retorna el tamaño de la pila
};

/*
int ListStack::size() // Forma alternativa de obtener el tamaño de la pila, prescindiendo del atributo global _size
{
    sNode *aux;         // Se crea un puntero (o nodo) auxiliar
    aux = _top;         // El nodo auxiliar apunta al tope de la pila
    int _size = 0;      // Se inicializa _size en 0
    if (aux == nullptr) // Si la pila está vacía
    {
        return _size; // Se retorna el tamaño de la pila (que en este caso será igual a 0)
    }
    else
    {
        while (aux != nullptr) // Mientras no se termine de recorrer la pila
        {
            _size++;         // Si existe al menos un elemento, se incrementa el tamaño
            aux = aux->next; // Se mueve el puntero auxiliar al siguiente nodo, y se repite el proceso
        }
        return _size; // Se retorna el tamaño de la pila
    }
};
*/

/*
void ListStack::print() // Opción para imprimir por pantalla los datos que contiene la pila
{
    while (_top != nullptr) // Mientras el tope de la pila no sea nulo
    {
        std::cout << _top->ele << "\t"; // Se imprime el elemento del tope de la pila
        _top = _top->next;              // El tope de la pila es asignado como su respectivo siguiente, y se repite el paso anterior
    }
};
*/

bool ListStack::empty() // Opción para consultar si la pila está vacía o no
{
    if (_top == nullptr) // Si la pila no tiene tope (lo que querría decir que no tiene elementos)
    {
        return true; // Se retorna verdadero
    }
    else // En caso contrario a lo indicado en la línea 49
    {
        return false; // Se retorna falso
    }
};