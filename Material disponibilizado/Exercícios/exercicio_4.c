/*
    Exerc�cio 4
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    int opcao;
    float raio, base, altura, lado;
    float area_circulo, area_triangulo, area_quadrado, area_retangulo;

	setlocale(LC_ALL, "");
    printf("C�lculo da �rea de uma figura geometrica plana:\n\n");
    printf("Qual a figura que voc� deseja calcular a �rea?\n");
    printf("\t1 - C�rculo\n\t2 - Tri�ngulo\n\t3 - Quadrado\n\t4 - Ret�ngulo\n"
           "\t    Op��o: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("\nInforme o comprimento do raio do c�rculo em cm:\n");
        scanf("%f", &raio);
        area_circulo = 3.14159 * pow(raio, 2);
        printf("\nA �rea do c�rculo � %.2f cm�.\n", area_circulo);
    }
    else
        if (opcao == 2) {
            printf("\nInforme o comprimento da base do tri�ngulo em cm:\n");
            scanf("%f", &base);
            printf("\nInforme o comprimento da altura do tri�ngulo em cm:\n");
            scanf("%f", &altura);
            area_triangulo = base * altura / 2;
            printf("\nA �rea do triangulo � %.2f cm�.\n", area_triangulo);
        }
        else
            if (opcao == 3) {
                printf("\nInforme o comprimento do lado do quadrado em cm:\n");
                scanf("%f", &lado);
                area_quadrado = pow(lado, 2);
                printf("\nA �rea do quadrado � %.2f cm�.\n", area_quadrado);
            }
            else
                if (opcao == 4) {
                    printf("\nInforme o comprimento da base do ret�ngulo:\n");
                    scanf("%f", &base);
                    printf("\nInforme o comprimento do lado do retangulo em cm:\n");
                    scanf("%f", &altura);
                    area_retangulo = base * altura;
                    printf("\nA �rea do ret�ngulo � %.2f cm�.\n", area_retangulo);
                }
                else
                    printf("\nOp��o inv�lida!\n");
    return 0;
}
