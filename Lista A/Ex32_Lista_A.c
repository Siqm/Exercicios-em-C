#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int lata=350, gar1=600, gar2=2000;
	printf("Olá, informe a quantidade de cada item para calcular o total");
	printf("\nQuantas latas de 350ml foram compradas:");
	
	int l1, g1, g2;
	scanf("%i", &l1);
	printf("\nQuantas garrafas de 600ml foram compradas:");
	scanf("%i", &g1);
	printf("\nQuantas garrafas de 2L foram compradas:");
	scanf("%i", &g2);
	
	int total=lata*l1+gar1*g1+gar2*g2;
	printf("\nO total de litros comprados é de: %i", total);
	
	return 0;
}
