/* Archivo de implementación para el montículo máximo binario (binary max heap) */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "BinMaxHeap.hpp"

void BinMaxHeap::swap(element_t *a, element_t *b) // Función auxiliar que realiza permutación
{
    element_t aux = *a;
    *a = *b;
    *b = aux;
}

BinMaxHeap::BinMaxHeap(int c) // Constructor del montículo máximo binario
{
    _size = 0;                                             // El tamaño del montículo se inicializa en 0
    capacity = c;                                          // El constructor recibe como entrada la capacidad del montículo
    heapArray = (element_t *)calloc(c, sizeof(element_t)); // Se reserva memoria dinámica para el arreglo que almacenará los datos del montículo
};

BinMaxHeap::~BinMaxHeap() // Destructor del montículo máximo binario
{
    free(heapArray);
};

void BinMaxHeap::insert(element_t ele) // Opción que inserta un nuevo elemento al montículo máximo binario
{
    if (_size != capacity) // Si el montículo no está al máximo de su capacidad
    {
        _size++; // Se incrementa el tamaño del montículo
        int i = _size - 1;
        heapArray[i] = ele;

        while (i != 0 && heapArray[parent(i)] > heapArray[i])
        {
            swap(&heapArray[i], &heapArray[parent(i)]);
            i = parent(i);
        }

        // while (heapArray[i] > heapArray[i / 2] && i / 2 != 0)
        // {
        //     element_t aux = heapArray[i];
        //     heapArray[i] = heapArray[i / 2];
        //     heapArray[i / 2] = aux;
        //     i = i / 2;
        // }
    }
};

void BinMaxHeap::removeMax() // Opción que elimina el elemento máximo del montículo binario
{
    if (_size >= 1)
    {
        heapArray[0] = heapArray[_size - 1];
        _size--; // Se decrementa el tamaño del montículo
        int i = 1;
        int max;

        while (2 * i < _size && (heapArray[i] < heapArray[2 * i] || heapArray[i] < heapArray[2 * i + 1]))
        {
            if (heapArray[2 * i] > heapArray[2 * i + 1])
            {
                max = 2 * i;
            }
            else
            {
                max = 2 * i + 1;
            }

            element_t aux = heapArray[i];
            heapArray[i] = heapArray[max];
            heapArray[max] = aux;
            i = max;
        }
    }
};

void BinMaxHeap::printHeap() // Opción que imprime por pantalla el montículo máximo binario
{
    double level = 0.0;
    std::cout << "-- Monticulo Maximo Binario --" << std::endl;

    for (int i = 0; i < _size; i++)
    {
        if (log2(i) >= level)
        {
            level++;
            std::cout << std::endl;
        }
        std::cout << heapArray[i] << " ";
    }
}

element_t BinMaxHeap::getMax() // Opción que retorna la raíz del montículo máximo binario
{
    return heapArray[0]; // Se retorna la raíz del montículo máximo binario (que siempre está en la posición 0 del arreglo)
};

int BinMaxHeap::parent(int i) // Opción que retorna el padre a partir de un índice dado
{
    return (i - 1) / 2; // Se retorna el padre a partir del índice dado
};

int BinMaxHeap::size() // Opción para conocer el tamaño del montículo máximo binario
{
    return _size; // Se retorna el tamaño del montículo máximo binario
};