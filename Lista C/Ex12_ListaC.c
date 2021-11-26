#include <stdio.h>
#include <locale.h>

#define QTD 5

int main ()
{
	setlocale (LC_ALL,"");
	
	int nota[QTD], maior=0, menor=10, i;

	for (i=0; i<5; i++) {
		printf("insira a nota n° %i: ", i);
		scanf("%i", &nota[i]);
		
		if (nota[i ]== -1)
		break;
	}	
	
	for (i>0; i--;) {
		if (maior < nota [i])
		maior = nota[i];
		
		else if (menor > nota [i])
		menor = nota[i];
	}

	printf("A maior nota foi: %i\n", maior);
	printf("A menor nota foi: %i", menor);
	
	return 0;
}
