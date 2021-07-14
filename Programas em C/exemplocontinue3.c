#include <stdio.h>
#include <locale.h>

int main()
{
    int inteiro;

    setlocale(LC_ALL, "");
    printf("Exemplifica o uso do continue:\n\n");
    printf("Mostra inteiro de 1 a 10:\n\n");
    for (inteiro=1; inteiro <=10; inteiro++) {
            if (inteiro == 5)
            continue;
    printf("%d\n", inteiro);
    }
    printf("\n5 > 3 = %d\n", 5 > 3);
    printf("\n5 < 3 = %d\n", 5 < 3);
    return 0;
}

