/* segundo desafio */
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
 int a, b, c;
 setlocale(LC_ALL, "");

 printf("\nPrograma para determinar se tr�s retas formar um tri�ngulo.\n");
 printf("\nInsira o comprimento da primeira reta:\n");
 scanf("%d", &a);
 printf("\nInsira o comprimento da segunda reta:\n");
 scanf("%d", &b);
 printf("\nInsira o valor da terceira reta:\n");
 scanf("%d", &c);

 if (a+b <= c || b+c <= a || c+a <= b)
  printf("\nAs retas n�o formam um tri�ngulo.\n");

 else {
  if (a == b && b == c)
   printf("\nAs retas formam um tri�ngulo equil�tero.\n");

  else if (a == b && b !=c || b == c && c !=a || c == a && a !=b)
   printf("\nAs retas formam um tri�ngulo is�sceles.\n");

  else
   printf("\nAs retas formam um tri�ngulo escaleno.\n");
 }

return 0;
}
