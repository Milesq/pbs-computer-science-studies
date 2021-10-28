#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void scanN(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        scanf("%d", arr + i);
    }
}

bool isPositive(int el) {
    return el >= 0;
}

bool isNegative(int el) {
    return el < 0;
}

int matchingElements(int*, size_t, bool (*cb)(int));

void main() {
    int in[4];
    scanN(in, 4);

    int noPositives = matchingElements(in, 4, isPositive);
    int noNegatives = matchingElements(in, 4, isNegative);

    printf("Wiecej jest liczb %s", noPositives > noNegatives ? "dodatnich" : "ujemnych");
}

int matchingElements(int* arr, size_t size, bool (*cb)(int)) {
    int count = 0;

    for (size_t i = 0; i < size; ++i) {
        if (cb(*(arr + i))) {
            ++count;
        }
    }

    return count;
}
