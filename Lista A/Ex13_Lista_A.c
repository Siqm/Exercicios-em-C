#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	int codigo;
	float preco, quantia;
	char vendedor[61];
	printf("Ol�, este programa ir� calcular a comiss�o de venda");
	printf("\n-----------------------------------------------\n");
	printf("Insira o nome do vendedor:");
	gets(vendedor);
	printf("\nInsira o c�digo da pe�a:");
	scanf("%i", &codigo);
	printf("\nInsira o pre�o unit�rio da pe�a:");
	scanf("%f", &preco);
	printf("\nInsira a quantidade vendida:");
	scanf("%f", &quantia);
	printf("\n-----------------------------------------------\n");
	
	float total=preco*quantia*0.05;
	printf("\nNome inserido:			%s", vendedor);
	printf("\nC�digo da pe�a:			%i", codigo);
	printf("\nPre�o unit�rio:			R$%.2f", preco);
	printf("\nQuantidade vendida:		%.0f", quantia);
	printf("\nA comiss�o total � de: 		R$%.2f", total);
	printf("\n-----------------------------------------------\n");

	return 0;
}
