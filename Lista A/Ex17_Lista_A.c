#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int a,b;
	printf("Ol� mundo");
	printf("\nInsira o valor da variavel A:");
	scanf("%i", &b);
	printf("\nInsira o valor da variavel B:");
	scanf("%i", &a);
	printf("\n----------------------------------------------\n");
	printf("O valor da varialvel A � de: %i", a);
	printf("\nO valor da varialvel B � de: %i", b);
	
	return 0;
}
