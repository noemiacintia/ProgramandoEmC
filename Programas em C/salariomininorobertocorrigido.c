#include <stdio.h>
#include <locale.h>

int main (){
    float salario_minimo, salario, salario_reajustado, salario_minimo_reajustado;

    setlocale(LC_ALL, "");
    printf("o programa reajusta salários: \n");
    printf("\ndigite o salário mínimo: ");
    scanf ("%f", &salario_minimo);
    printf("digite seu salário: ");
    scanf("%f", &salario);
    salario_reajustado = salario + salario * (salario == salario_minimo ? 10 : 4.5) / 100;
    printf("O salário reajustado é: %.1f\n", salario_reajustado);
    salario_minimo_reajustado = (salario_minimo) + salario_minimo * 10 / 100;
    printf("O salário mínimo reajustado é: %.1f\n", salario_minimo_reajustado);
    if (salario_reajustado < salario_minimo_reajustado)
    {
        salario_reajustado = salario_minimo_reajustado;
        printf("Salário reajustado estava abaixo do salário mínimo reajustado"
               " por isso, o salário agora é: %.1f", salario_minimo_reajustado);
    }
    return 0;
}
