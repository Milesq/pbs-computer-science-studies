#include <stdio.h>

typedef double (*Operator)(double, double);

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mult(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}

double calculate(double a, double b, char operation)
{
    char operationsKeys[] = "+-*/";

    Operator operations[] = {add, sub, mult, div};

    Operator currentOperator;

    for (size_t i = 0; i < 4; ++i)
    {
        if (operationsKeys[i] == operation)
        {
            currentOperator = operations[i];

            break;
        }
    }

    return currentOperator(a, b);
}

void main()
{
    float a, b;
    char operator;

    scanf("%f %f\n%c", &a, &b, &operator);

    double result = calculate(a, b, operator);

    printf("Wynik: %f", result);
}
