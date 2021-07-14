/*
6)Fa�a um programa para contabilizar a arrecada��o de fundos para
uma vaquinha com finalidade filantr�pica espec�fica, com determinado
limite de arrecada��o. O programa solicitar� o limite de arrecada��o
e em seguida solicitar� as doa��es para a vaquinha. Quando o limite de
arrecada��o da vaquinha for atingido ou superado, as doa��es  ser�o
encerrados e o excedente, se houver, ser� rateado equitativamente pelos
doadores. No final, ser� informado: o limite de arrecada��o, o valor
arrecadado, e quanto ser� devolvido a cada doador. Use um comando do-while
para controlar a solicita��o de doa��es.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    float limite, valor_arrecadado = 0, doacoes, sobra;
    int conta_doacoes=0;

    setlocale(LC_ALL, "");
    printf("Contabilizando a arrecada��o de fundos de uma vaquinha: \n\n");
    printf("Informe o valor do limite da arrecada��o: R$");
    scanf("%f", &limite);
    do
    {
        printf("Valor da sua doa��o: R$");
        scanf("%f", &doacoes);
        valor_arrecadado += doacoes;
        ++conta_doacoes;
    }while (valor_arrecadado <= limite);
    printf("\nValor limite        : R$ %.2f\n", limite);
    printf("Valor arrecadado    : R$ %.2f\n", valor_arrecadado);
    printf("N�mero de doa��es   : %d\n", conta_doacoes);
    if (valor_arrecadado > limite) {
        sobra = valor_arrecadado - limite;
        printf("Valor excedente     : R$ %.2f\n", sobra);
        sobra /= conta_doacoes;
        printf("Cada doador receber�: R$ %.2f\n", sobra);
    }
    return 0;
}
