#include <stdio.h>


int main ()
{
	int numero, c;
	
	printf("Escolha um numero: ");
	scanf("%i", &numero);
	
	c=0;
	
	while (c<numero)
	{
		printf("*");
		
		c = c +1;
	}
	
	return 0;
}
