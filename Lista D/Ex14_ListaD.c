/* 14- Na fábrica Rosca Feliz, recolheu-se uma amostra de 1000 parafusos para medição e pesagem. Escreva um programa que permita:
1. Ler os valores do peso e do comprimento de cada parafuso da amostra;
2. Calcular o peso médio e o comprimento médio dos parafusos da amostra;
3. Calcular a percentagem de parafusos com peso superior à média da amostra;
4. Calcular a diferença entre o parafuso mais comprido e o mais curto */

#include <locale.h>
#include <stdio.h>
#define QTD 3

typedef struct {
	float peso;
	float comprimento;
}parafuso;

void main () {
	setlocale(LC_ALL,"");
	
	int i;
	parafuso pr[QTD];
	float mediaP, mediaC, maior=0, menor=0, pesoSup, cP;
	
	for (i=0;i<QTD;i++) {
		printf("Insira o peso do parafuso N%i: ", i+1);
		scanf("%f", &pr[i].peso);
		printf("Insira o comprimento do parafuso N%i: ", i+1);
		scanf("%f", &pr[i].comprimento);
		mediaP+=pr[i].peso;
		mediaP=mediaP/QTD;
		mediaC+=pr[i].comprimento;
		mediaC=mediaC/QTD;
	}
	printf("\nMedia peso: %.2f\tMedia comprimento: %.2f", mediaP, mediaC);
	
	for (i=0;i<QTD;i++){
		if (pr[i].peso>mediaP) {
			cP+=1;
		}
		
	}
	pesoSup=(cP*mediaP)/QTD;
	printf("\n\n%f", pesoSup);
	
}
