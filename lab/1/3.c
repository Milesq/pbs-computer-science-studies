#include <stdio.h>
#include <math.h>

double bmi(float weight, float height);

void main()
{
    int weight, height;

    printf("Podaj wage i wzrost: ");
    scanf("%d %d", &weight, &height);

    printf("twoje BMI to %f", bmi((float)weight, (float)height));
}

double bmi(float weight, float height)
{
    return weight / pow(height / 100, 2);
}
