#include <stdio.h>
#include <locale.h>

#define pao 0.12
#define broa 1.5

int main ()
{
	setlocale(LC_ALL,"");
	
	float qtdpao, qtdbroa, resultado;
	
	printf("Insira a quantidade de pães vendidos: ");
	scanf("%f", &qtdpao);
	printf("Insira a quantidade de broas vendidas: ");
	scanf("%f", &qtdbroa);
	
	resultado = qtdpao * pao + qtdbroa * broa;
	
	printf("O total arrecadado foi de: R$%.2f\n", resultado);
	printf("10%% desse valor é igual a: R$%.2f", resultado = resultado * 0.1);
	
	return 0;
}
