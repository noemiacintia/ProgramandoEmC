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
    int palpite, jogo, inicio_intervalo, final_intervalo, valor, vez = 0;

    setlocale(LC_ALL, "");
    printf("Adivinha n�mero num intervalo - 2 jogadores:\n\n");
    srand(time(NULL));
    printf("Intervalo entre (use espa�o para separar o intervalo): ");
    scanf ("%d %d", &inicio_intervalo, &final_intervalo);
    valor = inicio_intervalo + rand() % (final_intervalo - inicio_intervalo + 1);
    do
    {
        printf("Palpite do jogador %d: ", vez % 2 + 1);
        scanf("%d", &palpite);
        jogo = (palpite == valor) ? 1 : (palpite < valor) ? 2 : 3;
        switch (jogo){
        case 1:
            printf("Jogador %d ganhou!\n", vez % 2 + 1);
            break;
        case 2:
            printf("Palpite muito baixo\n");
            break;
        case 3:
            printf("Palpite muito alto\n");
        }
        vez++;
    }while(jogo!=1);
    return 0;
}
