#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int restante, valor;
	
	printf("Insira um numero inteiro:");
	scanf("%i", &valor);
	
	restante = valor % 2; /* o % analisa o restante da multiplica��o*/
	
	if (restante == 0)
	printf("O n�mero inserido � par");
	
	else
	printf("O n�mero inserido � impar");
	
	return 0;
}
