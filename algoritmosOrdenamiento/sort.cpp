#include <cstdlib>
#include "sort.hpp"

void swap(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void merge(int a[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = a[q + 1 + j];

    // Maintain current index of sub-aays and main aay
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = M[j];
        j++;
        k++;
    }
}
 
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        // m is the point where the aay is divided into two subaays
        int m = l + (r - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        // Merge the sorted subaays
        merge(a, l, m, r);
    }
}

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

void gnomeSort(int a[], int n)
{
	int i = 0;

	while (i < n) {
		if (i == 0 || a[i-1] <= a[i])
        {
            i++;
        }
		else
        {
            int temp = a[i];
            a[i] = a[i-1];
            a[--i] = temp;
        }
	}
}