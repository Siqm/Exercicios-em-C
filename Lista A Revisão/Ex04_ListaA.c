/* 4- O Instituto Nacional de Meteorologia (INM) mede
 a quantidade de chuva em milímetros. Devido à um
acordo entre o INM e o Instituto Britânico (IB),
será necessário fazer o envio das informações brasileiras
para Londres. Entretanto o IB utiliza como medida da
quantidade de chuva a polegada. Sabendo-se que uma
polegada eqüivale a 25.4 milímetros, escreva um programa
que leia a quantidade de chuva em milímetros
e imprima esta quantidade em polegadas. */

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	int chuva, convert;
	
	printf("Insira a quantidade de milímetros: ");
	scanf("%i", &chuva);
	convert = 25.4/chuva;
	
	printf("A quantidade convertida para polegadas é igual a: %i", convert);
}
