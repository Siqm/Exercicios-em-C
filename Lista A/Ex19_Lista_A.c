#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int seg;
	printf("Ol�, esse programa transforma segundos em horas e minutos");
	printf("\nInsira o tempo em segundos:");
	scanf("%i", &seg);
	
	int minutos=seg/60, horas=minutos/60;
	printf("\nO tempo em segundos � de:\t%i", seg);
	printf("\nO tempo em minutos � de:\t%i", minutos);
	printf("\nO tempo em horas � de:\t\t%i", horas);
	
	
	
	return 0;
}
