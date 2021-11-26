#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	
	float dist=0.12, imp=0.45%, fab;
	printf("Olá\n Para calcular o valor de um carro, insira o valor de fábrica:");
	scanf("%f", &fab);
	
	float total=(fab+imp)+dist;
	printf("O valor total do carro é de: %f", total);
	return 0;
}
