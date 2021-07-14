/*
Exerc�cio 6
- Fa�a um programa que receba um inteiro positivo e mostre os seus d�gitos separados por espa�os em branco

Algoritmo:
1) Solicite o inteiro positivo
2) Crie um inteiro com os d�gitos invertidos do inteiro recebido (ver slide 17)
3) Repita enquanto o inteiro invertido for maior que zero:
      a. Separe o d�gito mais � direita do inteiro invertido (resto da divis�o por 10)
      b. Imprima o d�gito separado seguido de um espa�o em branco
      c. Divida o inteiro invertido por 10
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    int inteiro, invertido=0;

    setlocale(LC_ALL, "");
    printf("D�gitos separados por um espa�o: \n\n");
    printf("Digite um n�mero inteiro positivo: ");
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
