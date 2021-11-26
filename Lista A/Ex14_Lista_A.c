#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float t, V;
	printf("Olá, este programa calcula a gasolina gasta durante a viagem\n");
	printf("-------------------------------------------------------------------------\n");
	printf("Insira o tempo gasto na viagem em horas:");
	scanf("%f", &t);
	printf("\nInsira a velocidade média em km/h:");
	scanf("%f", &V);
	
	float d=t*V, consumo=d/12;
	printf("\nA distancia percorrida foi de: %.2fKm", d);
	printf("\nO consumo de gasolina foi de: %.2fKm/L", consumo);
	
	
	
	return 0;
}
