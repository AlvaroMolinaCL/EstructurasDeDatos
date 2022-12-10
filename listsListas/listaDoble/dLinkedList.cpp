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
    dlNode *aux;
    aux = (dlNode *)malloc(sizeof(dlNode));
    aux->ele = ele;
    aux->back = nullptr;
    aux->next = _head;
    _head->back = aux;
    _head = aux;
    _size++;
};

void DLinkedList::add(element_t ele, index_t i) // Opción para insertar un elemento en una posición específica de la lista
{
    dlNode *aux;
    aux = (dlNode *)malloc(sizeof(dlNode));
    aux->ele = ele;
    if (_head == nullptr && _tail == nullptr)
    {
        _head = aux;
        _tail = aux;
        aux->back = nullptr;
        aux->next = nullptr;
    }
    else
    {
        aux->back = _tail;
        _tail = aux;
        _tail->next = aux;
        aux->next = nullptr;
        _tail = aux;
    }
    _size++;
};

void DLinkedList::remove() // Opción para eliminar un elemento del final de la lista
{
    dlNode *aux;
    aux = _head;
    _head->back = nullptr;
    free(aux);
    _size--;
};

void DLinkedList::remove(element_t ele) // Opción para eliminar un elemento específico de la lista
{
    dlNode *aux;
    aux = _head;
    if (_head == nullptr)
    {
        while (aux != nullptr)
        {
            if (aux->ele == ele)
            {
                dlNode *aux1, *aux2; // Se debe validar
                aux1 = aux->back;
                aux2 = aux->next;
                aux1->next = aux2;
                aux2->back = aux1;
                free(aux);
                return; // Para terminar la función
            }
            aux = aux->next;
            _size--;
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
    dlNode *aux;
    aux = _head;
    if (i < _size && _head != nullptr)
    {
        for (int k = 0; k < 1; k++)
        {
            aux = aux->next;
        }
        return aux->ele;
    }
    else
    {
        return false;
    }
};

bool DLinkedList::contains(element_t ele) // Opción para consultar si un elemento existe o no en la lista
{
    dlNode *aux;
    aux = _head;
    if (_head != nullptr)
    {
        while (aux != nullptr)
        {
            if (aux->ele == ele)
            {
                return true;
            }
            aux = aux->next;
        }
    }
    else
    {
        return false;
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