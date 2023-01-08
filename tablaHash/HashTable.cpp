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
    int i = k % MAX; // Se divide la clave recibida por el tamaño máximo de la tabla hash y se extrae su módulo
    return i;        // Se retorna el índice de la tabla hash asignado al elemento

    /* Método de la multiplicación */
    // double Rk = R * k - floor(R * k); // Se multiplica una constante decimal (0 < R < 1) por la clave recibida
    // int i = floor(MAX * Rk);          // Se multiplica el resultado obtenido anteriormente por el tamaño máximo de la tabla, y se convierte a entero
    // return i;                         // Se retorna el índice de la tabla hash asignado al elemento

    /* Método de la mitad del cuadrado */
    // long int k2 = k * k;                                                // Se eleva la clave al cuadrado
    // int k2Len = 0;                                                      // Se declara variable para almacenar la longitud de k2
    // int pos = 0, count = 0, digit = 0, number = 0, fraction = 0, j = 0; // Se declaran variables auxiliares para el método
    //
    // while (k2 != 0)
    // {
    //     k2 /= 10;
    //     ++count;
    // }
    //
    // k2Len = count;
    // pos = k2Len / 2;
    //
    // if (((pos + 1) + _size) - 1 <= k2Len)
    // {
    //     for (j = 0; j < _size; j++)
    //     {
    //         fraction = k2 / (int)pow(10, (k2Len - pos));
    //         digit = fraction % 10;
    //         pos++;
    //         number *= 10;
    //         number += digit;
    //     }
    // }
    //
    // i = number;
    //
    // return i; // Se retorna el índice de la tabla hash asignado al elemento

    /* Método del plegamiento */
    // -- Revisar --
    // int kLen = 0, count = 0, j = 0, l = 0, n = 0;
    //
    // while (k != 0)
    // {
    //     k /= 10;
    //     ++count;
    // }
    //
    // kLen = count;
    // int kArray[kLen];
    //
    // for (j = 0; k != 0; j++)
    // {
    //     kArray[j] = k % 10;
    //     k /= 10;
    // }
    //
    // for (n = 0, l = 0; l < kLen; l++)
    // {
    //     n += kArray[l];
    // }
    //
    // n += kArray[l];
    // i = n;
    //
    // return n;

    /* Resolución de colisiones */
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
    else // En caso contrario a lo indicado en la línea 76
    {
        return false; // Se retorna falso
    }
};

element_t HashTable::find(key_t k) // Opción para buscar un elemento en la tabla hash
{
    return *_container[hash(k)]; // Se retorna el elemento encontrado a partir de la clave entregada
};