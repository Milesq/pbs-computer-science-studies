#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));

    int result = 0;
    while (result != 6) {
        result = (rand() % 6) + 1;
    }

    printf("Wylosowalem liczbe %d!!!", result);
}
