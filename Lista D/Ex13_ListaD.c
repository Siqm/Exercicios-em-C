/* 13- Escreva um programa, que leia uma matriz quadrada 5x5, imprima os elementos da diagonal principal bem como a soma e a média destes elementos. */

#include <locale.h>
#include <stdio.h>

void main () {
	setlocale(LC_ALL,"");
	
	int i, j, mt[5][5], soma;
	
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
			printf("Insira um valor inteiro para a linha %i coluna %i da matriz: ", i+1,j+1);
			scanf("%i", &mt[i][j]);
			
			if (i==j) 
				soma+=mt[i][j];
		}
	}
	printf("\n\nA soma de todos os valores da diagonal principal é igual a %i\n", soma);
	printf("A média dessa diagonal principal é igual a %i", soma/5);
}
