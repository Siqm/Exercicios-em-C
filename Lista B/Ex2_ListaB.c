#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int numero;
	
	printf("Ol�, insira um n�mero:");
	scanf("%i", &numero);
	
	if (numero>100)
	printf("O n�mero � maior que 100");
	
	else
	printf("O n�mero � menor ou igual a 100");
	
	return 0;
}
