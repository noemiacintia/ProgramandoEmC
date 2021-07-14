#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int eh_primo(int);
int conta_divisores(int);
int eh_divisor(int, int);

int main() {
    int numero;

    setlocale(LC_ALL, "");
    printf("Verifica se um número inteiro positivo é ou não primo:\n\n");
    printf("Qual o número a verificar?\n");
    scanf("%d", &numero);

    if (eh_primo(numero))
        printf("\n%d é primo!\n", numero);
    else
        printf("\n%d não é primo!\n", numero);

    printf("\n\n ");
    return 0;
}
// Verifica se o número recebido é ou não primo
// Retorna verdadeiro (um inteiro diferente de 0) ou falso (0)
int eh_primo(int numero) {

    return conta_divisores(numero) == 2 ? 1 : 0;
}
// Conta os divisores do número recebido
// Retorna o número de divisores
int conta_divisores(int inteiro) {
    int divisor, contador = 0;

    for (divisor = 1; divisor <= inteiro;
         divisor++)
        if (eh_divisor(inteiro, divisor))
            contador++;

    return contador;
}
// Verifica se o primeiro argumento é divisor do segundo
// Retorna verdadeiro (um inteiro diferente de 0) ou falso (0)
int eh_divisor(int inteiro, int divisor) {

    return inteiro % divisor == 0 ? 1 : 0;
}
