#include <stdio.h>

void main() {
    int n;

    scanf("%d", &n);

    size_t i = 0;
    while (i < n) {
        if (++i % 2 == 0) continue;

        printf("%d ", i);
    }
}
