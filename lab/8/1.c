#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char group_name[50];
    char person[50];
    int sum;
} Fundraise;

int main()
{
    int n;
    scanf("%d", &n);
    fflush(stdin);

    Fundraise *fundraises = malloc(n * sizeof(Fundraise));

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d", fundraises[i].group_name, fundraises[i].person, &fundraises[i].sum);
        fflush(stdin);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Imie: %s\nGrupa: %s\nSuma: %d\n\n", fundraises[i].person, fundraises[i].group_name, fundraises[i].sum);
    }

    free(fundraises);

    return 0;
}
