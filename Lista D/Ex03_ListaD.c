#include <stdio.h>
#include <locale.h>

#define QTD 10

int main ()
{
	setlocale(LC_ALL,"");
	
	int i;
	float total=0, valor[QTD];
	
	printf("Este programa irá ler 10 preços distintos e soma-los\n");
	
	for (i=0; i<QTD; i++)
	{
		printf("Insira o valor do produto %i: ", i);
		scanf("%f", &valor[i]);
		total += valor[i];
	}
	
	printf("O valor total é de: R$ %.2f", total);
	
	return 0;
}
