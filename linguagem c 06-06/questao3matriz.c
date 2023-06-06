#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, j;
    float notas[2][3];
    float media[3];
    float somaNotas;
    char disciplina[3][300];

    for (i = 0; i < 3; i++)
    {

        printf("nome da %d disciplina \n ", i + 1);
        gets(disciplina[i]); 

        for (j = 0; j < 3; j++)
        {
            printf("digite a %d nota \n ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j;

        printf("media %2.f \n ", media[i]);
    }

    return 0;
}