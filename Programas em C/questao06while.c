/*
Exercício 6
- Faça um programa que receba um inteiro positivo e mostre os seus dígitos separados por espaços em branco

Algoritmo:
1) Solicite o inteiro positivo
2) Crie um inteiro com os dígitos invertidos do inteiro recebido (ver slide 17)
3) Repita enquanto o inteiro invertido for maior que zero:
      a. Separe o dígito mais à direita do inteiro invertido (resto da divisão por 10)
      b. Imprima o dígito separado seguido de um espaço em branco
      c. Divida o inteiro invertido por 10
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    int inteiro, invertido=0;

    setlocale(LC_ALL, "");
    printf("Dígitos separados por um espaço: \n\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &inteiro);
    while (inteiro > 0)
    {
        invertido = invertido * 10 + inteiro % 10;
        inteiro /= 10;
    }
    printf("\n");
    while (invertido > 0)
    {
        printf("%d ", invertido % 10);
        invertido/=10;
    }
    printf("\n\n");
    return 0;
}
