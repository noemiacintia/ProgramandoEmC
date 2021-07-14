/*
3)Fa�a um programa que usando um comando do-while implemente a brincadeira
de adivinhar um n�mero num intervalo do inteiros por dois jogadores.
O computador escolher� o n�mero a ser descoberto pelo usu�rio, usando a
fun��o rand(), mas antes, um dos jogadores escolher� os valores inicial e
final do intervalo. Os palpites dos jogadores (jogador-1 e jogador-2) ser�o
alternados e o computados dar� as mensagens: �O jogador-i acertou� (i ser� 1 ou 2),
�Palpite muito baixo� ou �Palpite muito alto�.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int palpite1, palpite2, inicio_intervalo, final_intervalo, valor, conta_palpite = 0, conta_rodadas = 0;

    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Adivinha n�mero num intervalo - 2 jogadores:\n\n");
    printf("Entre com os limites inferior e superior do intervalo (inteiro separados por espa�o): ");
    scanf ("%d %d", &inicio_intervalo, &final_intervalo);
    valor = inicio_intervalo + rand() % (final_intervalo - inicio_intervalo + 1);
    do
    {
        ++conta_rodadas;
        printf("\nRodada %d: \n", conta_rodadas);
        ++conta_palpite;
        if (conta_palpite % 2 == 1)
        {
            printf("Jogador 1: ");
            scanf("%d", &palpite1);
            if (palpite1 > valor)
            {
                printf("Palpite muito alto!\n");
            }
            else if (palpite1 < valor)
            {
                printf("Palpite muito baixo!\n");
            }
        }
        else
        {
            printf("Jogador 2: ");
            scanf("%d", &palpite2);
            if (palpite2 > valor)
            {
                printf("Palpite muito alto!\n");
            }
            else if (palpite2 < valor)
            {
                printf("Palpite muito baixo!\n");
            }
        }
    }
    while (palpite1 != valor && palpite2 != valor);
    if (palpite1 == valor)
    {
        printf("Jogador 1 acertou!\nO valor era: %d", valor);
    }
    else
    {
        printf("Jogador 2 acertou!\nO valor era: %d", valor);
    }
    return 0;
}
