#include <stdio.h>


int main()
{
}
int dezena, unidade, centena, milhar, dezena_de_milhar, centena_de_milhar, digito;
printf ("informe um inteiro entre 1 e 999: ");
scanf ("%d", &digito);
unidade = digito % 10;
scanf("%d", &unidade);
dezena = digito / 10 % 10;
scanf("%d", &dezena);
centena = digito / 100 % 10;
scanf("%d", &centena);
milhar = digito / 1000 % 10;
scanf("%d", &milhar);
dezena_de_milhar = digito / 10000 % 10;
scanf("%d", &dezena_de_milhar);
centena_de_milhar = digito / 100000;
scanf("%d", &centena_de_milhar);
return 0;
}
