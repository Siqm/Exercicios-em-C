#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float gas, pag, total;
	
	printf("Insira o preço da gasolina: ");
	scanf("%f", &gas);
	printf("Insira o valor do pagamento: ");
	scanf("%f", &pag);
	
	printf("Você consegue abastecer %.1f Litros de gasolina", total = pag / gas);
	
	return 0;
}
