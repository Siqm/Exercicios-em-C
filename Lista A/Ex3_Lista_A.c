#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	//está parte serve para ler a temperatura
	float C;
	printf("Olá, este programa irá transformar uma temperatura em Celsius para Fahrenheit\n------------------------------------------------------------------\n");
	printf("Insira a temperatura em Celsius (apenas números):");
	scanf("%f", &C);
	
	//está parte transforma a temperatura em F
	float F=1.8*C+32;
	printf("\n------------------------------------------------------------------\n A temperatura em Fahrenheit é de:	%.1f°F", F);
	
	return 0;
}
