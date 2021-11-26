/* 10- Escreva um programa que solicite uma palavra qualquer do usuário e no final imprima quantas 
vogais e quantas consoantes a palavra tem. Para simplificar, considere apenas palavras sem acentuação. */

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	int i, vogal=0, consoante=0;
	char texto[10];
	
	printf("Insira uma palavra de até 10 caracteres (acentos não serão aceitos): ");
	gets(texto);
	
	for (i=0;i<10;i++) {
		if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'
		||  texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U') {
			vogal+=1;
		}
		else if(texto[i]!='a' || texto[i]!='e' || texto[i]!='i' || texto[i]!='o' || texto[i]!='u'
		||  texto[i]!='A' || texto[i]!='E' || texto[i]!='I' || texto[i]!='O' || texto[i]!='U') {
			consoante+=1;
		}
	}
	printf("Seu texto tem %i vogais e %i consoantes", vogal, consoante);
	
}
