#include <stdio.h>
#include <locale.h>

int main ()
{
    int natural, total = 0, numero_final;

    setlocale(LC_ALL, "");
    printf("O programa soma os naturais at� n:\n");
    printf("At� que n�mero voc� quer somar? ");
    scanf("%d", &numero_final);
    for (natural=1; natural <= numero_final; natural++)
    {
        total += natural;
    }
    printf("A soma at� %d �: %d", numero_final, total);
    return 0;
}
