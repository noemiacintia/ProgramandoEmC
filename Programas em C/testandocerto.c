#include <stdio.h>
#include <locale.h>

int main(){
int dezena, unidade, centena, milhar, dezena_de_milhar, centena_de_milhar, digito;

setlocale(LC_ALL, "");
printf ("programa para testar separação de inteiros:\n ");
printf ("\ninforme um inteiro de 6 dígitos: ");
scanf ("%d", &digito);
unidade = digito % 10;
printf ("\nunidade: %d", unidade);
dezena = digito / 10 % 10;
printf ("\ndezena: %d", dezena);
centena = digito / 100 % 10;
printf ("\ncentena: %d", centena);
milhar = digito / 1000 % 10;
printf ("\nmilhar: %d", milhar);
dezena_de_milhar = digito / 10000 % 10;
printf ("\ndezena_de_milhar: %d", dezena_de_milhar);
centena_de_milhar = digito / 100000;
printf ("\ncentena_de_milhar: %d", centena_de_milhar);
return 0;
}
