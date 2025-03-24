#include <stdio.h>

void movertorre(int casas)
{

    if (casas > 0)
    {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}
void moverrainha(int casas)
{

    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}
void moverbispo(int vertial, int horizontal)
{

    for (int i = 0; i < vertial; i++)
    {
        printf("Vertical\n");
        for (int j = 0; j < horizontal; j++)
        {
            printf("Horizontal\n");
        }
    }
}
void movercavalo(int casas)
{
    for (int i = 0; i < casas; i++) // Para uma repetição a menos
    {
        printf("Cima\n");
        printf("Cima\n");

        if (i % 2 == 0) // Se i for par, move para a direita
        {
            printf("Direita\n");
        }
        else // Se i for ímpar, move para a esquerda
        {
            printf("Esquerda\n");
        }
    }
}
int main()
{
    printf("##### Torre #####\n");
    movertorre(5);
    printf("\n");

    printf("##### Rainha #####\n");
    moverrainha(8);
    printf("\n");

    printf("##### Bispo #####\n");
    moverbispo(3, 2);
    printf("\n");

    printf("##### Cavalo #####\n");
    movercavalo(2);
    printf("\n");
}
