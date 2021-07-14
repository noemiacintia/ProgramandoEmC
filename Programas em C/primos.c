#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int eh_primo(int);
int conta_divisores(int);
int eh_divisor(int, int);

int main() {
    int numero;

    setlocale(LC_ALL, "");
    printf("Verifica se um n�mero inteiro positivo � ou n�o primo:\n\n");
    printf("Qual o n�mero a verificar?\n");
    scanf("%d", &numero);

    if (eh_primo(numero))
        printf("\n%d � primo!\n", numero);
    else
        printf("\n%d n�o � primo!\n", numero);

    printf("\n\n ");
    return 0;
}
// Verifica se o n�mero recebido � ou n�o primo
// Retorna verdadeiro (um inteiro diferente de 0) ou falso (0)
int eh_primo(int numero) {

    return conta_divisores(numero) == 2 ? 1 : 0;
}
// Conta os divisores do n�mero recebido
// Retorna o n�mero de divisores
int conta_divisores(int inteiro) {
    int divisor, contador = 0;

    for (divisor = 1; divisor <= inteiro;
         divisor++)
        if (eh_divisor(inteiro, divisor))
            contador++;

    return contador;
}
// Verifica se o primeiro argumento � divisor do segundo
// Retorna verdadeiro (um inteiro diferente de 0) ou falso (0)
int eh_divisor(int inteiro, int divisor) {

    return inteiro % divisor == 0 ? 1 : 0;
}
