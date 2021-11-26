#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	char resp;
	int O=0, B=0, R=0, U=0, c=1;
	
	printf("Insira as respostas de acordo com a lista:\n\n");
	printf("      Insira: \t Para:\n");
	printf("\tO \t Ótimo\n");
	printf("\tB \t Bom\n");
	printf("\tR \t Regular\n");
	printf("\tU \t Ruim\n");
	
	do {
		printf("Insira a resposta:");
		scanf("%c", &resp);
		getchar ();
		
		switch (resp) {
		case 'O':
			++O;
			break;
		case 'B':
			++B;
			break;
		case 'R':
			++R;
			break;
		case 'U':
			++U;
			break;
		case '-':
			break;
		default:
			printf("Letra inválida");
		}
		
	}while (resp != '-');
	
	printf("Total de resposta ótimas: %i\n", O);
	printf("Total de resposta boas: %i\n", B);
	printf("Total de resposta regulares: %i\n", R);
	printf("Total de resposta ruins: %i\n", U);
	printf("Total de respostas: %i", O+R+U+B);
	
	return 0;
}
