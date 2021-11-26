#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int contador;
	float preco, total;
	
	contador = 0;
	total = 0;
	
	while (contador<10)
	{
		printf("Insira o valor do produto:");
		scanf("%f", &preco);
		
		contador = contador + 1;
		total = total + preco;
	}
	
	printf("Valor total: R$ %.2f", total);
	
	return 0;
	
}
