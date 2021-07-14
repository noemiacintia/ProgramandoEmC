#include <stdio.h>
#include <locale.h>

int main ()
{
    int lin, contador;

    printf("Imprimindo triângulos: \n");
    printf("\na)\n\n");
    for (lin=1; lin<=4; lin++)
    {
        for (contador=1; contador<=lin; contador++)
        {
            printf ("*");
        }
        printf("\n");
    }

    printf("\nb)");
    if (lin>1)
    {
        for (contador=2; contador<=lin; contador++)
        {
            printf(" ");
        }
    }
    for (contador=1; contador<=4-lin; contador++)
    {
        printf("*");
    }
    printf("\n");
    for (lin=1; lin<=4; lin++)
    {
        for (contador = lin; contador<=4; contador++)
        {
            printf(" ");
        }
        for (contador = 1; contador<=lin; contador++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nc)\n\n");
    for (lin = 1; lin<=4; lin++)
    {
        for (contador=1; contador<=5-lin; contador++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nd)\n\n");
    for (lin = 1; lin<=4; lin++)
    {

        if (lin>1)
        {
            for (contador=2; contador<=lin; contador++)
            {
                printf(" ");
            }
        }
        for (contador=1; contador<=5-lin; contador++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
