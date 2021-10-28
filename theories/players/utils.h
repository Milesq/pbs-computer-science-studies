#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>

void scanN(const int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        scanf("%d", arr + i);
    }
}

#endif /* UTILS_H */
