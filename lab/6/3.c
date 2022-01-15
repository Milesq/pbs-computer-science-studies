#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *input = malloc(sizeof(int[2]));

    scanf("%d %d", input, input + 1);

    printf("%d", *input + *(input + 1));

    free(input);
}
