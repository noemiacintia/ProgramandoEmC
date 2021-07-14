#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    float   area_quadrado, lado, area_retangulo, base, altura, area_triangulo,
            raio, area_circulo;

    setlocale(LC_ALL, "");
    do
    {
        system("cls");
        printf("\n\tCalculando áreas:\n");
        printf("\n\tOpções: ");
        printf("\n\t1 - Quadrado\n\t2 - Retângulo\n\t3 - Triângulo\n\t4 - Círculo\n\t9"
               " - Encerra Programa\n\tDigite sua opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nInforme o valor do lado do quadrado:");
            scanf("%f", &lado);
            area_quadrado = pow(lado, 2);
            printf("A área do quadrado é: %.2f\n", area_quadrado);
            break;
        case 2:
            printf("\nInforme o valor da base do retângulo:");
            scanf("%f", &base);
            printf("Informe o valor da altura do retângulo:");
            scanf("%f", &altura);
            area_retangulo = base * altura;
            printf("A área do retângulo é: %.2f\n", area_retangulo);
            break;
        case 3:
            printf("\nInforme o valor da base do triângulo:");
            scanf("%f", &base);
            printf("Informe o valor da altura do triângulo:");
            scanf("%f", &altura);
            area_triangulo = (base * altura) / 2;
            printf("A área do triângulo é: %.2f\n", area_triangulo);
            break;
        case 4:
            printf("\nInforme o valor do raio do circulo:");
            scanf("%f", &raio);
            area_circulo = 3.14159 * pow(raio, 2);
            printf("a área do círculo é: %.2f\n", area_circulo);
            break;
        case 9:
            printf("\nFim do programa!\n");
            break;
        default:
            printf("\nOpção Inválida!\n");
        }
   system("\npause");
    }
        while (opcao !=9);
        return 0;
    }
