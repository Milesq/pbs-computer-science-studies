#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool includes(const char *str, char chr)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == chr)
        {
            return true;
        }
    }

    return false;
}

void main()
{
    char str[50];

    scanf("%s", str);
    fflush(stdin);

    char chr;
    for (int i = 0; i < strlen(str); i++)
    {
        scanf("%c", &chr);
        fflush(stdin);

        printf("%s\n\n", includes(str, chr) ? "true" : "false");

    }
}
