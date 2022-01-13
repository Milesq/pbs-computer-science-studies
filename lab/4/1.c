#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

size_t count_words(const char *str)
{
    size_t count = 0;
    bool in_word = false;

    while (*str != '\0')
    {
        if (isspace(*str))
        {
            in_word = false;
        }
        else if (!in_word)
        {
            in_word = true;
            count++;
        }

        str++;
    }

    return count;
}

void main()
{
    char str[128];
    fgets(str, sizeof(str), stdin);
    printf("%d", count_words(str));
}
