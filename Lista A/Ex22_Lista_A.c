#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	float x,y;
	printf("Ol�, este programa calcula a area de um terreno");
	printf("\nInsira o comprimento em metros:");
	scanf("%f", &x);
	printf("\nInsira a largura em metros:");
	scanf("%f", &y);
	
	float area=x*y;
	printf("A area do terreno � de:\t%.2fm�",area);
	
	return 0;
}
