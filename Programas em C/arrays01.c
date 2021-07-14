/* Treinando arrays: */
#include <locale.h>
#include <stdio.h>
void troca_elementos_1 (int, int);
void troca_elementos_2 (int[]);
int main ()
{
    int array[] = {10, 20};

    setlocale(LC_ALL, "");
    printf("O programa tenta trocar elementos de um array:\n\n");
    printf("\narray[0] = %d array[1] = %d\n\n", array[0], array[1]);
    troca_elementos_1(array[0], array[1]);
    printf("\narray[0] = %d array[1] = %d\n\n", array[0], array[1]);
    troca_elementos_2(array);
    printf("\narray[0] = %d array[1] = %d\n\n", array[0], array[1]);
    return 0;
}
void troca_elementos_1 (int primeiro, int segundo)
{
    int aux;

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;
    printf("\nPrimeiro = %d Segundo = %d\n", primeiro, segundo);
}
void troca_elementos_2 (int novo_array[])
{
    int aux;

    aux = novo_array[0];
    novo_array[0] = novo_array[1];
    novo_array[1] = aux;
    printf("\nnovo_array[0] = %d novo_array[] = %d\n", novo_array[0], novo_array[1]);
}
