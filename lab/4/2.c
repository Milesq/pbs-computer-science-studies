#include <stdio.h>

size_t calculate_salary(size_t);
size_t calculate_tax(size_t);

void main()
{
    size_t hours;
    scanf("%d", &hours);

    size_t brutto = calculate_salary(hours);
    size_t tax = calculate_tax(brutto);
    size_t netto = brutto - tax;

    printf("brutto: %d\ntax: %d\nnetto: %d", brutto, tax, netto);
}

size_t calculate_salary(size_t hours)
{
    size_t basic = hours < 40 ? hours : 40;
    size_t overtime = hours - basic;

    const int basic_salary = 40;
    const int overtime_salary = basic_salary * 1.5;

    return basic * basic_salary + overtime * overtime_salary;
}

size_t calculate_tax(size_t salary)
{
    int thresholds[][2] = {
        {1200, 15},
        {600, 20},
        {0, 25},
    };
    double tax = 0;

    for (int i = 0; i < sizeof(thresholds) / sizeof(thresholds[0]); i++)
    {
        size_t threshold = thresholds[i][0];
        size_t taxRate = thresholds[i][1];

        int toTax = salary;

        // 0 measn there is no higher threshold
        if (salary > threshold && threshold != 0)
        {
            toTax = threshold;
        }

        salary -= toTax;

        tax += toTax * taxRate / 100;

        if (salary <= 0)
            break;
    }

    return tax;
}
