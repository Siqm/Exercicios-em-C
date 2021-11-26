#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	//está parte serve para ler dois valores
	float n1,n2;
	printf("Olá, este programa ira somar, subtrair, multiplicar e dividir dois números");
	printf("\n-----------------------------------\nInsira o primeiro número:");
	scanf("%f", &n1);
	printf("\n-----------------------------------\nInsira o segundo número:");
	scanf("%f", &n2);
	
	//está parte serve parar fazer todas as contas com os valores informados
	float soma=n1+n2, sub=n1-n2, multi=n1*n2, div=n1/n2;
	printf("Soma=	%f\n", soma);
	printf("Subtração=	%f\n", sub);
	printf("Multiplicação=	%f\n", multi);
	printf("Dvisião=	%f", div);
		
	return 0;
}
