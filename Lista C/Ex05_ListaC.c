#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int numero, soma;
	
	printf("Este programa soma valores fornecidos pelo usuario,\n");
	printf(" para parar a soma insira o n�mero 0\n");
	
	do
	{
		printf("Insira o n�mero que deseja somar:");
		scanf("%i", &numero);
		
		soma  = soma + numero;
		
	} while (numero!=0);
	
	printf ("O resultado �: %i", soma);
	
	return 0;
}
