#include<locale.h>
#include<stdio.h>
#include<math.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	float x1,y1,x2,y2;
	
	printf("Olá, este programa calcula a distancia entre dois pontos\n");
	printf("insira o valor de x1:");
	scanf("%f", &x1);
	printf("\ninsira o valor de y1:");
	scanf("%f", &y1);
	printf("\ninsira o valor de x2:");
	scanf("%f", &x2);
	printf("\ninsira o valor de y2:");
	scanf("%f", &y2);
	
	
	float d= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("O resultado é: %.4f", d);
	
	return 0;
}
