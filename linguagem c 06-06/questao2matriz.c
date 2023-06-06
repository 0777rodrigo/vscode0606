#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, j;
    float notas[2][3];
    float somaNotas;
    float media[2];

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("digite a %d nota do %d semestre \n ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
            media[i] = somaNotas / j;
        }
        return 0;
    }
}