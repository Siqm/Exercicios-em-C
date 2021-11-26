#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	//
	float produto;
	printf("Olá, este programa irá calcular o valor do imposto de um produto\n");
	printf("Insira o valor do produto:");
	scanf("%f", &produto);
	
	float imposto=produto*0.17, total=produto+imposto;
	printf("O imposto é de:R$ %.2f", imposto);
	printf("\nE o total é de:R$%.2f",total);
	return 0;
}
