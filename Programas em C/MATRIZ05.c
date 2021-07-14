/*
  5) Faça um programa em C que leia os elementos  de duas matrizes de números reais,
     com dimensões máximas 10x10, e mostre o produto destas matrizes
*/
#include <stdio.h>
#include <locale.h>

#define MAX_DIM 10

void le_matriz_real(float[][MAX_DIM], int, int);
void mostra_matriz_real(float[][MAX_DIM], int, int);
void multiplica_matrizes_reais(float[][MAX_DIM], int, int, float[][MAX_DIM], int, int, float[][MAX_DIM]);


int main() {
    float mat_A[MAX_DIM][MAX_DIM], mat_B[MAX_DIM][MAX_DIM], mat_produto[MAX_DIM][MAX_DIM];
    int linhas1, colunas1, linhas2, colunas2;

    setlocale(LC_ALL, "");
    printf("Multiplica duas matrizes reais de no máximo 10 linhas por 10 colunas:\n\n");
    printf("\nInforme o número de linhas da primeira matriz (menor ou igual a 10): ");
    scanf("%d", &linhas1);
    printf("\nInforme o número de colunas da primeira matriz (menor ou igual a 10): ");
    scanf("%d", &colunas1);
    printf("\nInforme o número de linhas da segunda matriz (menor ou igual a 10): ");
    scanf("%d", &linhas2);
    printf("\nInforme o número de colunas da segunda matriz (menor ou igual a 10): ");
    scanf("%d", &colunas2);
    if (colunas1 != linhas2) {
        printf("\nEstas matrizes não podem ser multiplicadas!\n");
        return 0;
    }
    printf("\nInforme os elementos reais da primeira matriz (%dx%d): \n", linhas1, colunas1);
    le_matriz_real(mat_A, linhas1, colunas1);
    printf("\nInforme os elementos reais da segunda matriz (%dx%d): \n", linhas2, colunas2);
    le_matriz_real(mat_B, linhas2, colunas2);
    multiplica_matrizes_reais(mat_A, linhas1, colunas1, mat_B, linhas2, colunas2,  mat_produto);
    printf("\nPrimeira matriz (%dx%d): \n", linhas1, colunas1);
    mostra_matriz_real(mat_A, linhas1, colunas1);
    printf("\nSegunda matriz (%dx%d): \n", linhas2, colunas2);
    mostra_matriz_real(mat_B, linhas2, colunas2);
    printf("\nMatriz Produto(%dx%d): \n", linhas1, colunas2);
    mostra_matriz_real(mat_produto, linhas1, colunas2);
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
/*
Calcula a soma de duas matrizes reais
1. multMatrix(Am × n, Bn × p)
2.      inicializar a matriz Cm × p
3.      para i = 1 até m
4.            para j = 1 até p
5.                  para k = 1 até n
6.                        Cij = Cij + Aik × Bkj
7.                  fim_para
8.            fim_para
9.      fim_para
10.     retorne Cm × p
11. fim_multMatrix
*/
void multiplica_matrizes_reais(float mat1[][MAX_DIM], int lins1, int cols1,
                               float mat2[][MAX_DIM], int lins2, int cols2,
                               float matP[][MAX_DIM]) {

    for (int i = 0; i <= lins1 - 1; ++i)
        for (int j = 0; j <= cols2 - 1; ++j) {
            matP[i][j] = 0;
            for (int k = 0; k <= cols1 - 1; ++k)
                matP[i][j] = matP[i][j] + mat1[i][k] * mat2[k][j];
        }
    return;
}
