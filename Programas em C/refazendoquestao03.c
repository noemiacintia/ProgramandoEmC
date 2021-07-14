/*
3)Faça um programa que usando um comando do-while implemente a brincadeira
de adivinhar um número num intervalo do inteiros por dois jogadores.
O computador escolherá o número a ser descoberto pelo usuário, usando a
função rand(), mas antes, um dos jogadores escolherá os valores inicial e
final do intervalo. Os palpites dos jogadores (jogador-1 e jogador-2) serão
alternados e o computados dará as mensagens: “O jogador-i acertou” (i será 1 ou 2),
“Palpite muito baixo” ou “Palpite muito alto”.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int palpite, jogo, inicio_intervalo, final_intervalo, valor, vez = 0;

    setlocale(LC_ALL, "");
    printf("Adivinha número num intervalo - 2 jogadores:\n\n");
    srand(time(NULL));
    printf("Intervalo entre (use espaço para separar o intervalo): ");
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
