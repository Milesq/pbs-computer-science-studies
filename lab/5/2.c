#include <stdio.h>

typedef long long int lli;

lli factorial_recursive(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial_recursive(n - 1);
}

lli factorial_loop(int n)
{
    lli result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

void main()
{
    for (size_t i = 1; i <= 7; i++)
    {
        printf("%d! = %d\n", i, factorial_recursive(i));
        printf("%d! = %d\n\n", i, factorial_loop(i));
    }
}
