/* Quando ponho 10 no array e s� declaro 7 n�meros (por exemplo),
por conta do pc, ele zera os que n�o declarei. */

#include <stdio.h>
#include <locale.h>

int main ()
{
    int array[] = {10, 8, -7, 22, 0, 16, 55, 3, 44, -12};
    int indice;

    setlocale(LC_ALL, "");
    printf("Inteiro invertido com ARRAYS j� declarados: \n");
    for (indice = 0; indice <= 6; ++indice)
        printf("%d\n", array[indice]);
    printf("\n\n\n");
    for (indice = 0; indice <= 6; indice+=3)
        printf("%d\n", array[indice]);
    printf("\n\n\n");
    printf("Digite 9999: ");
    // modifica o elemento n�mero 3 do array
    scanf("%d", &array[3]);
    printf("%d\n", array[0] * 2);
    printf("\n\n\n");
    for (indice = 0; indice <= 6; ++indice)
        printf("%d\n", array[indice]);
return 0;
}
