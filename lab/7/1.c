#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *shorten(const char *str, size_t n)
{
    char *result = malloc(sizeof(char) * (n + 1));
    strncpy(result, str, n);
    result[n] = 0;

    return result;
}

void main()
{
    char *str = malloc(sizeof(char) * 50);
    gets(str);
    char *result = shorten(str, 2);
    free(str);

    printf("%s", result);

    free(result);
}
