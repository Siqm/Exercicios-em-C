#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	float media,segunda,terca,quarta,quinta,sexta,sabado,domingo;
	
	
	printf("Insira as temperaturas dos respectivos dias da semana, de domingo a s�bado:");
	scanf("%f" &domingo);
	/*
	scanf("%f" &segunda);
	scanf("%f" &terca);
	scanf("%f" &quarta);
	scanf("%f" &quinta);
	scanf("%f" &sexta);
	scanf("%f" &sabado);
	printf("\nA m�dia da temperatura da semana �: %f", media=domingo+segunda+terca+quarta+quinta+sexta+sabado);
	*/
	return 0;
	
}
