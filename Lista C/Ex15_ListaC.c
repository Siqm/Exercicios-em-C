#include <stdio.h>
#include <locale.h>
#include <string.h>

void main ()
{
	setlocale(LC_ALL,"");
	char resp[5];
	int gostou, nGostou;

	do {
		printf("Voc� gostou do produto? S para sim ou N para n�o \n");
		gets(resp);
		
		
	
	}while (strcmp(resp, "sair")==1);
	
	printf("O total de intrevistados foi de: %i", gostou+nGostou);
	printf("O total de pessoas que gostaram foi de: %i", gostou);
	printf("O total de pessoas que n�o gostaram foi de: %i", nGostou);
}
