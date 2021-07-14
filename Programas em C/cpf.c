#include <stdio.h>
#include <locale.h>

int main (){
    int unidade, dezena, centena, milhar, dezena_de_milhar, centena_de_milhar, milhao, digito_verificador, numero, soma;

    setlocale (LC_ALL, "");
    printf("Mostrando dígitos verificadores:\n");
    printf("Informe um número de 7 dígitos: \n");
    scanf("%d", &numero);
    unidade = (numero % 10) * 2;
    dezena = (numero / 10 % 10) * 3;
    centena = (numero / 100 % 10) * 4;
    milhar = (numero / 1000 % 10) * 5;
    dezena_de_milhar = (numero / 10000 % 10) * 6;
    centena_de_milhar = (numero / 100000 % 10) * 7;
    milhao = (numero / 1000000 % 10) * 8;
    unidade_de_milhao = 10000000 % 10) * 9;
    dezena_de_milhao = numero / 100000000;
    soma = (unidade + dezena + centena + milhar + dezena_de_milhar + centena_de_milhar + milhao) * 10;
    digito_verificador = soma % 11;
    printf("O dígito verificador é: %d\n", digito_verificador);
    return 0;
}
