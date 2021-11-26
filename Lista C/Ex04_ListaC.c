#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int c1 = 0, soma = 0, N, numero;
	
	printf("Quantos números deseja somar: ");
	scanf("%i", &N);
	
	while (c1<N)
	{
		printf("Insira o número:");
		scanf("%i", &numero);
		
		soma = soma + numero;
		c1 = c1 + 1;
	}
	
	printf("O total é: %i", soma);
	
	return 0;
}
