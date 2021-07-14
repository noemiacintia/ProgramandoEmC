#include <stdio.h>
#include <locale.h>

int main(){
    float a,b,c;

    printf("\nDigite valor a: ");
    scanf("%f", &a);
    printf("\nDigite valor b: ");
    scanf("%f", &b);
    printf("\nDigite valor c: ");
    scanf("%d", &c);
    if (a<(b+c) && b<(a+c) && c<(a+))//verifica se é um triângulo
       {
    if(a==b && b==c)
            printf("\nTriangulo equilatero.");
        else if(a==b || b==c || a==c)
            printf("\nTriangulo isosceles.");
        else
            printf("\nTriangulo qualquer.");
        printf("\n\n");
    }
    return 0;
}
