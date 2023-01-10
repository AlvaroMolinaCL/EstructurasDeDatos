/* Archivo de implementación para el montículo mínimo binario (binary min heap) */

#include <iostream>
#include <cstdlib>
#include "BinMinHeap.hpp"

void BinMinHeap::swap(element_t *a, element_t *b) // Función auxiliar que realiza permutación
{
    element_t aux = *a;
    *a = *b;
    *b = aux;
}

BinMinHeap::BinMinHeap(int c) // Constructor del montículo mínimo binario
{
    _size = 0; // El tamaño del montículo se inicializa en 0
    capacity = c; // El constructor recibe como entrada la capacidad del montículo
    heapArray = (element_t *)calloc(c, sizeof(element_t)); // Se reserva memoria dinámica para el arreglo que almacenará los datos del montículo
};

BinMinHeap::~BinMinHeap() // Destructor del montículo mínimo binario
{
    // El destructor se deja vacío
};

void BinMinHeap::insert(element_t ele) // Opción que inserta un nuevo elemento al montículo mínimo binario
{
    if (_size != capacity)
    {
        _size++; // Se incrementa el tamaño del montículo
        int i = _size - 1;
        heapArray[i] = ele;

        while (i != 0 && heapArray[parent(i)] > heapArray[i])
        {
            swap(&heapArray[i], &heapArray[parent(i)]);
            i = parent(i);
        }
    }
};

void BinMinHeap::decrease(int i, element_t ele) // Operación que disminuye el valor de un elemento del montículo mínimo binario
{
    heapArray[i] = ele;

    while (i != 0 && heapArray[parent(i)] > heapArray[i])
    {
        swap(&heapArray[i], &heapArray[parent(i)]);
        i = parent(i);
    }
};

element_t BinMinHeap::removeMin() // Opción que elimina el elemento mínimo del montículo binario
{
    if (_size == 1) // Si el tamaño del montículo es igual a 1
    {
        _size--; // Se decrementa el tamaño del montículo
        return heapArray[0]; // Se retorna la nueva raíz del montículo
    }
    else if (_size > 1) // Si el tamaño del montículo es mayor que 1
    {
        element_t root = heapArray[0];
        heapArray[0] = heapArray[_size - 1];
        _size--; // Se decrementa el tamaño del montículo
        downHeap(0); // Se realiza operación para garantizar que se siga cumpliendo la condición del montículo
        return root; // Se retorna la nueva raíz del montículo
    }
};

void BinMinHeap::downHeap(int i) // Operación que permite realizar heap a un subárbol con la raíz en el índice dado
{
    element_t l = left(i);
    element_t r = right(i);
    int min = i;

    if (l < _size && heapArray[l] < heapArray[i])
    {
        min = l;
    }

    if (r < _size && heapArray[r] < heapArray[min])
    {
        min = r;
    }

    if (min != i)
    {
        swap(&heapArray[i], &heapArray[min]);
        downHeap(min); // Se realiza operación para garantizar que se siga cumpliendo la condición del montículo
    }
};

void BinMinHeap::remove(int i) // Opción que elimina un elemento específico del montículo mínimo binario
{
    decrease(i, INT32_MIN);
    removeMin();
};

element_t BinMinHeap::min() // Opción que retorna la raíz del montículo mínimo binario
{
    return heapArray[0]; // Se retorna la raíz del montículo mínimo binario (que siempre está en la posición 0 del arreglo)
};

int BinMinHeap::parent(int i) // Opción que retorna el padre a partir de un índice dado
{
    return (i - 1) / 2; // Se retorna el padre a partir del índice dado
};

int BinMinHeap::left(int i) // Opción que retorna el hijo izquierdo a partir de un índice dado
{
    return (2 * i + 1); // Se retorna el hijo izquierdo a partir del índice dado
};

int BinMinHeap::right(int i) // Opción que retorna el hijo derecho a partir de un índice dado
{
    return (2 * i + 2); // Se retorna el hijo derecho a partir del índice dado
};