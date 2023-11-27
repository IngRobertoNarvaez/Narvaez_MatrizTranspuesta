#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{

    int filas;
    int columnas;
    printf("Ingrese las filas y columnas : ");
    scanf("%d", &filas);
    printf("Ingrese las Columnas : ");
    scanf("%d", &columnas);
    int matrio[filas][columnas];
    int matrise[filas][columnas];
    srand(time(NULL));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrio[i][j] = rand() % 101;
            matrise[i][j] = matrio[i][j];
        }
    }
    printf("La matriz Principal es : \n \n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matrio[i][j]);
        }
        printf("\n");
    }

    return 0;
}
