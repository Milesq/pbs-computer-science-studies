#include <stdio.h>
#include <math.h>

const double SECONDS_IN_YEAR = 3.156 * 10000000;

void main()
{
    float userAge;
    scanf("%f", &userAge);

    printf("%f", userAge * SECONDS_IN_YEAR);
}
