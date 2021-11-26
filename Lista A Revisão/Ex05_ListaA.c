/* 5- O cardápio de uma lanchonete é dado pela tabela de preços abaixo.
Escreva um programa que leia a quantidade de cada item comprado
 por um determinado cliente e imprima o valor total da sua compra.
 
Hambúrguer R$ 8,00
Batata frita R$ 12,00
Refrigerante R$ 3,00
Cerveja R$ 5,00
Doce R$ 3,00 */



#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	
	int soma, item;
	
	printf("Insira a quantidade de hamburgueres comprados: ");
	scanf("%i", &item);
	soma+=item*8;
	printf("Insira a quantidade de Batata frita comprados: ");
	scanf("%i", &item);
	soma+=item*12;
	printf("Insira a quantidade de refrigerantes comprados: ");
	scanf("%i", &item);
	soma+=item*3;
	printf("Insira a quantidade de cervejas comprados: ");
	scanf("%i", &item);
	soma+=item*5;
	printf("Insira a quantidade de doces comprados: ");
	scanf("%i", &item);
	soma+=item*3;
	
	printf("O total é igual a: %i", soma);
	
}
