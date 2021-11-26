#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int senha;
	
	Printf("Digite a senha:");
	scanf("%i", &senha);
	
	if (senha==12345)
	{
		printf("Senha correta!");
	}
	
	return 0;
}
