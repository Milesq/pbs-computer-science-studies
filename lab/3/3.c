#include <stdio.h>

void printAscii() {
    const size_t NO_COLS = 16;

    for (size_t current = 33; current < 255; current++) {
        for (size_t i = 0; i < 16; i++) {
            printf("%c ", current++);

            if (current >= 255) break;
        }

        printf("\n");
    }
}

void main() {
    printAscii();
}
