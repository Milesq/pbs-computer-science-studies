#include <stdio.h>
#include <math.h>

void main() {
    double alpha;
    scanf("%lf", &alpha);

    alpha /= 100;

    printf("sin: %f\n", sin(alpha));
    printf("cos: %f\n", cos(alpha));
    printf("tan: %f\n", tan(alpha));
}
