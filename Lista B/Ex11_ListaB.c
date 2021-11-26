#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int indice;
	
	printf("Insira o indice de poluição:");
	scanf("%i", &indice);
	
	if ( indice >= 5 && indice <= 25)
	printf ("Regular.");
	
	if (indice > 25 && indice <= 30)
	printf("Poluente");
	
	if (indice > 30)
	printf("Altamente poluente, a empresa deve ser multada.");
	
	if (indice < 5)
	printf("O valor inserido é invalido.");
	
	return 0;
}
