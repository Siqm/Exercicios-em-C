#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int i, num, resultado=0;
	
	printf("Insira um n�mero:");
	scanf("%i", &num);
	
	for (i=2; i <= num/2; i++) {
		if (num % i == 0 ) {
			printf("O n�mero n�o � primo");
			resultado++;
			break;
		}
		
	}
	if(resultado==0)
	printf("O n�mero � primo");
	
	return 0;
}
