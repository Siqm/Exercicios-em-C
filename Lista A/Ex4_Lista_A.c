#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	
	//est� parte l� o valor
	float mil;
	printf("Ol�, este programa ir� transformar mil�metros em polegadas\n------------------------------------------------------------------\n");
	printf("Insira o valor em m�limetros:");
	scanf("%f", &mil);
	
	//est� parte transforma em polegadas
	float p=mil/25.4;
	printf("O valor em polegadas � de:	%.2f",p);
	
	return 0;
}
