/*
1) Obter o comprimento dos tr�s lados do tri�ngulo (a, b e c);
2) Se os 3 lados n�o formam um tri�ngulo, ent�o
    - Mostrar: "Estas retas n�o formam um tri�ngulo"
    a + b <= c || b + c <= a || a + c <= b
   sen�o
    - Se os 3 lados forem iguais, ent�o
        - Mostrar: "O tri�ngulo � equil�tero!"
      sen�o
        - Se 2 lados forem iguais, ent�o
            - Mostrar: "O tri�ngulo � is�sceles!"
      sen�o
      - Mostrar: "O tri�ngulo � escaleno!"
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    float reta1, reta2, reta3;

    setlocale(LC_ALL, "");
    printf("O programa analisa se 3 retas formam um tri�ngulo:");
    printf("\nInforme o comprimento da reta 1: ");
    scanf("%f", &reta1);
    printf("\nInforme o comprimento da reta2: ");
    scanf("%f", &reta2);
    printf("\nInforme o comprimento da reta 3: ");
    scanf("%f", &reta3);
    if (reta1 + reta2 <= reta3 || reta2 + reta3 <= reta1 || reta1 + reta3 <= reta2)
        printf("Estas retas n�o formam um tri�ngulo");
    else if (reta1 == reta2 && reta1 == reta3 && reta2 == reta3){
        printf("O tri�ngulo � equil�tero!");
    }
    else if (reta1 == reta2 || reta1 == reta3 || reta2 == reta3){
        printf("O tri�ngulo � is�sceles!");
        }
    else
        printf("O tri�ngulo � escaleno!");
        return 0;
}
