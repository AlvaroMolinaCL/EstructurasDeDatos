/* Archivo de interfaz para la lista */

#ifndef ILIST_HPP
#define ILIST_HPP

typedef int element_t;        // Se define el tipo para los datos que contendrá la lista (se usa "int" como ejemplo)
typedef unsigned int index_t; // Se define el tipo para los índices de la lista

class iList // Aquí se define el contrato de la lista (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void add(element_t) = 0;          // Opción para insertar un elemento al final de la lista (_tail)
    virtual void add(element_t, index_t) = 0; // Opción para insertar un elemento en una posición específica de la lista
    virtual void remove() = 0;                // Opción para eliminar un elemento del principio de la lista (_head)
    virtual void remove(index_t) = 0;         // Opción para eliminar un elemento específico de la lista
    virtual index_t size() = 0;               // Opción para conocer el tamaño de la lista
    virtual bool empty() = 0;                 // Opción para consultar si la lista está vacía o no
    virtual element_t get() = 0;              // Opción para obtener el primer elemento de la lista
    virtual element_t get(index_t) = 0;       // Opción para obtener un elemento específico de la lista
    virtual bool contains(element_t) = 0;     // Opción para consultar si un elemento existe o no en la lista
    // virtual void lastToFront() = 0;           // Operación implementada desde un ejercicio (no nativa de la lista)
    // virtual void moveToLast(index_t) = 0;     // Operación implementada desde un ejercicio (no nativa de la lista)
};

#endif