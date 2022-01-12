#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* int2bin(int n) {
    char* bin = malloc(sizeof(char) * 20);
    int i = 0;

    while (n > 0) {
        bin[i] = (n % 2) + '0';
        n /= 2;
        i++;
    }

    bin[i] = '\0';
    return strrev(bin);
}

void main() {
    int n;
    scanf("%d", &n);

    printf("%s\n", int2bin(n));
}
