#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float peso, total;
	
	printf("Insira o peso do seu prato: ");
	scanf("%f", &peso);
	
	total = peso * 25;
	
	printf("O total a pagar é R$%.2f", total);
	
	return 0;
}
