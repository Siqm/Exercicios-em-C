#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int numero, i, resultado=0;
	
	
	printf("Insira um n�mero:");
	scanf("%i", &numero);
	getchar ();
	
	for (resultado = 1; numero > 1; numero--)
	resultado = resultado * numero;
	
	printf("O resultado �: %i", resultado);
	
	return 0;
}
