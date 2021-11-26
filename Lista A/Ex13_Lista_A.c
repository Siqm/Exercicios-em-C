#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	int codigo;
	float preco, quantia;
	char vendedor[61];
	printf("Olá, este programa irá calcular a comissão de venda");
	printf("\n-----------------------------------------------\n");
	printf("Insira o nome do vendedor:");
	gets(vendedor);
	printf("\nInsira o código da peça:");
	scanf("%i", &codigo);
	printf("\nInsira o preço unitário da peça:");
	scanf("%f", &preco);
	printf("\nInsira a quantidade vendida:");
	scanf("%f", &quantia);
	printf("\n-----------------------------------------------\n");
	
	float total=preco*quantia*0.05;
	printf("\nNome inserido:			%s", vendedor);
	printf("\nCódigo da peça:			%i", codigo);
	printf("\nPreço unitário:			R$%.2f", preco);
	printf("\nQuantidade vendida:		%.0f", quantia);
	printf("\nA comissão total é de: 		R$%.2f", total);
	printf("\n-----------------------------------------------\n");

	return 0;
}
