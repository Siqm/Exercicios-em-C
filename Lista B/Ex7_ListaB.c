#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int valor;
	
	printf("Insira um numero:");
	scanf("%i", &valor);
	
	if (valor > 0)
	printf ("O numero inserido é positivo");
	
	else
		if (valor < 0)
		printf("O valor inserido é negativo.");
		
		else
		printf("O valor inserido é zero");
	
	return 0;
}
