#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    int x;
    float   area_quadrado, lado, area_retangulo, base, altura, area_triangulo,
            raio, area_circulo;
    setlocale(LC_ALL, "");
    printf("\n calculando �reas:\n");
    printf("\n Digite o n�mero correspondente a �rea que quer calcular:");
    printf("\n\t1 - Quadrado\n\t2 - Ret�ngulo\n\t3 - Tri�ngulo\n\t4 - C�rculo\n\tFigura n�mero: ");
    scanf("%d", &x);
    if (x == 1){
        printf("informe o valor do lado do quadrado:");
        scanf("%f", &lado);
        area_quadrado = pow(lado, 2);
        printf("a �rea do quadrado �: %.2f", area_quadrado);
    }
    else if (x == 2){
        printf("informe o valor da base do ret�ngulo:");
        scanf("%f", &base);
        printf("informe o valor da altura do ret�ngulo:");
        scanf("%f", &altura);
        area_retangulo = base * altura;
        printf("a �rea do ret�ngulo �: %.2f", area_retangulo);
    }
    else if (x ==3){
            printf("informe o valor da base do tri�ngulo:");
            scanf("%f", &base);
            printf("informe o valor da altura do tri�ngulo:");
            scanf("%f", &altura);
            area_triangulo = (base * altura) / 2;
            printf("a �rea do tri�ngulo �: %.2f", area_triangulo);
        }
        else if (x == 4){
            printf("informe o valor do raio do circulo:");
            scanf("%f", &raio);
            area_circulo = 3.14 * pow(raio, 2);
            printf("a �rea do c�rculo �: %.2f", area_circulo);
        }
    return 0;
}
