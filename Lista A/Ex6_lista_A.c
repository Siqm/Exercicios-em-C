#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int salario = 350, comissao=200, total, variavel;
	
	printf("Insira a quantidade de carros vendidos:");
	scanf("%i", &variavel);
	
	total=salario+comissao*variavel;
	printf("O seu sálario total é de: R$%i ", total);
	
	return 0;
}
