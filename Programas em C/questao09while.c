#include<stdio.h>
#include <locale.h>

int main()
{
    int numero, contador, resultado = 0;

    setlocale(LC_ALL, "");
    printf("Identifica n�meros primos: \n");
    printf("Digite um n�mero: ");
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
        printf("%d � um n�mero primo\n", numero);
    else
        printf("%d n�o � um n�mero primo\n", numero);
    return 0;
}
