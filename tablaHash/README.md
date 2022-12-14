# Tabla Hash o Tabla de Dispersión / Hash Table

La tabla hash (conocida también como tabla de dispersión) es una estructura de datos que tiene como principal objetivo proporcionar un acceso eficiente a los elementos mediante la asociación de claves (llaves o *keys* en inglés) con valores. De la tabla hash, surge el tipo de dato abstracto conocido como diccionario.

## Operaciones elementales

Las tablas hash constan de 5 operaciones básicas:

* <code>insert</code>: Agregar un elemento a la tabla.
* <code>remove</code>: Eliminar un elemento de la tabla entregando su clave asociada.
* <code>find</code>: Obtener un elemento de la tabla entregando su clave asociada.
* <code>size</code>: Conocer el tamaño de la tabla.
* <code>empty</code>: Saber si la tabla está vacía o no.

## Eficiencia

Una de las principales ventajas de la tabla hash es que las operaciones de búsqueda, inserción y eliminación de elementos cuestan $\mathcal{O}(1)$ (constante independiente del tamaño de la tabla y cantidad de datos), lo que la hace eficiente en términos de complejidad temporal.

Sin embargo, dependiendo del tamaño máximo que tiene la tabla en relación a la cantidad de elementos reales dentro de la misma, pueden llegar a quedar muchos índices de la tabla sin ocupar, haciéndola un tanto ineficiente en términos de complejidad espacial debido a memoria que se estaría desperdiciando en estos casos particulares.