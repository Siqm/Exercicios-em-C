#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	
	//está parte lê o valor
	float mil;
	printf("Olá, este programa irá transformar milímetros em polegadas\n------------------------------------------------------------------\n");
	printf("Insira o valor em mílimetros:");
	scanf("%f", &mil);
	
	//está parte transforma em polegadas
	float p=mil/25.4;
	printf("O valor em polegadas é de:	%.2f",p);
	
	return 0;
}
