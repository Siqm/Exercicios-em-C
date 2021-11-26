/* 3- Para realizar a conversão de temperatura da escala Celsius para
 a escala Fahrenheit é necessário usar a fórmula F = 1.8 * C + 32.
  Escreva um programa que leia uma temperatura em Celsius e imprima 
  a temperatura convertida para Fahrenheit. */

#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	
	int tempF, convert;
	
	printf("Insira a temperatura em Celsius: ");
	scanf("%i", &tempF);
	
	convert = 1.8*tempF+32;
	printf("A temperatura convertida é igual a: %i", convert);
	
}
