#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int numero, soma;
	
	printf("Este programa soma valores fornecidos pelo usuario,\n");
	printf(" para parar a soma insira o número 0\n");
	
	do
	{
		printf("Insira o número que deseja somar:");
		scanf("%i", &numero);
		
		soma  = soma + numero;
		
	} while (numero!=0);
	
	printf ("O resultado é: %i", soma);
	
	return 0;
}
