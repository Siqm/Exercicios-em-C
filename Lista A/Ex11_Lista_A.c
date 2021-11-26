#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float dolar, real;
	printf("Olá, este programa irá calcular a transformação da moeda Real para Dolar");
	printf("\nPrimeiramente, insira o valor do Dolar atual:");
	scanf("%f",&dolar);
	printf("\nInsira a quantidade de reais que quer transformar para dolar:");
	scanf("%f", &real);
	
	float conversao = real/dolar;
	printf("Transformando R$%.2f para dolar temos um total de: U$%.2f", real, conversao);
	
	return 0;
}
