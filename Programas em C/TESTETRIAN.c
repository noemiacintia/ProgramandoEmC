#include <stdio.h>
#define NUM 6

int main ()
{
    int espaco, aste;

    for ( espaco = 1; espaco <= NUM; espaco++ ) {
        printf(" ");

        for ( aste = 1; aste <= espaco; aste++ )
            printf("*");
            printf("\n");
    }

    printf("\n");

    for (espaco = NUM; espaco>= 1; espaco-- ) {
        printf("\n");

        for ( aste= 0; aste < (NUM - espaco); aste++ )
            printf(" ");

        for ( aste= 1; aste <= espaco; aste++ )
            printf("*");

    }

    return 0;
}
