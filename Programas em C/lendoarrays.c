/*
  Escreva um programa em C para ler e mostrar os elementos de um array de N inteiros,
  com N menor ou igual a 100, ordenar crescentemente seus elementos e mostrar o array
  ordenado, utilizando para isto uma função diferente para cada ação
*/
#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 100

void le_elementos(int[], int);
void mostra_elementos(int[], int);
void ordena_bolha(int[], int);

int main() {
    int inteiros[NUM_ELTOS], n;

    setlocale(LC_ALL, "");
    printf("Lê e mostra os elementos de um array de tamanho N (máximo 100):\n\n");
    printf("Informe o valor número de elementos (N): ");
    scanf("%d", &n);
    printf("\nInforme os %d elementos do array:\n", n);
    le_elementos(inteiros, n);
    printf("\nElementos do array na ordem de leitura:\n");
    mostra_elementos(inteiros, n);
    ordena_bolha(inteiros, n);
    printf("\n\nElementos do array em ordem crescente:\n");
    mostra_elementos(inteiros, n);
    printf("\n\n");
    return 0;
}
// Lê os N elementos do array de inteiros
void le_elementos(int meu_array[], int quant_eltos) {
    int indice;

    for (indice = 0; indice <= quant_eltos - 1; ++indice)
        scanf("%d", &meu_array[indice]);
    return;
}
// Mostra os N elementos do array de inteiros
void mostra_elementos(int array_int[], int num_eltos) {

    for (int indice = 0; indice <= num_eltos - 1; ++indice)
        printf("%d  ", array_int[indice]);
    return;
}
// Coloca o array em ordem crescente
void ordena_bolha(int array[], int tamanho) {
    int repete, indice, aux;

    // Repete o processo "tamanho - 1" vezes
    for (repete = 1; repete <= tamanho - 1; repete++)
        // Repete para o primeiro até o penúltimo elemento
        for (indice = 0; indice <= tamanho - 2; indice++)
            // Se o par de elementos estão em ordem decrescrente, troca
            if (array[indice] > array[indice + 1]) {
                // Troca os conteúdos do par de elementos
                aux = array[indice];
                array[indice] = array[indice + 1];
                array[indice + 1] = aux;
            }
    return;
}
