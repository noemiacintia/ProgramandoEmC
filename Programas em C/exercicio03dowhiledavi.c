#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    int vez = 0, jogador, teste, numero, min, max;
    srand(time(NULL));
     setlocale(LC_ALL,"");
    printf("***** Jogo da sorte *****\n\n");
    printf("Escolha um intervalo de números\n");
    printf("Indicando o valor inicial e  final:\n");
    scanf("%d %d", &min, &max);
    numero = rand() % max + min;
    do{
        printf("Jogador %d\n", vez % 2 + 1);
        printf("Qual foi o numero sorteado?\n ");
        scanf("%d", &jogador);
        system("cls");
        teste = (jogador == numero) ? 1 : (jogador < numero) ? 2 : 3;
        switch (teste){
        case 1:
            numero = rand() % max + min;
            printf("Jogador %d ganhou\n", vez % 2 + 1);
            break;
        case 2:
            printf("Palpite muito baixo\n");
            break;
        case 3:
            printf("Palpite muito alto\n");
        }
        vez++;
    }while(teste!=1);
}
