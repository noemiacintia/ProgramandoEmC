#include <stdio.h>
#include <locale.h>
int main()
{
   int data, dd, mm, aaaa, i;
   setlocale(LC_ALL,"");
	printf("Escreva datas no formato ddmmaaaa\n");
	printf("para recebe-las por extenço:\n");
	scanf("%d", &data);
	dd = data / 1000000;
	mm = (data % 1000000) / 10000;
	aaaa = (data % 1000000) % 10000;
	switch (mm)
	{
	case 01:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Janeiro de %d", dd, aaaa);
		}
		break;
	case 2:
		if (dd >= 1 && dd <= 28)
		{
			printf("%d de Fevereiro de %d", dd, aaaa);
		}
		break;
	case 3:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Março de %d", dd, aaaa);
		}
		break;
	case 4:
		if (dd >= 1 && dd <= 30)
		{
			printf("%d de Abril de %d", dd, aaaa);
		}
		break;
	case 5:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Maio de %d", dd, aaaa);
		}
		break;
	case 6:
		if (dd >= 1 && dd <= 30)
		{
			printf("%d de Junho de %d", dd, aaaa);
		}
		break;
	case 7:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Julho de %d", dd, aaaa);
		}
		break;
	case 8:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Agosto de %d", dd, aaaa);
		}
		break;
	case 9:
		if (dd >= 1 && dd <= 30)
		{
			printf("%d de Setembro de %d", dd, aaaa);
		}
		break;
	case 10:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Outubro de %d", dd, aaaa);
		}
		break;
	case 11:
		if (dd >= 1 && dd <= 30)
		{
			printf("%d de Novembro de %d", dd, aaaa);
		}
		break;
	case 12:
		if (dd >= 1 && dd <= 31)
		{
			printf("%d de Dezembro de %d", dd, aaaa);
		}
		break;
	}
}
