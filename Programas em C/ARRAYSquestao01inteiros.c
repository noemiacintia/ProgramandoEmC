/* 1)Escreva um programa em C para ler e mostrar os elementos de
um array de N inteiros, com N menor ou igual a 100, utilizando para
isto uma função diferente para cada ação. */

#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 100

void ler_elementos (int[], int);
void mostra_elementos (int[], int);

int main ()
{
    int inteiros[NUM_ELTOS], n;

    setlocale(LC_ALL, "");
    printf("O programa ler e mostra os elementos de um array de"
           "tamanho N (máximo 100):\n");
    printf("Informe o valor do número de elementos (N): ");
    scanf("%d", &n);
    printf("Informe os %d elementos do array: \n", n);
    ler_elementos (inteiros, n);
    printf("Elementos do array: \n", n);
    mostra_elementos (inteiros, n);
    printf("\n\n");
    return 0;
}
// ler os N elementos do array de inteiros
void ler_elementos (int meu_array[], int quant_eltos)
{
    int indice;

    for (indice = 0; indice <= quant_eltos - 1; ++indice)
        scanf("%d", &meu_array[indice]);
        return;
}
// mostra os N elementos do array de inteiros
void mostra_elementos (int array_int[], int num_eltos)
{
    for (int indice = 0; indice <= num_eltos - 1; ++indice)
        printf("%d   ", array_int[indice]);
        return;
}
