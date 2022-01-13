#include <stdio.h>
#include <assert.h>

int min(int x, int y)
{
    return x < y ? x : y;
}

void test_min()
{
    assert(min(0, 1) == 0);
    assert(min(1, 0) == 0);
    assert(min(0, 0) == 0);
    assert(min(1, -1) == -1);
    assert(min(0, -1) == -1);
    assert(min(-1, 1) == -1);
    assert(min(-1, 0) == -1);
    assert(min(-1321, -213) == -1321);
    assert(min(1321, 213) == 213);
}

void main()
{
    test_min();
}
