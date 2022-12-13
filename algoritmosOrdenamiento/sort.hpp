/* Algoritmos de ordenamiento */

#ifndef SORT_HPP
#define SORT_HPP

void swap(int *x, int *y);
void merge(int *salida, int *aux, int inicio, int mitad, int fin);
void mergeSort(int *salida, int *aux, int inicio, int fin);
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);
void gnomeSort(int a[], int n);

#endif