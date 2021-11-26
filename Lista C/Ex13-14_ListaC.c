#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int i, num, resultado=0;
	
	printf("Insira um número:");
	scanf("%i", &num);
	
	for (i=2; i <= num/2; i++) {
		if (num % i == 0 ) {
			printf("O número não é primo");
			resultado++;
			break;
		}
		
	}
	if(resultado==0)
	printf("O número é primo");
	
	return 0;
}
