#include <stdio.h>

int abs(int);

void main()
{
    int in = 0;

    scanf("%d", &in);
    printf("%d", abs(in));
}

int abs(int number)
{
    if (number < 0)
        return -number;

    return number;
}
