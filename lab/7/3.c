#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *, const char *);

void main()
{
    char* result = concat("Hello ", "World");
    printf("%s\n", result);
    free(result);

    char result2[12] = "Hello ";
    strcat(result2, "World");
    printf("%s\n", result2);
}

char *concat(const char *first, const char *second)
{
    size_t firstStrLen = strlen(first);
    size_t finalStrLen = firstStrLen + strlen(second);

    char *result = malloc(sizeof(char) * finalStrLen + 1);

    strcpy(result, first);
    strcpy(result + firstStrLen, second);

    result[finalStrLen] = 0;

    return result;
}
