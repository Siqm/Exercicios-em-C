/* 7- Elabore um programa que leia o RA e a nota de uma turma hipot�tica de 15 alunos. 
Feita a leitura dos 15 RAs e notas, pergunte ao usu�rio um RA que ele deseja saber a 
nota, com esta informa��o, procure a nota informada e exiba ao usu�rio.
Dica: Utilize um vetor para guardar os RAs e um vetor para guardar as notas. Quando 
for pesquisar o RA informado pelo usu�rio, a nota estar� na mesma posi��o do RA encontrado. */

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
			printf("A nota do RA %i � de %.1f\n", RA[i], nota[i]);
		}
		
	}
}
