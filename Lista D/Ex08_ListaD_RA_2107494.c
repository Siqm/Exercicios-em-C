/* 8- Escreva um programa que solicite um texto de 30 letras do usuário (1 letra em cada
 posição de um vetor) e imprima o texto trocando as vogais pelo caractere “?”.  */

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main () {
	setlocale(LC_ALL,"");
	int i;
	char texto[30];
	
	printf("Insira um texto de até 30 caracteres: ");
	gets(texto);
	
	for (i=0;i<30;i++) {
		if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'
		||  texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U')
		texto[i]='?'; 
	}
	puts(texto);
	
}
