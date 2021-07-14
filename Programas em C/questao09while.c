#include<stdio.h>
#include <locale.h>

int main()
{
    int numero, contador, resultado = 0;

    setlocale(LC_ALL, "");
    printf("Identifica números primos: \n");
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (contador = 2; contador <= numero / 2; contador++)
    {
        while (numero % contador == 0)
        {
            resultado++;
            break;
        }
    }
    if (resultado == 0)
        printf("%d é um número primo\n", numero);
    else
        printf("%d não é um número primo\n", numero);
    return 0;
}
