/*5- Escreva um programa que leia a idade, o sexo e o peso
 	dos jogadores de um time de basquetemisto, guarde
  estes valores em 3 vetores. No final leia os vetores 
	e imprima a m�dia de idade e a m�dia de peso deste time,
 	separando entre mulheres e homens.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

#define QTD 5

void main ()
{
	setlocale(LC_ALL,"");
	
	int idade[QTD], i;
	float peso[QTD], mediaI, mediaP, c=0;
	char sexo[100], resp;
	
	for (i=0; i<QTD; i++){
		printf("Qual sua idade?\n");
		scanf("%i", &idade[i]);
		printf("Qual seu peso?\n");
		scanf("%f", &peso[i]);
		getchar();
		printf("Qual seu sexo? (Escolha entre \"M\" ou \"F\")\n");
		scanf("%c",&sexo[i]);
	}
	
	for (i=0; i<QTD; i++) {
		if (sexo[i]=='M') {
			mediaP += peso[i];
			mediaI += idade [i];
			c=c+1;
		}
	}
	if (c>0) {
		printf("As m�dias masculinas s�o:\n");
		printf("Media de idade: %f\n", mediaI/c);
		printf("M�dia do peso: %f\n", mediaP/c);
		c=0;
		mediaP=0;
		mediaI=0;
	}
	
	for (i=0; i<QTD; i++) {
		if (sexo[i]=='F') {
			mediaP += peso[i];
			mediaI += idade [i];
			c=c+1;
		}
	}
	
	if (c>0) {
		printf("As m�dias femininas s�o:\n");
		printf("Media de idade: %f\n", mediaI/c);
		printf("M�dia do peso: %f\n", mediaP/c);	
	}
	
	}
	
