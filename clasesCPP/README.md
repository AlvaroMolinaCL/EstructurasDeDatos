# Clases

Las clases consisten en una plantilla que contiene una colección de atríbutos (variables) y métodos (funciones), en esta última es donde se definen las operaciones que permiten manipular los datos de la clase.

En el contexto de estructuras de datos, las clases permiten diseñar las interfaces de las estructuras y tipos abstractos de datos, permitiendo definir lo que se conoce como "contrato", en el cual se definen las operaciones mínimas que éstas deben tener y obligando al programador a implementar la estructura o tipo abstracto con dichas operaciones. En caso de prescindir de alguna operación, que constituiría no respetar este "contrato", el programador no podrá llevar a cabo la implementación.

Ejemplos de lo descrito anteriormente se pueden encontrar en las interfaces de [pilas](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/blob/main/stacksPilas/iStack.hpp), [filas](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/blob/main/queuesFilas/iQueue.hpp), [listas dobles](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/blob/main/listsListas/listaDoble/iList.hpp), [tabla hash](https://github.com/AlvaroMolinaCL/EstructurasDeDatos/blob/main/tablaHash/iHash.hpp), entre otras.

En estas interfaces, se puede observar que en todos los métodos se antepone <code>virtual</code>, lo que hace referencia a funciones virtuales, las cuales dentro de sus características relevantes es que justamente el prototipo de estas funcones debe ser el mismo tanto en la clase base (interfaz) como en la clase derivada (implementación).