#include <stdio.h>
#include <locale.h>

int main (){
    float salario_minimo, salario, salario_reajustado, salario_minimo_reajustado;

    setlocale(LC_ALL, "");
    printf("o programa reajusta sal�rios: \n");
    printf("\ndigite o sal�rio m�nimo: ");
    scanf ("%f", &salario_minimo);
    printf("digite seu sal�rio: ");
    scanf("%f", &salario);
    salario_reajustado = salario + salario * (salario == salario_minimo ? 10 : 4.5) / 100;
    printf("O sal�rio reajustado �: %.1f\n", salario_reajustado);
    salario_minimo_reajustado = (salario_minimo) + salario_minimo * 10 / 100;
    printf("O sal�rio m�nimo reajustado �: %.1f\n", salario_minimo_reajustado);
    if (salario_reajustado < salario_minimo_reajustado)
    {
        salario_reajustado = salario_minimo_reajustado;
        printf("Sal�rio reajustado estava abaixo do sal�rio m�nimo reajustado"
               " por isso, o sal�rio agora �: %.1f", salario_minimo_reajustado);
    }
    return 0;
}
