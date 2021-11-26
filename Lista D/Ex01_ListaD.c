#include <stdio.h>
#include <locale.h>

#define QTD 10

int main ()
{
	setlocale(LC_ALL,"");
	
	int i, numero[10];
	
	for (i=0; i<QTD; i++)
	{
		printf("Insira um número para a posição %i: ", i);
		scanf("%i", &numero[i]);
	}
	
	for (i>QTD; i--;)
	printf("O número da posição %i é: %i\n", i, numero[i]);
		
	return 0;
}
