#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int senha;
	
	printf ("Insira a senha:");
	scanf("%i", &senha);
	
	if (senha == 7852)
	printf("Senha correta");
	
	else
	printf ("Senha incorreta");
	
	
	return 0;
}
