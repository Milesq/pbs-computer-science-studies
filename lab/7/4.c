#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void count_occurrence(char *str, int *letters, int *numbers);
int get_occurrence(char chr, int *letters, int *numbers);

void main()
{
    int *letters = malloc(sizeof(int) * ('z' - 'a' + 1));
    memset(letters, 0, sizeof(int) * ('z' - 'a' + 1));

    int *numbers = malloc(sizeof(int) * ('9' - '0' + 1));
    memset(numbers, 0, sizeof(int) * ('9' - '0' + 1));

    char *str = malloc(sizeof(char[100]));
    fgets(str, 100, stdin);
    fflush(stdin);
    count_occurrence(str, letters, numbers);

    char chr;
    scanf("%c", &chr);

    printf("%d\n", get_occurrence(chr, letters, numbers));

    free(letters);
    free(numbers);
}

void count_occurrence(char *str, int *letters, int *numbers)
{
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            letters[str[i] - 'a']++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            numbers[str[i] - '0']++;
        }
    }
}

int get_occurrence(char chr, int *letters, int *numbers) {
    if (chr >= 'a' && chr <= 'z')
    {
        return letters[chr - 'a'];
    }
    else if (chr >= '0' && chr <= '9')
    {
        return numbers[chr - '0'];
    }

    return -1;
}
