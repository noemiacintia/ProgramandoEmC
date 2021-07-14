/*
6)Faça um programa para contabilizar a arrecadação de fundos para
uma vaquinha com finalidade filantrópica específica, com determinado
limite de arrecadação. O programa solicitará o limite de arrecadação
e em seguida solicitará as doações para a vaquinha. Quando o limite de
arrecadação da vaquinha for atingido ou superado, as doações  serão
encerrados e o excedente, se houver, será rateado equitativamente pelos
doadores. No final, será informado: o limite de arrecadação, o valor
arrecadado, e quanto será devolvido a cada doador. Use um comando do-while
para controlar a solicitação de doações.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    float limite, valor_arrecadado = 0, doacoes, sobra;
    int conta_doacoes=0;

    setlocale(LC_ALL, "");
    printf("Contabilizando a arrecadação de fundos de uma vaquinha: \n\n");
    printf("Informe o valor do limite da arrecadação: R$");
    scanf("%f", &limite);
    do
    {
        printf("Valor da sua doação: R$");
        scanf("%f", &doacoes);
        valor_arrecadado += doacoes;
        ++conta_doacoes;
    }while (valor_arrecadado <= limite);
    printf("\nValor limite        : R$ %.2f\n", limite);
    printf("Valor arrecadado    : R$ %.2f\n", valor_arrecadado);
    printf("Número de doações   : %d\n", conta_doacoes);
    if (valor_arrecadado > limite) {
        sobra = valor_arrecadado - limite;
        printf("Valor excedente     : R$ %.2f\n", sobra);
        sobra /= conta_doacoes;
        printf("Cada doador receberá: R$ %.2f\n", sobra);
    }
    return 0;
}
