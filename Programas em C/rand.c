#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ()
{
    srand(time(NULL));
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    printf("%d\n", rand ());
    return 0;
}
