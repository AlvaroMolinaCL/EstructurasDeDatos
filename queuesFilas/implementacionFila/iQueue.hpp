/* Archivo de interfaz para la fila (ADT tipo FIFO) */

#ifndef IQUEUE_HPP
#define IQUEUE_HPP

typedef int element_t; // Se define el tipo para los datos que contendrá la fila (se usa "int" como ejemplo)

class iQueue // Aquí se define el contrato de la fila (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void enqueue(element_t) = 0; // Opción para insertar un elemento a la fila
    virtual void dequeue() = 0;          // Opción para eliminar un elemento de la fila
    virtual element_t front() = 0;       // Opción para conocer el primer elemento de la fila
    virtual element_t back() = 0;        // Opción para conocer el último elemento de la fila
    virtual int size() = 0;              // Opción para conocer el tamaño de la fila
    virtual bool empty() = 0;            // Opción para consultar si la fila está vacía o no
};

#endif