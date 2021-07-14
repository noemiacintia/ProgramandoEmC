/*
  1) Faça um programa em C que leia e mostre os elementos  de uma matriz de inteiros MxN,
     com M e N menores ou iguais a 100
*/
#include <stdio.h>
#include <locale.h>

#define MAX_LIN 100
#define MAX_COL 100

void le_matriz_inteira(int[][MAX_COL], int, int);
void mostra_matriz_inteira(int[][MAX_COL], int, int);

int main() {
    int matriz[MAX_LIN][MAX_COL] = {{0}}, m, n;

    setlocale(LC_ALL, "");
    printf("Programa para ler e mostrar uma matriz inteira MxN:\n\n");
    printf("Informe a quantidade de linhas (M) da matriz: ");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas (N) da matriz: ");
    scanf("%d", &n);
    printf("\nInforme os elemento da matriz %dx%d:\n", m, n);
    le_matriz_inteira(matriz, m, n);
    printf("\nElementos da matriz %dx%d:\n\n", m, n);
    mostra_matriz_inteira(matriz, m, n);
    printf("\n");
    return 0;
}
void le_matriz_inteira(int mat[][MAX_COL], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin)
        for (int col = 0; col <= numcol - 1; ++col)
            scanf("%d", &mat[lin][col]);
    return;
}
void mostra_matriz_inteira(int mat[][MAX_COL], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin) {
        for (int col = 0; col <= numcol - 1; ++col)
            printf("%5d  ", mat[lin][col]);
        printf("\n");
    }
    return;
}
