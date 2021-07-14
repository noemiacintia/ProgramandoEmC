#include <stdio.h>
#include <locale.h>

int main (){
    int unidade, dezena, centena, milhar, dezena_de_milhar, centena_de_milhar, milhao, unidade_de_milhao, dezena_de_milhao;
    int digito_verificador, numero, soma, resto;

    setlocale (LC_ALL, "");
    printf("Mostrando dígitos verificadores:\n");
    printf("Informe um número de 8 dígitos: \n");
    scanf("%d", &numero);
    unidade = (numero % 10) * 2;
    dezena = (numero % 100 / 10) * 3;
    centena = (numero % 1000 / 100) * 4;
    milhar = (numero % 10000 / 1000) * 5;
    dezena_de_milhar = (numero % 100000 / 10000) * 6;
    centena_de_milhar = (numero % 1000000 / 100000) * 7;
    milhao = (numero % 10000000 / 1000000) * 8;
    unidade_de_milhao = (numero / 10000000) * 9;
    soma = (unidade + dezena + centena + milhar + dezena_de_milhar + centena_de_milhar + milhao + unidade_de_milhao) * 10;
    resto = soma % 11;
    digito_verificador = 11 - resto;
    printf("O dígito verificador é: %d\n", digito_verificador);
    return 0;
}
