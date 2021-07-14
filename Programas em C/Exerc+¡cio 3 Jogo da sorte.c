#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# include <locale.h>
int main()
{
    int numero, jogador1, jogador2, max, min, verificar;
    srand(time(NULL));
   setlocale(LC_ALL,"");
    printf("Jogo da sorte\n\n");
    printf("Escolha um intervalo de números\n");
    printf("Indicando o valor inicial e final:\n");
    scanf("%d %d", &min, &max);
    numero = rand() % max + min;
    do {
        printf("Jogador 1\n");
        printf("Qual foi o número sorteado?\n ");
        scanf("%d",&jogador1);
        system("cls");
        if (jogador1 == numero){
            printf("Jogador1 ganhou!!!\n");
            verificar++;
        }
        else{
            if (jogador1 < numero) {
                printf("Palpite muito pequeno\n");
            }
            else {
                    printf("Palpite muito grande\n");
                }
            printf("Jogador 2\n");
            printf("Qual foi o numero sorteado? ");
            scanf("%d",&jogador2);
            system("cls");
            if (jogador2 == numero){
                printf("Jogador2 ganhou!!!");
                verificar++;
            }
            else if (jogador2 < numero){
                    printf("Palpite muito pequeno\n");
                }
                else {
                        printf("Palpite muito grande\n");
                }
            }
    }while(verificar==0);
}

