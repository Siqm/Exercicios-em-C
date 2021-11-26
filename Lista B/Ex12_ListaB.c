#include<locale.h>
#include<stdio.h>

int main ()
{
	setlocale (LC_ALL, "");
	
	int n1,n2,n3;
	
	printf("Insira um numero:");
	scanf("%i", &n1);
	printf("Insira um numero:");
	scanf("%i", &n2);
	printf("Insira um numero:");
	scanf("%i", &n3);
	
	if (n1>n2)
		if (n1>n3)
			if (n2>n3)
			printf("%i %i %i", n1,n2,n3);
			
	else
	if (n2>n3)
			
		
	
	
	return 0;
}
