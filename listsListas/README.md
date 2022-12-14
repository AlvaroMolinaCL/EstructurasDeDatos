# Listas / Lists

Las listas son un tipo abstracto de datos que permite representar una secuencia ordenada de elementos, los cuales pueden tener el mismo valor más de una vez. Las listas, al igual que las [pilas](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/tree/main/stacksPilas) o [filas](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/tree/main/queuesFilas), basan su implementación justamente en la estructura de datos de listas enlazadas (que es la que estamos utilizando aquí). Otra alternativa de implementar listas es mediante arreglos dinámicos.

## Operaciones elementales

Las listas constan de 5 operaciones básicas:

* <code>add</code>: Agregar un elemento al final de la lista, o en una posición específica.
* <code>remove</code>: Eliminar un elemento que está al principio de la lista, o en una posición específica.
* <code>get</code>: Obtener un elemento que está al principio de la lista, o en una posición específica.
* <code>contains</code>: Consultar por un elemento específico.
* <code>size</code>: Conocer el tamaño de la lista.
* <code>empty</code>: Saber si la lista está vacía o no.

## Eficiencia

Las operaciones elementales de la lista tienen un costo que va de $\mathcal{O}(1)$ hasta $\mathcal{O}(n)$. Mientras que las operaciones que trabajan con elementos ubicados al principio o final de la lista tienen una complejidad constante, otras que implican acceder a un elemento específico tienen una complejidad lineal ya que en estos casos el costo de la operación dependerá directamente de la cantidad de datos que estemos manejando.