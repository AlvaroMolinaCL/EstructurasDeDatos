/* Algoritmos de ordenamiento */

#include <cstdlib>
#include "sort.hpp"

/* Algoritmo Swap (o de permutación, usado por Selection Sort y Bubble Sort) */
void swap(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

/* Algoritmo Merge (usado por Merge Sort) */
void merge(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = a[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = a[q + 1 + j];
    }

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = M[j];
        j++;
        k++;
    }
}

/* Algoritmo Selection Sort */
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; // m es el punto donde el arreglo se divide en dos subarreglos

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r); // Se combinan los subarreglos ya ordenados
    }
}

/* Algoritmo Selection Sort */
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            swap(&a[i], &a[min]);
        }
    }
}

/* Algoritmo Insertion Sort */
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = v;
    }
}

/* Algoritmo Bubble Sort */
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(&a[j + 1], &a[j]);
            }
        }
    }
}

/* Algoritmo Gnome Sort */
void gnomeSort(int a[], int n)
{
    int i = 0;

    while (i < n)
    {
        if (i == 0 || a[i - 1] <= a[i])
        {
            i++;
        }
        else
        {
            int temp = a[i];
            a[i] = a[i - 1];
            a[--i] = temp;
        }
    }
}