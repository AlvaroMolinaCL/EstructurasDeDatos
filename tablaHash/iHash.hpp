/* Archivo de interfaz para la tabla hash */

#ifndef IHASH_HPP
#define IHASH_HPP

typedef int key_t;   // Se define el tipo para la clave
typedef int value_t; // Se define el tipo para el valor

struct element_t // Estructura para los datos que contendrá la tabla hash
{
    key_t key;     // Variable que almacenará la clave del elemento
    value_t value; // Variable que almacenará el valor del elemento
};

class iHash // Aquí se define el contrato de la tabla hash (las operaciones mínimas que debe poder realizar)
{
public:
    virtual void insert(element_t) = 0; // Opción para insertar un elemento a la tabla hash
    virtual void remove(key_t) = 0;     // Opción para eliminar un elemento de la tabla hash
    virtual int size() = 0;             // Opción para conocer el tamaño de la tabla hash
    virtual bool empty() = 0;           // Opción para consultar si la tabla hash está vacía o no
    virtual element_t find(key_t) = 0;  // Opción para buscar un elemento en la tabla hash
};

#endif