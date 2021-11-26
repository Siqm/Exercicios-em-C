#include <stdio.h>
#include <locale.h>

#define QTD 2

int main ()
{
	setlocale(LC_ALL,"");
	
	int i, numero[QTD], total=0;
	
	for (i=0; i<QTD; i++)
	{
		printf("Insira um número: ");
		scanf("%i", &numero[i]);
		total += numero[i];
	}
	printf("A soma de todos os números é igual a: %i", total);
	
	return 0;
}

