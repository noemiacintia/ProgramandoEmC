//  Ordinais de 1 à 999:

#include <stdio.h>
#include <stdlib.h>

int main(){

    int Cardinal, Unidade, Dezena, Centena;

    printf("cardinais em ordinais\n\n");
    printf("Digite um numero inteiro entre 1 e 999:\n");
    scanf("%d", &Cardinal);

    Centena = Cardinal / 100;

    if(Centena > 0){ //Caso exista centenas, subitrair a centena antes de checar as dezenas
        Dezena =  (Cardinal - (Centena * 100)) / 10 ;
    }else{
        Dezena = Cardinal / 10;
    }

    Unidade = Cardinal % 10;

    printf("\n O Numeral Ordinal correspondente do numero %d eh: \n", Cardinal);
    printf("    ");
    switch(Centena){

        case 1:
            printf("Centesimo");
            break;

        case 2:
            printf("Ducentesimo");
            break;

        case 3:
            printf("Tricentesimo");
            break;

        case 4:
            printf("Quadrigentesimo");
            break;

        case 5:
            printf("Quingentesimo");
            break;

        case 6:
            printf("Seiscentesimo");
            break;

        case 7:
            printf("Septigentesimo");
            break;

        case 8:
            printf("Octigentesimo");
            break;

        case 9:
            printf("Nongentesimo");
            break;

        default:
            printf("");
            break;

    }

    if(Centena > 0){ printf(" "); } //Adiciona espaco entre Centena e Dezena

    switch(Dezena){

        case 1:
            printf("Decimo");
            break;

        case 2:
            printf("Vigesimo");
            break;

        case 3:
            printf("Trigesimo");
            break;

        case 4:
            printf("Quadragesimo");
            break;

        case 5:
            printf("Quinquagesimo");
            break;

        case 6:
            printf("Sexagesimo");
            break;

        case 7:
            printf("Septagesimo");
            break;

        case 8:
            printf("Octogesimo");
            break;

        case 9:
            printf("Nonagesimo");
            break;

        default:
            printf("");
            break;

    }

    if(Dezena > 0){ printf(" "); } //Adiciona espaco entre Dezena e Unidade.

    switch (Unidade){

        case 1:
            printf("Primeiro");
            break;

        case 2:
            printf("Segundo");
            break;

        case 3:
            printf("Terceiro");
            break;

        case 4:
            printf("Quarto");
            break;

        case 5:
            printf("Quinto");
            break;

        case 6:
            printf("Sexto");
            break;

        case 7:
            printf("Setimo");
            break;

        case 8:
            printf("Oitavo");
            break;

        case 9:
            printf("Nono");
            break;

        default:
            printf("");

    }

    printf("\n\n\n");//Adiciona linhas para separar o resultado final;

    return 0;
}
