#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float pi=3.14, raio;
	printf("Olá, este programa calcula o comprimento e a área de um circulo a partir do raio");
	printf("\nInsira o valor do raio:");
	scanf("%f", &raio);
	
	float comprimento=2*pi*raio, area=pi*raio*raio;
	printf("\nO comprimento é de: %.3f", comprimento);
	printf("\nA área é de:	%.3f", area);
	
	
	return 0;
}
