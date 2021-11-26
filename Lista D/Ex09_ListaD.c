/* 9- Escreva um programa que solicite um texto do usuário e imprima os 5 primeiros caracteres deste texto. */

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	char texto[10];
	int i;
	
	printf("Insira um texto de até 10 caracteres: ");
	gets(texto);
	
	for (i=0;i<5;i++){
		printf("%c", texto[i]);
	}
	
}
