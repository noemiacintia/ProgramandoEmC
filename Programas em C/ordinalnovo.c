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
    printf("\n O numeral ordinal correspondente do número %d é: \n", digito);
    printf("    ");
        switch (centena)
    {
    case 1:
        printf (" centésimo");
        break;
    case 2:
        printf (" ducentésimo");
        break;
    case 3:
        printf (" tricentésimo");
        break;
    case 4:
        printf (" quadringentésimo");
        break;
    case 5:
        printf (" quingentésimo");
        break;
    case 6:
        printf (" seiscentésimo");
        break;
    case 7:
        printf (" setingentésimo");
        break;
    case 8:
        printf (" octingentésimo");
        break;
    case 9:
        printf (" nongentésimo");
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
        printf (" décimo");
        break;
    case 2:
        printf (" vigésimo");
        break;
    case 3:
        printf (" trigésimo");
        break;
    case 4:
        printf (" quadragésimo");
        break;
    case 5:
        printf (" quinquagésimo");
        break;
    case 6:
        printf (" sexagésimo");
        break;
    case 7:
        printf (" septuagésimo");
        break;
    case 8:
        printf (" octogésimo");
        break;
    case 9:
        printf (" nonagésimo");
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
        printf (" sétimo");
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
