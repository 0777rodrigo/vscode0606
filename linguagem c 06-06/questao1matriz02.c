#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, j;
    float notas[2][3];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("digite a %d nota do %d semestre \n ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    return 0;
}