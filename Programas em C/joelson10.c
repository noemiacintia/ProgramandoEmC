/* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
● Ter pelo menos 65 anos;
● Ou ter trabalhado pelo menos 30 anos;
● Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade, tempo;

    setlocale(LC_ALL, "");
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    printf("Tempo de serviço: ");
    scanf("%d", &tempo);
    if((idade >= 65) || (tempo >= 30) || (idade >= 60 && tempo >= 25))
        printf("Você pode se aposentar!");
    else
        printf("Você não pode se aposentar!");
    return 0;
}
