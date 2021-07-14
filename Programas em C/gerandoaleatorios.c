#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int, int);
void iniciar_aleatorio(void);
int main(void)
{
    int a, b, c;
    printf("Entre a e b: ");
    scanf("%d%d",&a,&b);
    iniciar_aleatorio();
    c = aleatorio(a,b);
    printf("inteiro pseudo-aleatorio: %d\n", c);
    return 0;
}
void iniciar_aleatorio(void)
{
    srand((unsigned int)time(NULL));
    rand();
    rand();
    rand();
}
int aleatorio(int a, int b)
{
    double r;
    r = (double) rand()/RAND_MAX;
    return (int)(a + r*(b-a));
}
