#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int i, numero, tabuada=0;
	
	printf("Insira um n�mero: ");
	scanf("%i", &numero);
	
	printf("Tabuada do 1 � 9\n");
	for (i=1; i<10; i++)
	{
		tabuada = numero * i;
		printf("%i * %i = %i\n", i, numero, tabuada);
	}
	
	printf("Tabuada do 9 � 1\n");
	
	for (i>=1; i--;)
	{
		tabuada = numero * i;
		printf("%i * %i = %i\n", i, numero, tabuada);
	}
		
	return 0;
}
