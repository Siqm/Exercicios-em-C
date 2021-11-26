#include<stdio.h>
#include<locale.h>

#define QTD 10

void main ()
{
	setlocale(LC_ALL,"");
	int numero [QTD], i, maior=0;
	
	for (i=0; i<QTD; i++) {
		printf("Insira um numero: ");
		scanf("%i", &numero[i]);
	}
	
	for (i=0; i<QTD; i++) {
		if (numero[i]>maior)
		maior = numero[i];
	}
	printf("O maior número é: %i", maior);
	
}
