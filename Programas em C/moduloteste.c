
#include <stdio.h>
#include <locale.h>

int main () {
    int codigo, unidade, dezena, centena, milhar, dezena_de_milhar, centena_de_milhar, soma, digito_verificador;

    setlocale (LC_ALL, "");
    printf ("o primeiro digito verificador, cada dígito do número, começando da direita para a esquerda (do dígito menos significativo para o dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim sucessivamente, até o primeiro dígito do número:\n\n");
    printf ("Informe um codigo de 6 dígitos:\n\n");
    scanf ("%d", &codigo);
    unidade = codigo % 10;
    dezena = codigo / 10 % 10;
    centena = codigo / 100 % 10;
    milhar = codigo / 1000 % 10;
    dezena_de_milhar = codigo / 10000 % 10;
    centena_de_milhar = codigo / 100000;

        unidade = unidade * 2;
        dezena = dezena * 3;
        centena = centena * 4;
        milhar = milhar * 5;
        dezena_de_milhar = dezena_de_milhar * 6;
        centena_de_milhar = centena_de_milhar * 7;

    soma = unidade + dezena + centena + milhar + dezena_de_milhar + centena_de_milhar;
    soma = soma * 10;
    digito_verificador = soma % 11;

    printf ("a soma dos digitos no codigo é %d\n\n", soma);
    printf ("digito_verificador é %d\n\n", digito_verificador);
    return 0;
}
