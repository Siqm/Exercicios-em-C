#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int numero;
	
	printf("Olá, insira um número:");
	scanf("%i", &numero);
	
	if (numero > 50)
	printf("O Número é maior que 50");
	
	else
	printf("O Número é menor que 50");
	
	return 0;
}
