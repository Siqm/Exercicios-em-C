#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int numero [10], i=0, maior;
	
	do {
		printf("Insira um número: ");
		scanf("%i", &numero [i]);
		i++;
	}while (i<10);
	
	for (i>10; i--;) {
		
		if (numero[i] > maior )
		maior = numero [i];
	}
	
	printf ("O maior número é: %i", maior);
	
	return 0;
}
