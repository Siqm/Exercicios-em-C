#include <stdio.h>
#include <locale.h>

#define QTD 10

int main ()
{
	setlocale(LC_ALL,"");
	
	int i, numero[10];
	
	for (i=0; i<QTD; i++)
	{
		printf("Insira um n�mero para a posi��o %i: ", i);
		scanf("%i", &numero[i]);
	}
	
	for (i>QTD; i--;)
	printf("O n�mero da posi��o %i �: %i\n", i, numero[i]);
		
	return 0;
}
