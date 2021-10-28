#include <stdio.h>

void makeTower(size_t);

void main() {
    size_t noRows;

    scanf("%zu", &noRows);

    makeTower(noRows);
}

// yeah, it isn't pure function :(
void makeTower(size_t rows) {
    int currentNumber = 1;

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < i; ++j) {
            printf("%d ", currentNumber++);
        }
        printf("\n");
    }
}
