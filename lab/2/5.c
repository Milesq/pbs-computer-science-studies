#include <stdio.h>

char HELP_MSG[] = "1.\n"
                  " -\n"
                  "| |\n"
                  " -\n\n"
                  "2.\n"
                  "---------\n"
                  "|       |\n"
                  "---------\n\n"
                  "3.\n"
                  "  /\\\n"
                  " /  \\\n"
                  "/    \\\n"
                  "------\n\n\n";

typedef int (*Operation)();

int square()
{
    int a;

    printf("a: ");
    scanf("%d", &a);

    return a * a;
}

int rectangle()
{
    int a, b;

    printf("a b: ");
    scanf("%d %d", &a, &b);

    return a * b;
}

int triangle()
{
    int a, h;

    printf("a h: ");
    scanf("%d %d", &a, &h);

    return (a * h) / 2;
}

int main()
{
    size_t option;

    Operation operations[] = {square, rectangle, triangle};

    printf("%s", HELP_MSG);
    scanf("%zu", &option);
    fseek(stdin, 0, SEEK_END);

    if (option > 3)
    {
        printf("You have to pass number between 1 - 3");
        return -1;
    }

    int area = operations[option - 1]();

    printf("Figure box is %d", area);

    return 0;
}
