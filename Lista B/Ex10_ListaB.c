/*
Para um aviador ingressar em um determinado curso de pilotagem, ele precisa 
satisfazer as seguintes condi��es: 
Altura m�nima 1.70m; Idade entre 21 e 35 anos, inclusive; Peso entre 60kg e 95kg.
Escreva um programa que leia os dados do candidato
e informe se ele est� apto ou n�o para se inscrever no curso.
*/
#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float altura, peso;
	int idade;
	
	printf("Informa a sua altura:");
	scanf("%f", &altura);
	printf("Informe sua idade:");
	scanf("%i",&idade);
	printf("informe seu peso em KG:");
	scanf("%f", &peso);
	
	if (altura>=1.7)
	{
		if (idade>=21)
		{
			if (idade <=35)	
			{
				if (peso >=65)
				{
					if (peso <=95)
					{
						printf("Voc� � eleg�vel");
					}
					else
					{
						printf("Voc� n�o � eleg�vel");
					}
				}
				else
				{
					printf("Voc� n�o � eleg�vel");
				}
				
			}
			else
			{
				printf("Voc� n�o � eleg�vel");
			}
			
		}
		else
		{
			printf("Voc� n�o � eleg�vel");
		}
	}
	else
	{
		printf("Voc� n�o � eleg�vel");
	}
	return 0;
}
