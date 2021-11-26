#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"");
	
	int anos, meses, dias;
	printf("Olá, este programa calcula a idade em dias\n");
	printf("Insira sua idade em anos:	");
	scanf("%i", &anos);
	printf("Insira os meses:		");
	scanf("%i", &meses);
	printf("Insira os dias:			");
	scanf("%i", &dias);
	
	int idade_em_dias=anos*365+meses*30+dias;
	printf("Sua idade em dias é de:		%i dias", idade_em_dias);
	
	
	return 0;
}
