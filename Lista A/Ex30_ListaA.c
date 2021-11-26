#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int salario, hora, horaE;
	
	printf("Insira a quantidades de horas trabalhadas:");
	scanf("%i", &hora);
	printf("Insira a quantidades de horas extra trabalhadas:");
	scanf("%i", &horaE);
	
	salario = hora*10+horaE*15;
	printf("O salario bruto é de: R$%i\n", salario);
	salario -= salario * 0.1;
	printf("O salario bruto é de: R$%i", salario);
	
	return 0;
}
