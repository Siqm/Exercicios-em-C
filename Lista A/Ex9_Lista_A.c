#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float p1=0.3, p2=0.2, p3=0.5, n1, n2, n3;;
	printf("Olá, para calcular a média final, insira o valor de cada prova");
	printf("\nNota da prova 1:");
	
	//entrada das notas
	scanf("%f", &n1);
	printf("\nNota da prova 2:");
	scanf("%f", &n2);
	printf("\nNota da prova 3:");
	scanf("%f", &n3);
	
	//calculo
	float total;
	printf("A média é igual a: %.2f", total=p1*n1+p2*n2+p3*n3);
		
	return 0;
}
