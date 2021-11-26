/* 12- Escreva um programa que peça um número inicial ao usuário, uma razão
e calcule os termos de uma P.G (Progressão Geométrica), armazenando esses
valores em um vetor de tamanho 10. No final, exiba todos os valores calculados. */

#include <locale.h>
#include <stdio.h>
#define QTD 10

void main () {
	setlocale(LC_ALL,"");
	
	int num[QTD], i, raz;
	
	printf("Insira a razão da PG: ");
	scanf("%i", &raz);
	printf("Insira o número inicial: ");
	scanf("%i", &num[0]);
	
	for(i=1;i<QTD;i++) {
		num[i]=num[i-1]*raz;
	}
	for(i=0;i<QTD;i++) {
		printf("%i, ", num[i]);
	}
	
}
