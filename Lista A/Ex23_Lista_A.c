#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int cavalos;
	printf("Ol� Coice de Mula\nInsira a quantidade de cavalos comprados:");
	scanf("%i", &cavalos);
	
	int ferraduras=cavalos*4;
	printf("\nA quantidade de ferraduras para equipar os cavalos � de: %i", ferraduras);
	
	return 0;
}
