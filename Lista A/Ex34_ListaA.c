#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int qtd, total[2];
	
	printf("Quantos litros de refresco deseja preparar: ");
	scanf("%i", &qtd);
	
	total[1] = qtd * 0.8;
	printf("Ser� necessario %i litros de agua\n", total[1]);
	total[2] = qtd * 0.2;
	printf("Ser� necessario %i litros de suco", total[2]);
	
	
	return 0;
}
