#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int  contador, lin;

    printf("problema na impressão do triângulo: \n\n\n");

    for (lin=1; lin<=10; lin++)
    {
        for (contador=1; contador<=lin; contador++)
        {
            printf ("*");
        }

        printf("\n");
    }

    for (lin=1; lin<=10; lin++)
    {
        for (contador = 10; contador>=lin; contador--)
        {
            printf ("*");
        }

        printf("\n");
    }

    int contadorr;
    for (lin = 1; lin<=10; lin++)
    {

        if (lin>1)
        {
            for (contador=2; contador<=lin; contador++)
            {
                printf(" ");
            }
        }
        for (contador=1; contador<=11-lin; contador++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (lin=1; lin<=10; lin++)
    {

        for (contador = lin; contador<=9; contador++)
        {
            printf(" ");
        }
        for (contador = 1; contador<=lin; contador++)
        {
            printf("*");
        }
        printf("\n");


    }

    return (0);
}
