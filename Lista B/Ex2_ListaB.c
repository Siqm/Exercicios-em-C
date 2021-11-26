#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int numero;
	
	printf("Olá, insira um número:");
	scanf("%i", &numero);
	
	if (numero>100)
	printf("O número é maior que 100");
	
	else
	printf("O número é menor ou igual a 100");
	
	return 0;
}
