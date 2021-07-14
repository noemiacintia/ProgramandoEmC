#include <stdio.h>
#include <locale.h>


int main (){
    int inteiro, num1, num2, num3, num4, num5, num6, num7, inteiro_invertido, n;

    setlocale (LC_ALL, "");
    printf("O programa mostra se é um palíndromo ou não:\n");
    printf("\nDigite um numero para verificar: ");
    scanf("%d", &inteiro);
    n = inteiro;
    num1 = inteiro % 10 ;
    num2 = inteiro/10 % 10;
    num3 = inteiro/100 % 10;
    num4 = inteiro/ 1000 %10;
    num5 = inteiro/10000 % 10;
    num6 = inteiro/100000 % 10;
    num7 = inteiro/1000000;
    inteiro_invertido = num1 * 1000000 + num2 * 100000 + num3 * 10000 + num4 * 1000 + num5 * 100 + num6 * 10 + num7;
    printf("%d", inteiro_invertido);
    if (inteiro_invertido==n) {
        printf("O número é um palíndromo\n");
    }
    else {
        printf("O número não é um palíndromo\n");
    }
    return 0;
}
