/* Archivo de implementación para la lista */

#include <cstdlib>
#include "dLinkedList.hpp"

DLinkedList::DLinkedList() // Constructor de la lista
{
    _size = 0;       // El tamaño de la lista se inicializa en 0, ya que una lista nueva está vacía
    _head = nullptr; // La cabeza de la lista se inicializa en nulo, ya que una lista nueva no tiene elementos
    _tail = nullptr; // El último de la lista se inicializa en nulo, ya que una lista nueva no tiene elementos
};

DLinkedList::~DLinkedList() // Destructor de la lista
{
    // El destructor se deja en blanco, ya que aquí la lista deja de existir
};

void DLinkedList::add(element_t ele) // Opción para insertar un elemento al final de la lista
{
    dlNode *aux;                            // Se crea un puntero (o nodo) auxiliar
    aux = (dlNode *)malloc(sizeof(dlNode)); // Se reserva memoria para el nodo auxiliar, con esto se crea un nuevo nodo
    aux->ele = ele;                         // El dato guardado en el nodo auxiliar es asignado al nodo de destino
    aux->back = nullptr;                    // El anterior del nodo auxiliar es asignado como nulo
    aux->next = _head;                      // El siguiente del nodo auxiliar es asignado como la nueva cabeza de la lista
    _head->back = aux;                      // El anterior de la cabeza de la lista es asignada como el nodo auxiliar
    _head = aux;                            // La cabeza de la lista es asignado como el nodo auxiliar, con esto ya queda insertado el nuevo nodo
    _size++;                                // Se incrementa el tamaño de la lista
};

void DLinkedList::add(element_t ele, index_t i) // Opción para insertar un elemento en una posición específica de la lista
{
    dlNode *aux;                              // Se crea un puntero (o nodo) auxiliar
    aux = (dlNode *)malloc(sizeof(dlNode));   // Se reserva memoria para el nodo auxiliar, con esto se crea un nuevo nodo
    aux->ele = ele;                           // El dato guardado en el nodo auxiliar es asignado al nodo de destino
    if (_head == nullptr && _tail == nullptr) // Si la lista está vacía
    {
        _head = aux;         // La cabeza de la lista es asignado como el nodo auxiliar
        _tail = aux;         // El último de la lista es asignado como el nodo auxiliar
        aux->back = nullptr; // El anterior del nodo auxiliar es asignado como nulo
        aux->next = nullptr; // El siguiente del nodo auxiliar es asignado como nulo
    }
    else // En caso contrario a lo indicado en la línea 35
    {
        aux->back = _tail;   // El anterior del nodo auxiliar es asignado como el último de la lista
        _tail = aux;         // El último de la lista es asignado como el nodo auxiliar
        _tail->next = aux;   // El siguiente del último de la lista es asignado como el nodo auxiliar
        aux->next = nullptr; // El siguiente del nodo auxiliar es asignado como nulo
        _tail = aux;         // El último de la lista es asignado como el nodo auxiliar, con esto ya queda insertado el nuevo nodo en el índice i de la lista
    }
    _size++; // Se incrementa el tamaño de la lista
};

void DLinkedList::remove() // Opción para eliminar un elemento del final de la lista
{
    dlNode *aux;           // Se crea un puntero (o nodo) auxiliar
    aux = _head;           // El nodo auxiliar es asignado como la cabeza de la lista
    _head->back = nullptr; // El anterior de la cabeza de la lista es asignado como nulo
    free(aux);             // Se libera la memoria ocupada en la posición del nodo auxiliar, y se elimina el nodo
    _size--;               // Se decrementa el tamaño de la lista
};

void DLinkedList::remove(element_t ele) // Opción para eliminar un elemento específico de la lista
{
    dlNode *aux;          // Se crea un puntero (o nodo) auxiliar
    aux = _head;          // El nodo auxiliar es asignado como la cabeza de la lista
    if (_head == nullptr) // Si la lista no tiene cabeza asignada
    {
        while (aux != nullptr) // Mientras el nodo auxiliar no recorra toda la lista
        {
            if (aux->ele == ele) // Si el nodo auxiliar encuentra el elemento a eliminar
            {
                /* Queda pendiente implementar validación */
                dlNode *aux1, *aux2; // Se crean otros dos punteros (o nodos) auxiliares
                aux1 = aux->back;    // El nodo auxiliar 1 es asignado como el anterior del nodo auxiliar principal
                aux2 = aux->next;    // El nodo auxiliar 2 es asignado como el siguiente del nodo auxiliar principal
                aux1->next = aux2;   // El siguiente del nodo auxiliar 1 es asignado como el nodo auxiliar 2
                aux2->back = aux1;   // El anterior del nodo auxiliar 2 es asignado como el nodo auxiliar 2
                free(aux);           // Se libera la memoria ocupada en la posición del nodo auxiliar principal, y se elimina el nodo
                return;              // Se hace un retorno para terminar la función
            }
            aux = aux->next; // El nodo auxiliar principal es asignado como su respectivo siguiente
            _size--;         // Se decrementa el tamaño de la lista
        }
    }
};

index_t DLinkedList::size() // Opción para conocer el tamaño de la lista
{
    return _size; // Se retorna el tamaño de la lista
};

bool DLinkedList::empty() // Opción para consultar si la lista está vacía o no
{
    if (_size == 0) // Si el tamaño de la lista es 0 (lo que querría decir que está vacía)
    {
        return true; // Se retorna verdadero
    }
    else // En caso contrario a lo indicado en la línea 93
    {
        return false; // Se retorna falso
    }
};

element_t DLinkedList::get() // Opción para obtener el primer elemento de la lista
{
    return _head->ele; // Se retorna el primer elemento de la lista
};

element_t DLinkedList::get(index_t i) // Opción para obtener un elemento específico de la lista
{
    dlNode *aux;                       // Se crea un puntero (o nodo) auxiliar
    aux = _head;                       // El nodo auxiliar es asignado como la cabeza de la lista
    if (i < _size && _head != nullptr) // Si el índice de la lista es menor que el tamaño de la lista, y la misma no tiene cabeza asignada
    {
        for (int k = 0; k < 1; k++) // Ciclo
        {
            aux = aux->next; // El nodo auxiliar es asignado como su respectivo siguiente
        }
        return aux->ele; // Se retorna el elemento ya encontrado
    }
    else // En caso contrario a lo indicado en la línea 113
    {
        return false; // Se retorna falso
    }
};

bool DLinkedList::contains(element_t ele) // Opción para consultar si un elemento existe o no en la lista
{
    dlNode *aux;          // Se crea un puntero (o nodo) auxiliar
    aux = _head;          // El nodo auxiliar es asignado como la cabeza de la lista
    if (_head != nullptr) // Si la lista tiene cabeza asignada
    {
        while (aux != nullptr) // Mientras el nodo auxiliar no recorra toda la lista
        {
            if (aux->ele == ele) // Si el nodo auxiliar encuentra el elemento buscado
            {
                return true; // Se retorna verdadero
            }
            aux = aux->next; // El nodo auxiliar es asignado como su respectivo siguiente (si la condición anterior no se cumple)
        }
    }
    else // En caso contrario a lo indicado en la línea 131
    {
        return false; // Se retorna falso
    }
};

void DLinkedList::lastToFront() // Operación implementada desde un ejercicio (no nativa de la lista)
{
    dlNode *aux;
    aux = _tail;
    aux->next = _head;
    _head->back = aux;
    _tail = _tail->back;
    _tail->next = nullptr;
    _head->back = aux;
    aux->back = nullptr;
};

void DLinkedList::moveToLast(index_t num) // Operación implementada desde un ejercicio (no nativa de la lista)
{
    if (num < _size)
    {
        dlNode *aux1;
        aux1 = _head;
        for (int i = 0; i != num; i++)
        {
            aux1 = aux1->next;
        }
        dlNode *aux2;
        aux2 = aux1->next;
        dlNode *aux3;
        aux3 = aux1->back;
        aux1->next = nullptr;
        aux1->back = _tail;
        _tail->next = aux1;
        _tail = _tail->next;
        aux2->back = aux3;
        aux3->next = aux2;
    }
};