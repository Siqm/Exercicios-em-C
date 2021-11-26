#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	int qmn, qmx;
	printf("Olá, este programa calcula o estoque médio de uma peça");
	printf("\nInsira a quantidade mínima da peça: ");
	scanf("%i", &qmn);
	printf("\ninsira a quantidade maxima da peça:");
	scanf("%i", &qmx);
	
	int total=(qmn+qmx)/2;
	printf("A media do estoque é de: %i", total);
	
	return 0;
}
