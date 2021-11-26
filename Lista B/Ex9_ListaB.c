/*
a) A é igual a zero?;
b) B é menor que zero; 
c) A OU B são maiores do que zero?
*/

#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int a, b;
	
	printf("Insira o valor de A:");
	scanf("%i", &a);
	printf("Insira o valor de B:");
	scanf("%i", &b);
	
	
	printf("A é igual a 0?\n");
	
	if (a == 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	printf("B é menor que zero?\n");
	
	if (b < 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	printf("A ou B são maiores que zero?\n");
	if (a > 0 || b > 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	return 0;
}
