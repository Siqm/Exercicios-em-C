#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int numero;
	
	printf("Ol�, insira um n�mero:");
	scanf("%i", &numero);
	
	if (numero > 50)
	printf("O N�mero � maior que 50");
	
	else
	printf("O N�mero � menor que 50");
	
	return 0;
}
