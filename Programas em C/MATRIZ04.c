/*
4) Faça um programa em C que leia os elementos de duas matrizes de números reais MxN e
   mostre a soma destas matrizes, com M e N menores ou iguais a 10
*/
#include <stdio.h>
#include <locale.h>

#define MAX_DIM 10

void le_matriz_real(float[][MAX_DIM], int, int);
void mostra_matriz_real(float[][MAX_DIM], int, int);
void soma_matrizes_reais(float[][MAX_DIM], float[][MAX_DIM], float[][MAX_DIM], int, int);


int main() {
    float mat_A[MAX_DIM][MAX_DIM], mat_B[MAX_DIM][MAX_DIM], mat_soma[MAX_DIM][MAX_DIM];
    int m, n;

    setlocale(LC_ALL, "");
    printf("Soma duas matrizes reais de no máximo 10 linhas por 10 colunas:\n\n");
    printf("Informe o número de linhads das matrizes (M menor ou igual a 10): ");
    scanf("%d", &m);
    printf("\nInforme o número de colunas das matrizes (N menor ou igual a 10): ");
    scanf("%d", &n);
    printf("\nInforme os elementos reais da primeira matriz (%dx%d): \n", m, n);
    le_matriz_real(mat_A, m, n);
    printf("\nInforme os elementos reais da segunda matriz (%dx%d): \n", m, n);
    le_matriz_real(mat_B, m, n);
    soma_matrizes_reais(mat_A, mat_B, mat_soma, m, n);
    printf("\nPrimeira matriz (%dx%d): \n", m, n);
    mostra_matriz_real(mat_A, m, n);
    printf("\nSegunda matriz (%dx%d): \n", m, n);
    mostra_matriz_real(mat_B, m, n);
    printf("\nMatriz Soma(%dx%d): \n", m, n);
    mostra_matriz_real(mat_soma, m, n);
    printf("\n");
    return 0;
}
// Lê os elementos de uma matriz real qualquer
void le_matriz_real(float mat[][MAX_DIM], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin)
        for (int col = 0; col <= numcol - 1; ++col)
            scanf("%f", &mat[lin][col]);
    return;
}
// Mostra os elementos de uma matriz real qualquer
void mostra_matriz_real(float mat[][MAX_DIM], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin) {
        for (int col = 0; col <= numcol - 1; ++col)
            printf("%10.2f ", mat[lin][col]);
        printf("\n");
    }
    return;
}
// Calcula a soma de duas matrizes reais
void soma_matrizes_reais(float mat1[][MAX_DIM], float mat2[][MAX_DIM], float matS[][MAX_DIM], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin)
        for (int col = 0; col <= numcol - 1; ++col)
            matS[lin][col] = mat1[lin][col] + mat2[lin][col];
    return;
}
