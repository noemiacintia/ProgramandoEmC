// Autor: Noêmia Cíntia Sales Santos da Silva

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    // declaração de variáveis
    int vez = 0, jogador, teste, numero, min, max;
    // função para sortear o número
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    printf("***** Jogo da sorte *****\n\n");
    printf("Escolha um intervalo de números\n");
    printf("Indicando o valor inicial e  final: ");
    scanf("%d %d", &min, &max);
    // sorteando o número dentro do intervalo informado
    numero = rand() % max + min;
    do{
        printf("Jogador %d\n", vez % 2 + 1);
        printf("Qual foi o numero sorteado?\n ");
        scanf("%d", &jogador);
        system("cls");
        // testando o palpite do jogador
        teste = (jogador == numero) ? 1 : (jogador < numero) ? 2 : 3;
        switch (teste){
        // caso tenha acertado
        case 1:
            numero = rand() % max + min;
            printf("Jogador %d ganhou\n", vez % 2 + 1);
            break;
        // caso tenha dado um palpite muito baixo
        case 2:
            printf("Palpite muito baixo\n");
            break;
        // caso tenha dado um palpite muito alto
        case 3:
            printf("Palpite muito alto\n");
        }
        vez++;
    // pois quando for 1 um dos jogadores terá vencido
    }while(teste!=1);
}
