#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    char x;
    float   area_quadrado, lado, area_retangulo, base, altura, area_triangulo,
            raio, area_circulo;

    setlocale(LC_ALL, "");
    printf("\n calculando áreas:\n");
    printf("\n Digite o número correspondente a área que quer calcular:");
    printf("\n\t1 - Quadrado\n\t2 - Retângulo\n\t3 - Triângulo\n\t4 - Círculo\n\tFigura número: ");
    scanf("%c", &x);
    switch (x){
    case '1':
        printf("informe o valor do lado do quadrado: ");
        scanf("%f", &lado);
        area_quadrado = pow(lado, 2);
        printf("a área do quadrado é: %.2f", area_quadrado);
        break;
    case '2':
        printf("informe o valor da base do retângulo:");
        scanf("%f", &base);
        printf("informe o valor da altura do retângulo:");
        scanf("%f", &altura);
        area_retangulo = base * altura;
        printf("a área do retângulo é: %.2f", area_retangulo);
        break;
    case '3':
        printf("informe o valor da base do triângulo: ");
        scanf("%f", &base);
        printf("informe o valor da altura do triângulo: ");
        scanf("%f", &altura);
        area_triangulo = (base * altura) / 2;
        printf("a área do triângulo é: %.2f", area_triangulo);
        break;
    case '4':
        printf("informe o valor do raio do circulo: ");
        scanf("%f", &raio);
        area_circulo = 3.14 * pow(raio, 2);
        printf("a área do círculo é: %.2f", area_circulo);
        break;
    }
    return 0;
}
