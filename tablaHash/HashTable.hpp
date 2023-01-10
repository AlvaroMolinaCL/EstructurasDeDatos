/* Archivo de definiciones para la tabla hash */

#include "iHash.hpp"

#define MAX 10000    // Aquí se define el tamaño máximo de la tabla hash (se denota también como "m")
#define R 0.6180334 // Constante decimal

class HashTable : public iHash // Aquí se hereda el contrato de la tabla hash y se definen sus operaciones
{
private:
    element_t *_container[MAX]; // Puntero que contiene el elemento con su respectivo índice
    int hash(key_t);            // Función que direcciona los elementos a los índices de la tabla hash
    int _size;                  // Variable que almacena el tamaño de la tabla hash
public:
    HashTable();            // Constructor de la tabla hash
    ~HashTable();           // Destructor de la tabla hash
    void insert(element_t); // Opción para insertar un elemento a la tabla hash
    void remove(key_t);     // Opción para eliminar un elemento de la tabla hash
    int size();             // Opción para conocer el tamaño de la tabla hash
    bool empty();           // Opción para consultar si la tabla hash está vacía o no
    element_t find(key_t);  // Opción para buscar un elemento en la tabla hash
};