/* Posso alterar o valor dentro do array para quanto eu quiser,
modificando a quantidade de inteiros. */

#include <stdio.h>
#include <locale.h>

int main ()
{
    int var[100], indice;

    setlocale(LC_ALL, "");
    printf("Inteiro invertido com ARRAYS: \n");
    printf("\nInforme 100 valores inteiros: \n");
    for (indice = 0; indice <= 99; ++indice)
        scanf("%d\n", &var[indice]);
    printf("\nOs 100 valores inteiros na ordem inversa: \n");
    for (indice = 99; indice >= 0; --indice)
        printf("%d\n", var[indice]);
    return 0;
}
