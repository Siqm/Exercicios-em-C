#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float pi=3.14, raio;
	printf("Ol�, este programa calcula o comprimento e a �rea de um circulo a partir do raio");
	printf("\nInsira o valor do raio:");
	scanf("%f", &raio);
	
	float comprimento=2*pi*raio, area=pi*raio*raio;
	printf("\nO comprimento � de: %.3f", comprimento);
	printf("\nA �rea � de:	%.3f", area);
	
	
	return 0;
}
