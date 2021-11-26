#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	//introdução
	printf("Olá, este programa irá calcular o valor total da conta do cliente");
	printf("\nItens disponíveis:\n");
	printf("Hamburguer		R$ 8,00\n");
	printf("Batata frita		R$12,00\n");
	printf("Refrigerante		R$ 3,00\n");
	printf("Cerveja			R$ 5,00\n");
	printf("Doce			R$ 3,00\n");
	
	//entrada da quantidade de cada item consumido
	int hc,bfc,rc,cc,dc;
	printf("Quantidade de Hamburguer consumido:");
	scanf("%i",&hc);
	printf("\nQuantidade de Batata frita:");
	scanf("%i",&bfc);
	printf("\nQuantidade de Refrigerante:");
	scanf("%i",&rc);
	printf("\nQuantidade de Cerveja:");
	scanf("%i",&cc);		
	printf("\nQuantidade de Doce:");
	scanf("%i",&dc);
	
	//calculo de todos os itens consumidos pelo preço de cada
	int total=hc*8+bfc*12+rc*3+cc*5+dc*3;
	printf("\nO total é de:R$%i,00",total);
	return 0;
}
