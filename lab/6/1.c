#include <stdio.h>
#define SIZE 5

void scanN(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        scanf("%d", arr + i);
    }
}

void main() {
    int arr[SIZE];
    scanN(arr, SIZE);

    for (int i = SIZE - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
}
