/*
a) A � igual a zero?;
b) B � menor que zero; 
c) A OU B s�o maiores do que zero?
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
	
	
	printf("A � igual a 0?\n");
	
	if (a == 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	printf("B � menor que zero?\n");
	
	if (b < 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	printf("A ou B s�o maiores que zero?\n");
	if (a > 0 || b > 0)
	printf("V\n");
	else
	printf("F\n");
	
	
	return 0;
}
