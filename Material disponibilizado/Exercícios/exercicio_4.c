/*
    Exercício 4
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    int opcao;
    float raio, base, altura, lado;
    float area_circulo, area_triangulo, area_quadrado, area_retangulo;

	setlocale(LC_ALL, "");
    printf("Cálculo da área de uma figura geometrica plana:\n\n");
    printf("Qual a figura que você deseja calcular a área?\n");
    printf("\t1 - Círculo\n\t2 - Triângulo\n\t3 - Quadrado\n\t4 - Retângulo\n"
           "\t    Opção: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("\nInforme o comprimento do raio do círculo em cm:\n");
        scanf("%f", &raio);
        area_circulo = 3.14159 * pow(raio, 2);
        printf("\nA área do círculo é %.2f cm².\n", area_circulo);
    }
    else
        if (opcao == 2) {
            printf("\nInforme o comprimento da base do triângulo em cm:\n");
            scanf("%f", &base);
            printf("\nInforme o comprimento da altura do triângulo em cm:\n");
            scanf("%f", &altura);
            area_triangulo = base * altura / 2;
            printf("\nA área do triangulo é %.2f cm².\n", area_triangulo);
        }
        else
            if (opcao == 3) {
                printf("\nInforme o comprimento do lado do quadrado em cm:\n");
                scanf("%f", &lado);
                area_quadrado = pow(lado, 2);
                printf("\nA área do quadrado é %.2f cm².\n", area_quadrado);
            }
            else
                if (opcao == 4) {
                    printf("\nInforme o comprimento da base do retângulo:\n");
                    scanf("%f", &base);
                    printf("\nInforme o comprimento do lado do retangulo em cm:\n");
                    scanf("%f", &altura);
                    area_retangulo = base * altura;
                    printf("\nA área do retângulo é %.2f cm².\n", area_retangulo);
                }
                else
                    printf("\nOpção inválida!\n");
    return 0;
}
