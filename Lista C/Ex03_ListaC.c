#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int contador, numero, resultado, multiplicador;
	
	printf("Insira um n�mero: ");
	scanf("%i", &numero);
	
	contador = 0;
	multiplicador = 1;
	
	while (contador<9)
	{
		resultado = numero * multiplicador;
		printf("%i * %i = %i\n", numero, multiplicador, resultado);
		
		contador = contador + 1;
		multiplicador = multiplicador +1;
	}
	
	return 0;
}
