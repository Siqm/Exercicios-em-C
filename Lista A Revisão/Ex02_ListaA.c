/* 2- Fa�a um programa que calcula a m�dia de temperatura de uma semana. */;

#include <stdio.h>
#include <locale.h>
#define QTD 3

void main () {
	setlocale(LC_ALL,"");
	
	int i, temp[QTD], soma;
	
	for(i=0;i<QTD;i++) {
		printf("Insira a temperatura do %i� dia: ", i+1);
		scanf("%i", &temp[i]);
		
		soma += temp[i];
	}
	
	printf("A m�dia � igual a: %i�C", soma/i);
}
