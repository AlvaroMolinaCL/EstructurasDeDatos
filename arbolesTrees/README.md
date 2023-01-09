# Árboles / Trees

Un árbol es una estructura de datos que se compone de un conjunto de elementos denominados nodos o vértices, y de ramas o aristas dirigidas y acíclicas que conectan dichos nodos. Un árbol no vacío consta de un nodo raíz y, posiblemente, varios otros nodos descendientes.

## Definiciones

* **Raíz**: El nodo superior del árbol, desde el cual descienden todos los demás nodos.
* **Hijo**: Un nodo que desciende directamente de otro.
* **Padre**: La noción inversa de un nodo hijo.
* **Hermanos**: Un conjunto de nodos que tienen al mismo padre.
* **Descendiente**: Un nodo que puede ser accedido por descenso repetido de padre a hijo.
* **Ascendiente**: Un nodo que puede ser accedido por ascenso repetido de hijo a padre.
* **Hoja**: Un nodo que no tiene hijos.
* **Nodo interno**: Un nodo que tiene al menos un hijo, pero que no es raíz ni hoja.
* **Nivel**: La distancia de un nodo hacia la raíz.
* **Rama**: También conocido como subárbol, es el camino que conecta un nodo raíz a cualquier otro nodo.
* **Grado**: La cantidad de subárboles (o hijos) de un nodo.
* **Camino**: Una secuencia de nodos adyacentes entre sí.
* **Altura**: El camino más largo desde un nodo hoja hacia la raíz más uno.
* **Profundidad**: El máximo nivel que tiene un nodo.
* **Bosque**: Un conjunto de árboles n ≥ 0 disjuntos.

## Recorridos

### Recorrido en profundidad

Existen tres formas de recorrer un árbol en profundidad: pre-orden, in-orden y post-orden.

#### Pre-orden

* Se visita la raíz.
* Se recorre en pre-orden el subárbol izquierdo.
* Se recorre en pre-orden el subárbol derecho.

#### In-orden

* Se recorre en in-orden el subárbol izquierdo.
* Se visita la raíz.
* Se recorre en in-orden el subárbol derecho.

#### Post-orden

* Se recorre en post-orden el subárbol izquierdo.
* Se recorre en post-orden el subárbol derecho.
* Se visita la raíz.

### Recorrido en anchura

Se recorren de manera ordenada todos los niveles del árbol, partiendo del nodo raíz.

## Tipos de árboles

### Árbol binario

La estructura de árbol binario es un tipo abstracto de datos donde cada nodo puede tener a lo más dos hijos (subárboles izquierdo y derecho).

#### Operaciones elementales

Los árboles binarios constan de las siguientes operaciones básicas:

* <code>insert</code>: Crear un árbol con un elemento raíz y dos ramas, una izquierda y otra derecha.
* <code>remove</code>: Eliminar un elemento determinado contenido en un nodo del árbol.
* <code>contains</code>: Buscar si un elemento determinado está contenido en el árbol.
* <code>size</code>: Conocer el número total de elementos del árbol.
* <code>isEmpty</code>: Saber si el árbol tiene nodos o no.
* <code>root</code>: Conocer la raíz del árbol.
* <code>left</code>: Obtener la rama o subárbol izquierdo del árbol.
* <code>right</code>: Obtener la rama o subárbol derecho del árbol.
* <code>height</code>: Conocer la altura del árbol.

### Árbol binario de búsqueda

Un árbol binario de búsqueda es aquel donde, a partir de un nodo, todos los elementos contenidos en el subárbol izquierdo son menores y todos los elementos contenidos en el subárbol derecho son mayores a dicho nodo.

#### Operaciones elementales

Los árboles binarios de búsqueda constan de las siguientes operaciones básicas:

* <code>insert</code>: Agregar un elemento al árbol binario de búsqueda. Se parte en el nodo raíz y se sigue el camino de búsqueda hasta concretar la inserción del nuevo nodo.
* <code>search</code>: Buscar un elemento dentro del árbol binario de búsqueda. Se parte en el nodo raíz, comparando la clave buscada con la del nodo raíz, en caso de no coincidir, la búsqueda se realiza en el subárbol izquierdo si la clave es menor a la del nodo raíz, o bien, se busca en el subárbol derecho si el valor de la clave es mayor.
* <code>delete</code>: Eliminar un elemento del árbol binario de búsqueda. Se parte en el nodo raíz buscando la posición del nodo a eliminar, si dicho nodo tiene menos de dos hijos, se reajustan los enlaces con su ascendiente, en caso contrario, se debe subir a la posición que ocupa el dato más próximo de sus subárboles.