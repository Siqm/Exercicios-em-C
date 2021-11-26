#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float total;
	int peq, med, gra;
	
	printf("Quantas camisas pequenas foram vendidas: ");
	scanf("%i", &peq);
	printf("Quantas camisas medias foram vendidas: ");
	scanf("%i", &med);
	printf("Quantas camisas grandes foram vendidas: ");
	scanf("%i", &gra);
	
	total = peq * 20 + med * 24 + gra * 28;
	
	printf("O total é de R$%.2f", total);]
	
	return 0;
}
