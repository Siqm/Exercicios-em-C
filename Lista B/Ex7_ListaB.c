#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int valor;
	
	printf("Insira um numero:");
	scanf("%i", &valor);
	
	if (valor > 0)
	printf ("O numero inserido � positivo");
	
	else
		if (valor < 0)
		printf("O valor inserido � negativo.");
		
		else
		printf("O valor inserido � zero");
	
	return 0;
}
