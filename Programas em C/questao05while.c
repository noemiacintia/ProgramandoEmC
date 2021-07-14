#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    float a, b, c, x1, x2, delta;

    setlocale(LC_ALL, "");
    printf ("\no mostra ra�zes de uma equa��o de segundo grau, dependendo do seu delta:\n");
    printf ("\ninforme o coeficiente a:\n");
    scanf ("%f", &a);
    while (a != 0) {
    printf ("\ninforme o coeficiente b:\n");
    scanf ("%f", &b);
    printf ("\ninforme o coeficiente c:\n");
    scanf ("%f", &c);
    delta = pow (b, 2) - 4 * a * c;
    printf ("\no delta �: %.1f\n", delta);
    if (delta == 0)
    {
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf ("\nduas ra�zes iguais: x' = %.1f e x'' = %.1f\n", x1, x2);
    }
    else if (delta > 0) {
            x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf ("\nduas ra�zes diferentes: x' = %.1f e x'' = %.1f\n", x1, x2);
    }
    if (delta < 0) {
        printf ("\nn�o existem ra�zes!\n");
    }
    printf ("\ninforme o coeficiente a:\n");
    scanf ("%f", &a);
    }
    return 0;
}

