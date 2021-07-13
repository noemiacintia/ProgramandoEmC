/*
    Exercício 5
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int cardinal, dezena, unidade;

    setlocale(LC_ALL, "");
    printf("Conversão de um numeral cardinal em ordinal\n\n");
    printf("Digite um numeral cardinal entre 1 e 99:\n");
    scanf("%d", &cardinal);
    if (cardinal >= 1 && cardinal <= 99) {
        printf("\nO ordinal correspondente é: ");
        dezena = cardinal / 10;
        unidade = cardinal % 10;
        if (dezena == 1)
            printf("décimo");
        else if (dezena == 2)
            printf("vigésimo");
        else if (dezena==3)
            printf("trigésimo");
        else if (dezena == 4)
            printf("quadragésimo");
        else if (dezena == 5)
            printf("quinquagésimo");
        else if (dezena == 6)
            printf("sexagésimo");
        else if (dezena == 7)
            printf("septuagésimo");
        else if (dezena == 8)
            printf("octogésimo");
        else if (dezena == 9)
            printf("nonagésimo");
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
            printf("sétimo");
        else if (unidade == 8)
            printf("oitavo");
        else if (unidade == 9)
            printf("nono");
    }
    else
        printf("\nNumeral cardinal inválido!");
    printf("\n");
    return 0;
}
