#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int cavalos;
	printf("Olá Coice de Mula\nInsira a quantidade de cavalos comprados:");
	scanf("%i", &cavalos);
	
	int ferraduras=cavalos*4;
	printf("\nA quantidade de ferraduras para equipar os cavalos é de: %i", ferraduras);
	
	return 0;
}
