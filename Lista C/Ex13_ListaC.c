#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int i=0, numero, soma;
	
	for (soma = 0; soma < 100; i++) {
		printf("Insira um n�mero: ");
		scanf("%i", &numero);
		
		soma += numero;
	}
	
	printf("A soma � de: %i\n", soma);
	printf("A m�dia � de: %i\n", soma/i);
	printf("Foram inseridos um total de %i numeros", i);
	
	return 0;
}
