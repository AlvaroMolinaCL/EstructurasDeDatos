Listas
===

Uso de Listas:
---
1. A partir del siguiente struct para productos de supermercado:

struct producto
{
    std:: string nombre;
    float precio;
};

Escriba un programa que guarde los productos comprados de una tienda
en una lista y los imprima por pantalla. Use la biblioteca *list*.

Nota: Se recomienda la siguiente función para imprimir listas por
pantalla cuando las cree con la biblioteca *list*:

void print(std::list <std:: string> const &list)
{
    for (auto const &i: list) {
        std::cout << i << std::endl;
    }
}

Implementación:
---
2. Escriba un método de lista que encuentre un nodo y elimine todos los
que le siguen.

3. Escriba un método de lista que encuentre un nodo y copie su elemento
en todos los nodos que le siguen.