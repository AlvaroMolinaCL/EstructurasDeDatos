/* Archivo de implementación para la tabla hash */

#include <cmath>
#include <cstdlib>
#include "HashTable.hpp"

HashTable::HashTable() // Constructor de la tabla hash
{
    for (int i = 0; i < MAX; i++) // Ciclo que recorre cada uno de los índices de la tabla hash de tamaño máximo "m" (def. como MAX)
    {
        _container[i] = nullptr; // Se asigna nulo a cada índice de la tabla hash
    }
    _size = 0; // El tamaño de la tabla hash se inicializa en 0, ya que aquí está recién creada y no tiene elementos
};

HashTable::~HashTable() // Destructor de la tabla hash
{
    // El destructor se deja en blanco, ya que aquí la tabla hash deja de existir
};

int HashTable::hash(key_t k) // Función que direcciona los elementos a los índices de la tabla hash
{
    /* Aritmética modular */
    // int i = k % MAX; // Se divide la clave recibida por el tamaño máximo de la tabla hash y se extrae su módulo
    // return i; // Se retorna el índice de la tabla hash asignado al elemento
    /* Método de la multiplicación */
    // double Rk = R * k; // Se multiplica una constante decimal (0 < R < 1) por la clave recibida
    // double parteDecimal, parteEntera; // Se declaran variables para extraer parte decimal y entera de Rk
    // parteDecimal = modf(Rk, &parteEntera); // Se usa la función modf de la biblioteca cmath para extraer la parte decimal y entera de Rk
    // int i = parteEntera * MAX; // Se multiplica la parte entera de Rk por el tamaño máximo de la tabla hash
    // return i; // Se retorna el índice de la tabla hash asignado al elemento
    /* Método de la mitad del cuadrado */
    // -- Revisar --
    // double i = k * k; // Se eleva la clave al cuadrado
    // if (i < MAX)
    // {
    //     k = k / 100;
    //     k = k % 1000000;
    // }
    // else
    // {
    //     k = k / 100;
    //     k = k % 1000000;
    // }
    // return i; // Se retorna el índice de la tabla hash asignado al elemento
    /* Método del plegamiento */
    // -- Pendiente --
};

void HashTable::insert(element_t e) // Opción para insertar un elemento a la tabla hash
{
    element_t *element;                               // Se crea un puntero para el elemento a insertar
    element = (element_t *)malloc(sizeof(element_t)); // Se reserva memoria para el elemento a insertar
    element->key = e.key;                             // Se recibe la clave ingresada
    element->value = e.value;                         // Se recibe el valor ingresado
    _container[hash(e.key)] = element;                // Se llama a la función hash para asignar su índice y se inserta el elemento a la tabla hash
    _size++;                                          // Se incrementa el tamaño de la tabla hash
};

void HashTable::remove(key_t k) // Opción para eliminar un elemento de la tabla hash
{
    element_t *aux;                // Se crea un puntero auxiliar
    aux = _container[hash(k)];     // Se asigna el elemento a eliminar (localizado mediante la clave) al puntero auxiliar
    _container[hash(k)] = nullptr; // Se asigna nulo al índice de la tabla hash donde estaba el elemento a eliminar
    free(aux);                     // Se libera la memoria ocupada y finalmente se elimina el elemento
    _size--;                       // Se decrementa el tamaño de la tabla hash
};

int HashTable::size() // Opción para conocer el tamaño de la tabla hash
{
    return _size; // Se retorna el tamaño de la tabla hash
};

bool HashTable::empty() // Opción para consultar si la tabla hash está vacía o no
{
    if (_size == 0) // Si el tamaño de la tabla hash es 0 (lo que querría decir que no tiene elementos)
    {
        return true; // Se retorna verdadero
    }
    else // En caso contrario a lo indicado en la línea --
    {
        return false; // Se retorna falso
    }
};

element_t HashTable::find(key_t k) // Opción para buscar un elemento en la tabla hash
{
    return *_container[hash(k)]; // Se retorna el elemento encontrado a partir de la clave entregada
};