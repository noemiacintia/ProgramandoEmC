/*  ​Leia um número inteiro e imprima a soma do sucessor de
seu triplo com o antecessor de  seu dobro. */

#include <stdio.h>
#include <locale.h>

int main()
{
    int inteiro, triplo = 0, dobro = 0, soma = 0;

    setlocale(LC_ALL, "");
    printf("Ler um inteiro e imprime a soma do sucessor\n"
           "de seu triplo com  o antecessor de seu dobro:\n\n");
    printf("Insira um inteiro:\n");
    scanf("%d", &inteiro);
    triplo = (inteiro * 3);
    dobro = (inteiro * 2);
    soma = (triplo + 1) + (dobro - 1);
    printf("\nDobro = %d\nTriplo = %d\nSoma[dobro + triplo] = %d\n\n", dobro, triplo, soma);
    return 0;
}
