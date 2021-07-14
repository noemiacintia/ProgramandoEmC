#include <stdio.h>
#include <locale.h>

int main()
{
    int inteiro = 1;

    setlocale(LC_ALL, "");
    printf("Exemplifica o uso do break:\n\n");
    printf("Mostra inteiro de 1 a 10:\n\n");
    while (0) {
            if (inteiro > 10)
            break;
    printf("%d\n", inteiro);
    ++inteiro;
    }
    printf("\n5 > 3 = %d\n", 5 > 3);
    printf("\n5 < 3 = %d\n", 5 < 3);
    return 0;
}
