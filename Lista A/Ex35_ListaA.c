#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int hora, min;
	
	printf("Insira a quantidade de horas: ");
	scanf("%i", &hora);
	printf("Insira a quantidade de minutos: ");
	scanf("%i", &min);
	
	printf("A convers�o da quantidade de horas para minutos � igual a: %i\n", hora*60);
	printf("O total de minutos � de: %i\n", min+hora*60);
	printf("O total de minutos convertidos para segundos � de: %i", min*60+(hora*60)*60);
	
	return 0;
}
