#include <stdio.h>
#include <locale.h>

int main (){
    int sistolica, diastolica;

    setlocale(LC_ALL, "");
    printf("\no programa  informa se a press�o � ou n�o ideal\n"
            "para um experimento:\n");
    printf("\ninforme a press�o arterial sist�lica:\n");
    scanf("%d", &sistolica);
    printf("\ninforme a press�o arterial diast�lica:\n");
    scanf("%d", &diastolica);
    if (sistolica <= 120 && diastolica <= 80)
        printf("este paciente � um bom candidato ao experimento");
    else
        printf("este paciente n�o � um bom candidato ao experimento");
    return 0;
}
