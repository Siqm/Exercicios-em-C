/* 4- O Instituto Nacional de Meteorologia (INM) mede
 a quantidade de chuva em mil�metros. Devido � um
acordo entre o INM e o Instituto Brit�nico (IB),
ser� necess�rio fazer o envio das informa��es brasileiras
para Londres. Entretanto o IB utiliza como medida da
quantidade de chuva a polegada. Sabendo-se que uma
polegada eq�ivale a 25.4 mil�metros, escreva um programa
que leia a quantidade de chuva em mil�metros
e imprima esta quantidade em polegadas. */

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	int chuva, convert;
	
	printf("Insira a quantidade de mil�metros: ");
	scanf("%i", &chuva);
	convert = 25.4/chuva;
	
	printf("A quantidade convertida para polegadas � igual a: %i", convert);
}
