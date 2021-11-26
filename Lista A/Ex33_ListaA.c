#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float total, moeda;
	int i, qtd;
	
	for (i==0; i<=6; i++) {
		printf("Insira o valor da moeda: ");
		scanf("%f", &moeda);
		printf("Insira a quantidade de moedas: ");
		scanf("%i", &qtd);
		printf("\n");
		
		total = total + qtd * moeda;	
	}
	
	printf("O valor total é de: R$%.2f", total);
	
	return 0;
}
