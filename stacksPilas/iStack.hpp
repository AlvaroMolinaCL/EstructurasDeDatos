/* Archivo de interfaz para la pila (ADT tipo LIFO) */

#ifndef ISTACK_HPP
#define ISTACK_HPP

typedef int element_t; // Se define el tipo para los datos que contendrá la pila (se usa "int" como ejemplo)

class iStack // Aquí se define el contrato de la pila (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void push(element_t) = 0; // Opción para insertar un elemento a la pila
    virtual void pop() = 0;           // Opción para eliminar un elemento de la pila
    virtual element_t top() = 0;      // Opción para conocer el tope (o cabeza) de la pila
    virtual int size() = 0;           // Opción para conocer el tamaño de la pila
    virtual bool empty() = 0;         // Opción para consultar si la pila está vacía o no
};

#endif