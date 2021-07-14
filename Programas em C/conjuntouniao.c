/*
  Escreva um programa em C para ler dois conjuntos de inteiros de 10 elementos e mostrar
  o conjunto união destes conjuntos, utilizando para isto uma função para cada ação
*/
#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 10

void le_elementos(int[], int);
void mostra_elementos(int[], int);
int conjunto_uniao(int[], int, int[], int, int[]);
int esta_no_conjunto(int, int[], int);

int main() {
    int conjA[NUM_ELTOS], conjB[NUM_ELTOS], conjU[NUM_ELTOS + NUM_ELTOS], num_elem_uniao;

    setlocale(LC_ALL, "");
    printf("\nDetermina o conjunto uniao de 2 conjuntos inteiros de 10 elementos:\n");
    printf("\nInforme os %d elementos do conjunto A:\n", NUM_ELTOS);
    le_elementos(conjA, NUM_ELTOS);
    printf("\nInforme os %d elementos do conjunto B:\n", NUM_ELTOS);
    le_elementos(conjB, NUM_ELTOS);
    printf("\nElementos do conjunto A:\n");
    mostra_elementos(conjA, NUM_ELTOS);
    printf("\n\nElementos do conjunto B:\n");
    mostra_elementos(conjB, NUM_ELTOS);
    num_elem_uniao = conjunto_uniao(conjA, NUM_ELTOS, conjB, NUM_ELTOS, conjU);
    printf("\n\nElementos do conjunto União:\n");
    mostra_elementos(conjU, num_elem_uniao);
    printf("\n\n");
    return 0;
}
// Lê os "quant_eltos" elementos do array de inteiros
void le_elementos(int meu_array[], int quant_eltos) {
    int indice;

    for (indice = 0; indice <= quant_eltos - 1; ++indice)
        scanf("%d", &meu_array[indice]);
    return;
}
// Mostra os "num_eltos" elementos do array de inteiros
void mostra_elementos(int array_int[], int num_eltos) {

    for (int indice = 0; indice <= num_eltos - 1; ++indice)
        printf("%d  ", array_int[indice]);
    return;
}
// Determina o conjunto união de dois conjuntos de inteiros
// Preenche o array união e retorna o seu número de elementos
int conjunto_uniao(int conjA[], int num_eltos_A, int conjB[], int num_eltos_B, int conjU[]) {
    int indA, indB, indU;

    for (indA = 0; indA <= num_eltos_A - 1; ++indA)
        conjU[indA] = conjA[indA];
    // "indU" tem o indice do próximo elemento livre do conjunto união,
    // que é ao mesmo tempo o total de elementos colocados no conjunto união
    indU = num_eltos_A;
    for (indB = 0; indB <= num_eltos_B - 1; ++indB)
        if (!esta_no_conjunto(conjB[indB], conjA, num_eltos_A)) {
            conjU[indU] = conjB[indB];
            ++indU;
        }
    return indU; // Número de elementos no conjunto união
}
// Verifica se um valor está presente num conjunto de inteiros,
// Retorna: verdadeiro (diferente de 0) se está presente e
// falso (igual a 0), caso contrário
int esta_no_conjunto(int procurado, int conjunto[], int num_elementos) {
    int indice;

    for (indice = 0; indice <= num_elementos - 1; ++indice) {
        if (procurado == conjunto[indice]) {
            return 1; // Verdadeiro
        }
    }
    return 0; // Falso
}
