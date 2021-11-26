#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int segundos, horas;
	
	printf("Insira o tempo em segundos:");
	scanf("%i", &segundos);
	
	if(segundos>0)
	printf("%i segundos convertido para horas resulta em um total de: %i", segundos, horas = segundos / 3600);
	
	else
	printf("Valor inválido");
	
	return 0;
}
