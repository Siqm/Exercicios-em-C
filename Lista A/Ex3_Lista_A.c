#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	//est� parte serve para ler a temperatura
	float C;
	printf("Ol�, este programa ir� transformar uma temperatura em Celsius para Fahrenheit\n------------------------------------------------------------------\n");
	printf("Insira a temperatura em Celsius (apenas n�meros):");
	scanf("%f", &C);
	
	//est� parte transforma a temperatura em F
	float F=1.8*C+32;
	printf("\n------------------------------------------------------------------\n A temperatura em Fahrenheit � de:	%.1f�F", F);
	
	return 0;
}
