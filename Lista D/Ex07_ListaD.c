/* 7- Elabore um programa que leia o RA e a nota de uma turma hipotética de 15 alunos. 
Feita a leitura dos 15 RAs e notas, pergunte ao usuário um RA que ele deseja saber a 
nota, com esta informação, procure a nota informada e exiba ao usuário.
Dica: Utilize um vetor para guardar os RAs e um vetor para guardar as notas. Quando 
for pesquisar o RA informado pelo usuário, a nota estará na mesma posição do RA encontrado. */

#include <stdio.h>
#include <locale.h>
#define QTD 3

void main () {
	setlocale(LC_ALL,"");
	int i, RA[QTD], resp;
	float nota[QTD];
	char continuar[4]
	
	for (i=0;i<QTD;i++) {
		printf("Insira o RA: ");
		scanf("%i", &RA[i]);
		printf("Insira a nota: ");
		scanf("%f", &nota[i]);
	}
	printf("Qual RA deseja consultar: ");
	scanf("%i", &resp);
	
	for (i=0;i<QTD;i++) {
		if (resp==RA[i]) {
			printf("A nota do RA %i é de %.1f\n", RA[i], nota[i]);
		}
		
	}
}
