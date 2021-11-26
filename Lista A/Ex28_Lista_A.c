/*
Três amigos, Cheiroso, Chulé e Pirriu, decidiram rachar igualmente a conta de um bar.
Faça um programa para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Cheiroso e Chulé não paguem centavos.
Ex: uma conta de R$ 101,53 resulta em R$ 33,00 para Cheiroso, R$ 33,00 para Chulé e R$ 35,53 para Pirriu.
*/
#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int cheiroso, chule;
	float pirriu, total;
	
	printf("Para calcular quanto cada um deve pagar, insira o valor total da conta:");
	scanf("%f", &total);
	
	cheiroso = total/3;
	chule = total/3;
	pirriu = total-(cheiroso+chule);
	
	printf("\n Cheiroso deve pagar um total de R$%i\nChulé deve pagar R$%i\nPirriu deve pagar R$%.2f", cheiroso,chule, pirriu);
	
	return 0;
}
