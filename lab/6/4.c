#include <stdio.h>
#include <stdlib.h>

void scanN(const int arr[], size_t size);

void bubbleSort(int arr[], size_t size);

void main()
{
    const int size = 10;

    int *arr = malloc(sizeof(int) * size);
    scanN(arr, size);
    bubbleSort(arr, size);

    for (size_t i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
}


void scanN(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        scanf("%d", arr + i);
    }
}

void bubbleSort(int arr[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
