/*
    1)Escreva um programa para implementar uma calculadora com as seguintes operações reais:
    soma, subtração, multiplicação, divisão, exponenciação e raiz quadrada. A operação será
    escolhida por um menu. Os operandos serão solicitados de acordo com a operação escolhida.
    Haverá no menu uma opção para fechar a calculadora.
    O programa deve utilizar um comando do-while.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    float soma=0, subtracao=0, exponenciacao=1, raiz_quadrada=1, multiplicacao=1, base, expoente;
    float num1, num2, dividendo, divisor, divisao;

    setlocale(LC_ALL, "");
    do
    {
        system("cls");
        printf("O programa implementa uma calculadora: \n\n");
        printf("\tMenu:\n\t");
        printf("1 - Soma\n\t2 - Subtração\n\t3 - Multiplicação\n\t4 - Divisão\n\t"
               "5 - Exponenciação\n\t6 - Raíz Quadrada\n\t9 - Encerra Calculadora\n\tOpção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Informe um inteiro a somar: ");
            scanf("%f", &num1);
            printf("Informe outro inteiro a somar: ");
            scanf("%f", &num2);
            soma = num1 + num2;
            printf("%.1f + %.1f = %.f\n", num1, num2, soma);
            break;
        case 2:
            printf("Informe um inteiro a subtrair: ");
            scanf("%f", &num1);
            printf("Informe outro inteiro a subtrair: ");
            scanf("%f", &num2);
            subtracao = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, subtracao);
            break;
        case 3:
            printf("Informe um inteiro a multiplicar: ");
            scanf("%f", &num1);
            printf("Informe outro inteiro a multiplicar: ");
            scanf("%f", &num2);
            multiplicacao = num1 * num2;
            printf("%.1f x %.1f = %.1f\n", num1, num2, multiplicacao);
            break;
        case 4:
            printf("Informe um inteiro a dividir: ");
            scanf("%f", &dividendo);
            printf("Informe outro inteiro a dividir: ");
            scanf("%f", &divisor);
            divisao = dividendo / divisor;
            printf("%.1f / %.1f = %.1f\n", dividendo, divisor, divisao);
            break;
        case 5:
            printf("Informe a base: ");
            scanf("%f", &base);
            printf("Informe o expoente: ");
            scanf("%f", &expoente);
            exponenciacao = pow(base, expoente);
            printf("%.1f^%.1f = %.1f\n", base, expoente, exponenciacao);
            break;
        case 6:
            printf("Informe o número: ");
            scanf("%f", &num1);
            raiz_quadrada = sqrt(num1);
            printf("Raíz Quadrada de %.1f = %.1f\n", num1, raiz_quadrada);
            break;
        case 9:
            printf("Encerrando calculadora!");
            break;
        default:
            printf("\nOpção Inválida!\n");
        }
        system("\npause");
    }
    while (opcao != 9);
    return 0;
}
