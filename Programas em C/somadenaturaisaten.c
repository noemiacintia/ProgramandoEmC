#include <stdio.h>
#include <locale.h>

int main ()
{
    int natural, total = 0, numero_final;

    setlocale(LC_ALL, "");
    printf("O programa soma os naturais até n:\n");
    printf("Até que número você quer somar? ");
    scanf("%d", &numero_final);
    for (natural=1; natural <= numero_final; natural++)
    {
        total += natural;
    }
    printf("A soma até %d é: %d", numero_final, total);
    return 0;
}
