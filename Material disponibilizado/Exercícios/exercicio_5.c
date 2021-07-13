/*
    Exerc�cio 5
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int cardinal, dezena, unidade;

    setlocale(LC_ALL, "");
    printf("Convers�o de um numeral cardinal em ordinal\n\n");
    printf("Digite um numeral cardinal entre 1 e 99:\n");
    scanf("%d", &cardinal);
    if (cardinal >= 1 && cardinal <= 99) {
        printf("\nO ordinal correspondente �: ");
        dezena = cardinal / 10;
        unidade = cardinal % 10;
        if (dezena == 1)
            printf("d�cimo");
        else if (dezena == 2)
            printf("vig�simo");
        else if (dezena==3)
            printf("trig�simo");
        else if (dezena == 4)
            printf("quadrag�simo");
        else if (dezena == 5)
            printf("quinquag�simo");
        else if (dezena == 6)
            printf("sexag�simo");
        else if (dezena == 7)
            printf("septuag�simo");
        else if (dezena == 8)
            printf("octog�simo");
        else if (dezena == 9)
            printf("nonag�simo");
        if (dezena != 0 && unidade != 0)
            printf(" ");
        if (unidade == 1)
            printf("primeiro");
        else if (unidade == 2)
            printf("segundo");
        else if (unidade == 3)
            printf("terceiro");
        else if (unidade == 4)
            printf("quarto");
        else if (unidade == 5)
            printf("quinto");
        else if (unidade == 6)
            printf("sexto");
        else if (unidade == 7)
            printf("s�timo");
        else if (unidade == 8)
            printf("oitavo");
        else if (unidade == 9)
            printf("nono");
    }
    else
        printf("\nNumeral cardinal inv�lido!");
    printf("\n");
    return 0;
}
