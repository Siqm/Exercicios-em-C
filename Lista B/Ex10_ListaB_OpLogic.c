/*
condi��es: 
Altura m�nima 1.70m;
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
	printf("Voc� est� apto");
	
	else
	printf("Voc� n�o est� apto.");
	
	
	return 0;
}
