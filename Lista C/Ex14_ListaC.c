#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int i, total=0;
	char bola, resp = 's';
	
	for (i=0; i >= 0; i++) {
		printf("Insira a bola que você tirou:\n");
		scanf("%c", &bola);
		getchar();
		i++;
		
		if (bola = 'P') 
			total += 10;
			
		else if (bola = 'B')
			total += 15;
			
		else if (bola = 'V')
			total += 0;
			
		else if (bola = 'A')
			total += -15;
			
		else if (bola = 'L')
			total += -10;
			
		printf("Deseja continuar? S para sim ou N para não\n");
		scanf("%c", &resp);
		getchar();
		if (resp == 'N')
		break;
	}
	
	printf("A quantidades de bolas sorteadas foi de: %i", i);
	printf("A pontuação total foi de: %i", total);
	
	return 0;
}
