#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	float R,A;
	printf("Ol�, este programa calcula o volume de uma lata de �leo\n");
	printf("-----------------------------------------------------------------\n");
	printf("Insira o raio da lata:");
	scanf("%f", &R);
	printf("\nInsira a altura da lata:");
	scanf("%f", &A);
	
	float V=3.14159*R*R*A;
	printf("\nO Volume da lata � de:%.2f", V);
	
	return 0;
}
