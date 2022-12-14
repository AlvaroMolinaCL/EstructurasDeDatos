# Funciones

Una función es un subprograma (o subrutina) que realiza una tarea u operación específica dentro de un programa principal. Corresponde a un segmento de código que está separado de la función principal (<code>main</code> en el caso de C++) y que puede ser llamado desde esta misma función principal o por otras funciones dentro del programa.

Las funciones contribuyen a que nuestro código sea más modularizable, limpio y fácil de corregir, puesto que en vez de tener muchas operaciones concentradas dentro de una sola función principal, podemos separar dichas operaciones en varias otras funciones (que pueden estar en el mismo programa o en bibliotecas) y posteriormente invocarlas en la función principal cuando sean requeridas.

## Funciones por valor y referencia

Las funciones pueden tener un tipo de retorno (<code>int</code>, <code>float</code>, entre otros) o no retornar ningún valor (<code>void</code>). Por otro lado, el paso de parámetros a las funciones puede ser por valor o por referencia:

* **Funciones por valor**: El paso de los parámetros que ingresan a la función se realiza mediante la copia de los datos contenidos en las variables que son ingresadas como entrada en el argumento de la misma.
* **Funciones por referencia**: El paso de los parámetros que ingresan a la función se realiza mediante la dirección de memoria de los datos contenidos en las variables que son ingresadas como entrada en el argumento de la misma.

## Funciones iterativas y recursivas

Otra forma de clasificar las funciones es de acuerdo a la forma que realizan sus operaciones, que pueden ser de forma iterativa o recursiva:

* **Funciones iterativas**: Usualmente es el tipo de funciones con las que más trabajamos, y en ellas se hace necesario usar uno o varios ciclos o bucles iterativos para poder satisfacer su objetivo. Dependiendo del tamaño de las operaciones necesarias, este tipo de funciones pueden abarcar muchas líneas de código.
* **Funciones recursivas**: Son aquellas funciones que tienen la capacidad de llamarse a sí mismas, al menos una vez. Se caracterizan por no usar iteraciones y de siempre abarcar una reducida cantidad de líneas de código. La desventaja es que suelen ser menos eficientes en términos de complejidad temporal y espacial, por ello, se debe recurrir a ellas solamente cuando sea muy complicado implementar una solución iterativa.

### Caso base y general de funciones recursivas

Una función recursiva siempre debe tener un caso base y un caso general:

* **Case base**: El caso base define la condición de término para la recursividad, por ello, es indispensable que una función recursiva tenga un caso base.

* **Caso general**: El caso general es el patrón que tendrá nuestra función recursiva. Si no podemos identificar un patrón común en cada una de las operaciones de la función, entonces no podrá aplicarse recursividad para dicha función.

### Funciones recursivas directas e indirectas

Otra clasificación de una función recursiva es si es directa o indirecta:

* **Directa**: La función recursiva solo se llama a sí misma.
* **Indirecta**: La función recursiva usa otra función del programa para llevar a cabo la recursividad.