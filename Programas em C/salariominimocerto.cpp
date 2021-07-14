#include <stdio.h>
#include <locale.h>

int main ()
{
    float salario_minimo, salario_da_pessoa, salario_reajustado;

    setlocale(LC_ALL, "");
    printf("o programa reajusta salários: \n");
    printf("\ndigite o salário mínimo: ");
    scanf ("%f", &salario_minimo);
    printf("digite seu salário: ");
    scanf ("%f", &salario_da_pessoa);
    printf("%.2f\n", salario_da_pessoa = salario_minimo ? salario_reajustado = salario_da_pessoa * 1.10 :
	 salario_reajustado = salario_da_pessoa * 4,5 / 100);
    if (salario_reajustado < salario_minimo)
    {
        printf ("Salário reajustado está abaixo do limite minímo");
    }
    return 0;
}
