/* Autor: No�mia C�ntia Sales Santos da Silva
   Enunciado: Programa que receba 10 valores inteiros e
   mostra os que est�o abaixo da m�dia. */

#include <stdio.h>
#include <locale.h>

// definindo variav�l global
#define NUM_ELTOS 10

int main(){
    int posicao, valores[NUM_ELTOS], soma = 0;
    float media;

    setlocale(LC_ALL, "");
    printf("Mostra os inteiros abaixo da m�dia deles:\n\n");
    printf("Informe os %d inteiros:\n", NUM_ELTOS);
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao){
        scanf("%d", &valores[posicao]);
        soma += valores[posicao];
    }
    // transformando a soma numa variavel float
    media = (float)soma/NUM_ELTOS;
    printf("\n M�dia = %f\n", media);
    printf("\nInteiros abaixo da m�dia:\n");
    for (posicao = 0; posicao < NUM_ELTOS; ++posicao)
        if (valores[posicao] < media)
            printf("%d\n", valores[posicao]);
    return 0;
}
