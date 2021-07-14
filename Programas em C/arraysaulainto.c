/* Faça um programa que receba 10 inteiros e
mostre os que estão abaixo da média. */

#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 6

int main ()
{
    int posicao, valores[NUM_ELTOS], soma = 0;
    float media;

    setlocale(LC_ALL, "");
    printf("Mostra os inteiros abaixo da média: \n\n");
    printf("Informe os %d inteiros: \n", NUM_ELTOS);
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao)
    {
        scanf("%d", &valores[posicao]);
        soma += valores[posicao];
    }
    media = (float)soma / NUM_ELTOS;
    printf("Média: %f\n", media);
    printf("\nInteiros abaixo da média: \n\n");
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao)
        if (valores[posicao] < media)
            printf("%d\n", valores[posicao]);
    return 0;
}
