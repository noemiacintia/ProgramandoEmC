/*
  Mostra 10 valores inteiros na ordem inversa a de leitura
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int var[10], indice;

    setlocale(LC_ALL, "");
    printf("Programa que mostra 10 valores na ordem inversa a de leitura:\n\n");
    printf("Informe 10 valores inteiros:\n");
    for (indice = 0; indice <= 9; ++indice)
        scanf("%d", &var[indice]);
    printf("\nOs 100 valores inteiros na ordem inversa:\n");
    for (indice = 9; indice >= 0; --indice)
        printf("%d\n", var[indice]);
    return 0;
}
