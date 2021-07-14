#include <stdio.h>
#include <locale.h>

int main ()
{
    int unidade, dezena, centena, milhar, dezena_de_milhar, centena_de_milhar, milhao, unidade_de_milhao, dezena_de_milhao;
    int digito_verificador, CPF, soma, resto, digito_verificador1, digito_verificador2;

    setlocale (LC_ALL, "");
    printf("Mostrando dígitos verificadores do CPF:\n");
    printf("Informe o CPF: \n");
    scanf("%09d", &CPF);
    unidade = CPF % 10;
    dezena = CPF % 100 / 10;
    centena = CPF % 1000 / 100;
    milhar = CPF % 10000 / 1000;
    dezena_de_milhar = CPF % 100000 / 10000;
    centena_de_milhar = CPF % 1000000 / 100000;
    unidade_de_milhao = CPF % 10000000 / 1000000;
    dezena_de_milhao = CPF % 100000000 / 10000000;
    centena_de_milhao = CPF / 100000000;
    soma = unidade * 2 + dezena * 3 + centena * 4 + milhar * 5 + dezena_de_milhar * 6 + centena_de_milhar * 7 + milhao * 8 + unidade_de_milhao * 9 + dezena_de_milhao * 10 + centena_de_milhao * 11;
    resto = soma % 11;
    digito_verificador1 = resto < 2 ? 0 : 11 - resto;

    soma = digito_verificador1 * 2 + unidade * 3 + dezena * 4 + centena * 5 + milhar * 6 + dezena_de_milhar * 7 + centena_de_milhar * 8 + milhao * 9 + unidade_de_milhao * 10 + dezena_de_milhao * 11 + centena_de_milhao * 12;
    resto = soma % 11;
    digito_verificador2 =  resto < 2 ? 0 : 11 - resto;
    printf("Os dígitos verificadores são: Dígito 1: %d e Dígito 2: %d\n", digito_verificador1, digito_verificador2);
    return 0;
}
