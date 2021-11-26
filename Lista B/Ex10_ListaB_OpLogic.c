/*
condições: 
Altura mínima 1.70m;
Idade entre 21 e 35 anos
Peso entre 60kg e 95kg.
*/
#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	float altura;
	int peso, idade;
	
	printf("Insira sua altura:");
	scanf("%f", &altura);
	printf("Insira sua idade:");
	scanf("%i", &idade);
	printf("Insira seu peso:");
	scanf("%i", &peso);
	
	if (altura >= 1.7 && idade >= 21 && idade <= 35 && peso >= 60 && peso <=95)
	printf("Você está apto");
	
	else
	printf("Você não está apto.");
	
	
	return 0;
}
