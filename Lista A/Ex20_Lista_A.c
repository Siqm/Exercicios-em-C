#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float a,b,c,d,e,f,x,y;
	
	printf("Informe o valor de a:");
	scanf("%f",&a);
	printf("Informe o valor de b:");
	scanf("%f",&b);
	printf("Informe o valor de c:");
	scanf("%f",&c);
	printf("Informe o valor de d:");
	scanf("%f",&d);
	printf("Informe o valor de e:");
	scanf("%f",&e);
	printf("Informe o valor de f:");
	scanf("%f",&f);
	
	c=a*x+b*y, f=d*x+e*y, x=(c*e-b*f)/(a*e-b*d), y=(a*f-c*d)/(a*e-b*d);
	
	printf("O valor de x é igual a:\t %.2f\nE o de y é de:\t %.2f", x,y);
	
	return 0;
}
