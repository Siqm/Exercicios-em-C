#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	float valor, convertido;
	
	printf("Insira a distancia em metros:");
	scanf("%f", &valor);
	
	convertido = valor * 3.315;
	
	if (valor > 0)
	printf("O valor inserido foi: %.2fm \nE o valor convertido � de %.2f p�s ", valor, convertido);
	
	else
	printf("O valor n�o pode ser convertido.");
	
	return 0;
}
