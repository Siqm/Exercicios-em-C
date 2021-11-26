#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float frango=1.2+0.8*2, total;
	int qnt;
	
	printf("Insira a quantidade de frangos:");
	scanf("%i", &qnt);
	
	total = frango*qnt;
	
	printf("O gasto total para marcar os frangos é de: R$%.2f", total);
	
	
	return 0;
}
