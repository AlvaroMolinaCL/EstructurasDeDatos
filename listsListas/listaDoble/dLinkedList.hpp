/* Archivo de definiciones para la lista */

#include "iList.hpp"

struct dlNode // Estructura para los nodos de la lista doblemente enlazada
{
    element_t ele; // Variable que almacena los datos de la lista
    dlNode *next;  // Puntero siguiente que permite recorrer la lista
    dlNode *back;  // Puntero anterior que permite recorrer la lista al revés
};

class DLinkedList : public iList // Aquí se hereda el contrato de la lista y se definen sus operaciones
{
private:
    dlNode *_head; // Cabeza o primer elemento de la lista
    dlNode *_tail; // Último elemento de la lista
    index_t _size; // Variable que almacena el tamaño de la lista
public:
    DLinkedList();                // Constructor de la lista
    ~DLinkedList();               // Destructor de la lista
    void add(element_t);          // Opción para insertar un elemento al final de la lista
    void add(element_t, index_t); // Opción para insertar un elemento en una posición específica de la lista
    void remove();                // Opción para eliminar un elemento del final de la lista
    void remove(index_t);         // Opción para eliminar un elemento específico de la lista
    index_t size();               // Opción para conocer el tamaño de la lista
    bool empty();                 // Opción para consultar si la lista está vacía o no
    element_t get();              // Opción para obtener el primer elemento de la lista
    element_t get(index_t);       // Opción para obtener un elemento específico de la lista
    bool contains(element_t);     // Opción para consultar si un elemento existe o no en la lista
    // void lastToFront();           // Operación implementada desde un ejercicio (no nativa de la lista)
    // void moveToLast(index_t);     // Operación implementada desde un ejercicio (no nativa de la lista)
};