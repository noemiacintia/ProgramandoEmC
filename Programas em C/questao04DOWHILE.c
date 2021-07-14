/*
Exercício 4:
Estenda o programa anterior para serem realizadas várias jogadas.
As vitórias de cada jogador serão contabilizadas.
Vencerá o jogo o jogador que atingir 10 vitórias ou
o que conseguir 3 vitórias consecutivas.

Programa anterior:
3)Faça um programa que usando um comando do-while implemente a brincadeira
de adivinhar um número num intervalo do inteiros por dois jogadores.
O computador escolherá o número a ser descoberto pelo usuário, usando a
função rand(), mas antes, um dos jogadores escolherá os valores inicial e
final do intervalo. Os palpites dos jogadores (jogador-1 e jogador-2) serão
alternados e o computados dará as mensagens: "O jogador-i acertou" (i será 1 ou 2),
"Palpite muito baixo" ou "Palpite muito alto".
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int palpite, inicio_intervalo, final_intervalo, escolha, jogador_da_vez;
    int conta_vitorias_1, conta_vitorias_2, conta_rodadas;
    int ganhador_anterior, conta_consecutivas, conta_palpites;

    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Ganha o jogador que obtiver primeiro 10 vitórias ou 3 vitórias consecutivas:\n\n");
    printf("Entre com os limites inferior e superior do intervalo (inteiro separados por espaço): ");
    scanf ("%d %d", &inicio_intervalo, &final_intervalo);
    conta_rodadas = 0;
    conta_vitorias_1 = 0;
    conta_vitorias_2 = 0;
    ganhador_anterior = 0;
    do   // Repetição de rodadas
    {
        ++conta_rodadas;
        printf("\nInício da rodada %d:", conta_rodadas);
        // Escole novo valor
        escolha = inicio_intervalo + rand() % (final_intervalo - inicio_intervalo + 1);
        jogador_da_vez = 0;
        conta_palpites = 0;
        do   // Repetição de palpites
        {
            jogador_da_vez = jogador_da_vez != 1 ? 1 : 2;
            printf("\nJogador %d: ", jogador_da_vez);
            scanf("%d", &palpite);
            ++conta_palpites;
            if (palpite == escolha)
            {
                if (jogador_da_vez == 1)
                    ++conta_vitorias_1;
                else
                    ++conta_vitorias_2;
                printf("ganhador_anterior = %d   jogador_da_vez = %d\n",
                       ganhador_anterior, jogador_da_vez);
                if (ganhador_anterior != jogador_da_vez)
                    conta_consecutivas = 1;
                else
                    ++conta_consecutivas;
                ganhador_anterior = jogador_da_vez;
                printf("Jogador %d acertou com %d palpites!\n",
                       jogador_da_vez, conta_palpites, escolha);
                printf("Rodadas = %d   Vitórias 1 = %d   Vitórias 2 = %d   "
                       "Consecutivas = %d\n",conta_rodadas, conta_vitorias_1,
                       conta_vitorias_2, conta_consecutivas);
            }
            else if (palpite > escolha)
                printf("Palpite muito alto!");
            else
                printf("Palpite muito baixo!");
        }
        while (palpite != escolha);
    }
    while (conta_vitorias_1 < 10 && conta_vitorias_2 < 10 && conta_consecutivas < 3);
    if (conta_consecutivas == 3)
        printf("\nJogador %d ganhou o jogo com 3 vitórias consecutivas!\n", jogador_da_vez);
    else
        printf("\nJogador %d ganhou o jogo com 10 vitórias!\n", jogador_da_vez);
    return 0;
}
