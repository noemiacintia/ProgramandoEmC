/* Fa�a um programa que receba 10 inteiros e
mostre os que est�o abaixo da m�dia. */

#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 6

int main ()
{
    int posicao, valores[NUM_ELTOS], soma = 0;
    float media;

    setlocale(LC_ALL, "");
    printf("Mostra os inteiros abaixo da m�dia: \n\n");
    printf("Informe os %d inteiros: \n", NUM_ELTOS);
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao)
    {
        scanf("%d", &valores[posicao]);
        soma += valores[posicao];
    }
    media = (float)soma / NUM_ELTOS;
    printf("M�dia: %f\n", media);
    printf("\nInteiros abaixo da m�dia: \n\n");
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao)
        if (valores[posicao] < media)
            printf("%d\n", valores[posicao]);
    return 0;
}
