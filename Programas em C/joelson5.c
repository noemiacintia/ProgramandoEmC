/* Joelson Silva
lista 01
quest�o 05 */
#include<stdio.h>
#include <locale.h>

int main ()
{
    int num, suc_triplo, ant_dobro, soma = 0;

    setlocale(LC_ALL, "");
    printf("Informe um n�mero inteiro: \n\n");
    scanf("%d", &num);
    suc_triplo= (num*3)+1;
    ant_dobro= (num*2)-1;
    soma = suc_triplo + ant_dobro;
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro �: %d", soma);
    return 0;
}
