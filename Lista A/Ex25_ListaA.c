#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float gas, pag, total;
	
	printf("Insira o pre�o da gasolina: ");
	scanf("%f", &gas);
	printf("Insira o valor do pagamento: ");
	scanf("%f", &pag);
	
	printf("Voc� consegue abastecer %.1f Litros de gasolina", total = pag / gas);
	
	return 0;
}
