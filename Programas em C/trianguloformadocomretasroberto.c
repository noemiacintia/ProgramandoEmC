/*
1) Obter o comprimento dos três lados do triângulo (a, b e c);
2) Se os 3 lados não formam um triângulo, então
    - Mostrar: "Estas retas não formam um triângulo"
    a + b <= c || b + c <= a || a + c <= b
   senão
    - Se os 3 lados forem iguais, então
        - Mostrar: "O triângulo é equilátero!"
      senão
        - Se 2 lados forem iguais, então
            - Mostrar: "O triângulo é isósceles!"
      senão
      - Mostrar: "O triângulo é escaleno!"
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    float reta1, reta2, reta3;

    setlocale(LC_ALL, "");
    printf("O programa analisa se 3 retas formam um triângulo:");
    printf("\nInforme o comprimento da reta 1: ");
    scanf("%f", &reta1);
    printf("\nInforme o comprimento da reta2: ");
    scanf("%f", &reta2);
    printf("\nInforme o comprimento da reta 3: ");
    scanf("%f", &reta3);
    if (reta1 + reta2 <= reta3 || reta2 + reta3 <= reta1 || reta1 + reta3 <= reta2)
        printf("Estas retas não formam um triângulo");
    else if (reta1 == reta2 && reta1 == reta3 && reta2 == reta3){
        printf("O triângulo é equilátero!");
    }
    else if (reta1 == reta2 || reta1 == reta3 || reta2 == reta3){
        printf("O triângulo é isósceles!");
        }
    else
        printf("O triângulo é escaleno!");
        return 0;
}
