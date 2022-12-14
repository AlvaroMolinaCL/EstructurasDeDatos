# Filas o Colas / Queues

Las filas (también llamadas colas, o *queues* en inglés) son un tipo abstracto de datos, el cual tiene modo de acceso y manejo de sus elementos de tipo FIFO (el primer elemento en entrar es el primero en salir).

## Operaciones elementales

Las filas constan de 5 operaciones básicas:

* <code>enqueue</code>: Agregar un elemento.
* <code>dequeue</code>: Eliminar un elemento.
* <code>front</code>: Consultar el primer elemento agregado.
* <code>back</code>: Consultar el último elemento agregado.
* <code>size</code>: Conocer el tamaño de la fila.
* <code>empty</code>: Saber si la fila está vacía o no.

## Eficiencia

Todas las operaciones elementales de la fila tienen un costo de $\mathcal{O}(1)$, es decir, la complejidad siempre será constante independiente de la cantidad o el tamaño de los datos que se estén manejando.