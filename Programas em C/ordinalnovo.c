#include <stdio.h>
#include <locale.h>

int main ()
{
    int dezena, unidade, centena, digito;
    setlocale (LC_ALL,"");
    printf ("converte inteiros entre 1 e 999 em numeral ordinal:\n\n");
    printf ("informe um inteiro entre 1 e 999: ");
    scanf ("%d", &digito);
    unidade = digito % 10;
    dezena = digito / 10 % 10;
    centena = digito / 100 % 10;
    printf("\n O numeral ordinal correspondente do n�mero %d �: \n", digito);
    printf("    ");
        switch (centena)
    {
    case 1:
        printf (" cent�simo");
        break;
    case 2:
        printf (" ducent�simo");
        break;
    case 3:
        printf (" tricent�simo");
        break;
    case 4:
        printf (" quadringent�simo");
        break;
    case 5:
        printf (" quingent�simo");
        break;
    case 6:
        printf (" seiscent�simo");
        break;
    case 7:
        printf (" setingent�simo");
        break;
    case 8:
        printf (" octingent�simo");
        break;
    case 9:
        printf (" nongent�simo");
        break;
    default:
        printf(" ");
        break;
        if (centena > 0)
        {
            printf(" ");
        }
    }
    switch (dezena)
    {
    case 1:
        printf (" d�cimo");
        break;
    case 2:
        printf (" vig�simo");
        break;
    case 3:
        printf (" trig�simo");
        break;
    case 4:
        printf (" quadrag�simo");
        break;
    case 5:
        printf (" quinquag�simo");
        break;
    case 6:
        printf (" sexag�simo");
        break;
    case 7:
        printf (" septuag�simo");
        break;
    case 8:
        printf (" octog�simo");
        break;
    case 9:
        printf (" nonag�simo");
        break;
    default:
        printf("  ");
    }
    switch (unidade)
    {
    case 1:
        printf (" primeiro");
        break;
    case 2:
        printf (" segundo");
        break;
    case 3:
        printf (" terceiro");
        break;
    case 4:
        printf (" quarto");
        break;
    case 5:
        printf (" quinto");
        break;
    case 6:
        printf (" sexto");
        break;
    case 7:
        printf (" s�timo");
        break;
    case 8:
        printf (" oitavo");
        break;
    case 9:
        printf (" nono");
        break;
    default:
        printf("  ");
    }
    return 0;
}
