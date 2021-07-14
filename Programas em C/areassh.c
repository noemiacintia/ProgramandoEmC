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
        printf("\n\tCalculando �reas:\n");
        printf("\n\tOp��es: ");
        printf("\n\t1 - Quadrado\n\t2 - Ret�ngulo\n\t3 - Tri�ngulo\n\t4 - C�rculo\n\t9"
               " - Encerra Programa\n\tDigite sua op��o: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nInforme o valor do lado do quadrado:");
            scanf("%f", &lado);
            area_quadrado = pow(lado, 2);
            printf("A �rea do quadrado �: %.2f\n", area_quadrado);
            break;
        case 2:
            printf("\nInforme o valor da base do ret�ngulo:");
            scanf("%f", &base);
            printf("Informe o valor da altura do ret�ngulo:");
            scanf("%f", &altura);
            area_retangulo = base * altura;
            printf("A �rea do ret�ngulo �: %.2f\n", area_retangulo);
            break;
        case 3:
            printf("\nInforme o valor da base do tri�ngulo:");
            scanf("%f", &base);
            printf("Informe o valor da altura do tri�ngulo:");
            scanf("%f", &altura);
            area_triangulo = (base * altura) / 2;
            printf("A �rea do tri�ngulo �: %.2f\n", area_triangulo);
            break;
        case 4:
            printf("\nInforme o valor do raio do circulo:");
            scanf("%f", &raio);
            area_circulo = 3.14159 * pow(raio, 2);
            printf("a �rea do c�rculo �: %.2f\n", area_circulo);
            break;
        case 9:
            printf("\nFim do programa!\n");
            break;
        default:
            printf("\nOp��o Inv�lida!\n");
        }
   system("\npause");
    }
        while (opcao !=9);
        return 0;
    }
