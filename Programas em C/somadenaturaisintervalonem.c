#include <stdio.h>
#include <locale.h>

int main ()
{
    int contador, soma_dos_naturais = 0, numero_inicial, numero_final;

    setlocale(LC_ALL, "");
    printf("O programa soma os naturais de n até m:\n");
    printf("Informe o primeiro número do intervalo a ser somado: ");
    scanf("%d", &numero_inicial);
    printf("Informe o último número do intervalo a ser somado: ");
    scanf("%d", &numero_final);
    for (contador = numero_inicial; contador <= numero_final; contador++)
    {
        soma_dos_naturais += contador;
    }
    printf("A soma de %d até %d é: %d", numero_inicial, numero_final, soma_dos_naturais);
    return 0;
}
