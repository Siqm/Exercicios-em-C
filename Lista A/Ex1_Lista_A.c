#include<locale.h>
#include<stdio.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	//est� parte serve para ler dois valores
	float n1,n2;
	printf("Ol�, este programa ira somar, subtrair, multiplicar e dividir dois n�meros");
	printf("\n-----------------------------------\nInsira o primeiro n�mero:");
	scanf("%f", &n1);
	printf("\n-----------------------------------\nInsira o segundo n�mero:");
	scanf("%f", &n2);
	
	//est� parte serve parar fazer todas as contas com os valores informados
	float soma=n1+n2, sub=n1-n2, multi=n1*n2, div=n1/n2;
	printf("Soma=	%f\n", soma);
	printf("Subtra��o=	%f\n", sub);
	printf("Multiplica��o=	%f\n", multi);
	printf("Dvisi�o=	%f", div);
		
	return 0;
}
