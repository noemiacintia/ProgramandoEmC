#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main ()
{
int num;

setlocale(LC_ALL, "");
printf("digite um numero inteiro: ");
scanf("%d",&num);
if(num%2==0)//operador %
{
printf("Par");
}
else
printf("Ímpar");

return 0;
}
