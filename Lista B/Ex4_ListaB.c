#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int restante, valor;
	
	printf("Insira um numero inteiro:");
	scanf("%i", &valor);
	
	restante = valor % 2; /* o % analisa o restante da multiplicação*/
	
	if (restante == 0)
	printf("O número inserido é par");
	
	else
	printf("O número inserido é impar");
	
	return 0;
}
