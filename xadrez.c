#include <stdio.h>

int main()
{
    printf("#####Torre#####\n");
    printf("\n");
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    int bispo = 1;
    printf("\n");
    printf("#####Bispo#####\n");
    printf("\n");

    while (bispo <= 5)
    {
        printf("Cima, Direita\n");

        bispo++;
    }

    printf("\n");
    printf("#####Rainha#####\n");
    printf("\n");

    int rainha = 1;

    do
    {
        printf("Esquerda\n");

        rainha++;

    } while (rainha <= 8);
    return 0;
}