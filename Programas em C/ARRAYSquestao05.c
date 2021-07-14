/* 5)Estenda o programa anterior para funcionar com conjuntos de
tamanho diferentes de at� 100 elementos, usando uma fun��o diferente para cada a��o. */

#include <stdio.h>
#include <locale.h>

#define NUM_ELEMENTOS 10
#define NUM_UNIAO 20

void ler_elementos (int[], int);
void mostra_elementos (int[], int);
void conjunto_uniao (int[], int[], int, int);

int main ()
{
    int inteiros1[NUM_ELEMENTOS];
    int inteiros2[NUM_ELEMENTOS];

    setlocale(LC_ALL, "");
    printf("Ler dois conjuntos de inteiros de 10 elementos e mostra o conjunto uni�o:\n\n");
    printf("Informe os 10 elementos do 1� array: \n");
    ler_elementos (inteiros1, NUM_ELEMENTOS);
    printf("Informe os 10 elementos do 2� array: \n");
    ler_elementos (inteiros2, NUM_ELEMENTOS);
    printf("Elementos do array 1: \n");
    mostra_elementos (inteiros1, NUM_ELEMENTOS);
    printf("Elementos do array 2: \n");
    mostra_elementos (inteiros2, NUM_ELEMENTOS);
    conjunto_uniao (inteiros1, inteiros2, NUM_UNIAO, NUM_ELEMENTOS);
    printf("\n\n");
    return 0;
}
void ler_elementos (int meu_array[], int NUM_ELEMENTOS)
{
    int indice;

    for (indice = 0; indice <= NUM_ELEMENTOS - 1; ++indice)
        scanf("%d", &meu_array[indice]);
    return;
}
void mostra_elementos (int array_int[], int NUM_ELEMENTOS)
{
    for (int indice = 0; indice <= NUM_ELEMENTOS - 1; ++indice)
        printf("%d   ", array_int[indice]);
    return;
}
void conjunto_uniao (int array1[], int array2[], int NUM_UNIAO, int NUM_ELEMENTOS)
{
    int indice, contador, conta;

    for (indice = 0; indice < NUM_ELEMENTOS; ++indice)
    {
        uniao[indice] = array1[indice];
    }
    for (contador = 0; contador < NUM_ELEMENTOS; ++contador)
    {
        uniao[contador + NUM_ELEMENTOS] = array2[contador];
    }
    for (conta = 0; conta < NUM_UNIAO; ++conta)
    {
        printf("%d", uniao[conta]);
    }
    return;
}
