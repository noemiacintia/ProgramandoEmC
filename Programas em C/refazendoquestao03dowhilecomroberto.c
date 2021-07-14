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

int main () {
    int palpite, inicio_intervalo, final_intervalo, valor;
    int jogador_da_vez = 0;

    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Adivinha n�mero num intervalo - 2 jogadores:\n\n");
    printf("Entre com os limites inferior e superior do intervalo (inteiro separados por espa�o): ");
    scanf ("%d %d", &inicio_intervalo, &final_intervalo);
    valor = inicio_intervalo + rand() % (final_intervalo - inicio_intervalo + 1);
    do {
        jogador_da_vez = jogador_da_vez == 1 ? 2 : 1;
        printf("Jogador %d: ", jogador_da_vez);
        scanf("%d", &palpite);
        if (palpite == valor)
            printf("Jogador %d acertouuuu!\nO valor era: %d", jogador_da_vez, valor);
        else if (palpite > valor)
            printf("Palpite muito alto!\n");
        else
            printf("Palpite muito baixo!\n");
    }
    while (palpite != valor);
    return 0;
}
