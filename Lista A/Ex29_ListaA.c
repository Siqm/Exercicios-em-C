#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float queijo=2, presunto, hamb, qtd;
	
	printf("Insira a quantidade de lanches: ");
	scanf("%f", &qtd);
	
	queijo=qtd*2*0.05;
	
	printf("Ser� necessario %f Kg de queijo\n", queijo);
	printf("Ser� necessario %f Kg de presunto\n", presunto = 0.05 * qtd );
	printf("Ser� necessario %f Kg de hamb�rguer\n", hamb = 0.1 * qtd);
	
	return 0;
}
