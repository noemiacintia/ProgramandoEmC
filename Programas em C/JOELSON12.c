/* ​Leia a, b, c e calcule as raízes da equação de 2º grau.
● A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem
“Não é equação de segundo grau”.
● Se ∆ < 0, nao existe real. Imprima a mensagem “Não existe raiz”.
● Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
● Se ∆ ≥ 0, imprima as duas raízes reais */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
    float a, b, c, x1, x2, delta;

    setlocale(LC_ALL, "");
    printf ("\no mostra raízes de uma equação de segundo grau, dependendo do seu delta:\n");
    printf ("\ninforme o coeficiente a:\n");
    scanf ("%f", &a);
    if (a == 0){
        printf("Não é equação de segundo grau");
    }
    else {
    printf ("\ninforme o coeficiente b:\n");
    scanf ("%f", &b);
    printf ("\ninforme o coeficiente c:\n");
    scanf ("%f", &c);
    delta = pow (b, 2) - 4 * a * c;
   printf ("\nO delta é: %.1f\n", delta);
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    system("cls");
    if (delta < 0){
        printf("Não existe raiz");
    }
    else if (delta == 0){
        printf("Raiz única:\n%.1f", x1);
    }
    else if (delta > 0){
        printf("Duas raízes reais:\nx1 = %.1f\nx2 = %.1f\n\n", x1, x2);
    }
    }
    return 0;
}
