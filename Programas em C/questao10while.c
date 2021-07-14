#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    int valor, palpite;

    setlocale(LC_ALL, "");
    printf("Gera um(1) valor aleatório de 0 a 100 para o usuário tentar advinhar:\n\n");
    srand(time(NULL));
    printf("Digite sua primeira tentativa: ");
    scanf ("%d", &palpite);
    valor = rand () % 100 + 1;
    while (valor != palpite)
    {
        if (valor > palpite)
        {
            printf("Aumente um pouco seu palpite!\n");
        }
        else
        {
            printf("Diminua um pouco seu palpite!\n");
        }
        printf("\nDigite seu novo palpite: ");
        scanf ("%d", &palpite);
    }
    printf("\nVocê acertou!!!\nO valor era: %d\n\n", valor);
    return 0;
}
