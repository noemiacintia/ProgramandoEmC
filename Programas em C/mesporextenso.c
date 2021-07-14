#include <stdio.h>
#include <locale.h>

int main ()
{
    int dia, mes, ano, data;

    setlocale (LC_ALL,"");
    printf("o programa exibe o mês por extenso quando o usuário digita uma data:\n\n");
    printf("informe uma data com 8 dígitos e sem espaço entre os números: ");
    scanf("%d", &data);
    ano = data % 10000;
    mes = data / 10000 % 100;
    dia = data / 1000000;
    switch (mes)
    {
    case 1:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Janeiro de %04d", dia, ano);
        }
        break;
    case 2:
        if (dia >= 1 && dia <= 29)
        {
            printf("%02d de Fevereiro de %04d", dia, ano);
        }
        break;
    case 3:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Março de %04d", dia, ano);
        }
        break;
    case 4:
        if (dia >= 1 && dia <= 30)
        {
            printf("%02d de Abril de %04d", dia, ano);
        }
        break;
    case 5:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Maio de %04d", dia, ano);
        }
        break;
    case 6:
        if (dia >= 1 && dia <= 30)
        {
            printf("%02d de Junho de %04d", dia, ano);
        }
        break;
    case 7:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Julho de %04d", dia, ano);
        }
        break;
    case 8:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Agosto de %04d", dia, ano);
        }
        break;
    case 9:
        if (dia >= 1 && dia <= 30)
        {
            printf("%02d de Setembro de %04d", dia, ano);
        }
        break;
    case 10:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Outubro de %04d", dia, ano);
        }
        break;
    case 11:
        if (dia >= 1 && dia <= 30)
        {
            printf("%02d de Novembro de %04d", dia, ano);
        }
        break;
    case 12:
        if (dia >= 1 && dia <= 31)
        {
            printf("%02d de Dezembro de %04d", dia, ano);
        }
    }
return 0;
}
