#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int i=0, numero, soma;
	
	for (soma = 0; soma < 100; i++) {
		printf("Insira um número: ");
		scanf("%i", &numero);
		
		soma += numero;
	}
	
	printf("A soma é de: %i\n", soma);
	printf("A média é de: %i\n", soma/i);
	printf("Foram inseridos um total de %i numeros", i);
	
	return 0;
}
