#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	int qmn, qmx;
	printf("Ol�, este programa calcula o estoque m�dio de uma pe�a");
	printf("\nInsira a quantidade m�nima da pe�a: ");
	scanf("%i", &qmn);
	printf("\ninsira a quantidade maxima da pe�a:");
	scanf("%i", &qmx);
	
	int total=(qmn+qmx)/2;
	printf("A media do estoque � de: %i", total);
	
	return 0;
}
