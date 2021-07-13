/*
    Exerc�cio 3
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    float a, b, c, delta, x, x1, x2;

    setlocale(LC_ALL, "");
    printf("Programa que encontra as ra�zes reais de uma equa��o do segundo grau\n"
           "ax� + bx + c = 0, se existirem:\n");
    printf("\nInforme o valor do coeficiente a: ");
    scanf("%f", &a);
    printf("\nInforme o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("\nInforme o valor do coeficiente c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    printf("\nValor do delta � %.3f.\n", delta);
    if (delta < 0)
        printf("\nA equa��o n�o possui ra�zes reais.\n");
    else if (delta == 0) {
        x = -b / (2 * a);
        printf("\nA �nica ra�z � %.2f.\n", x);
    }
    else {
        x1 = -b + sqrt(delta) / (2 * a);
        x2 = -b - sqrt(delta) / (2 * a);
        printf("\nAs ra�zes s�o x1 = %.2f e x2 = %.2f.\n", x1, x2);
    }
    return 0;
}
