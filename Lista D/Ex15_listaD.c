/*15- A espaçonave Voyager está em uma viagem até Plutão. Dentro dela, os tripulantes estão em estado dormente em
quatro cápsulas de sono (cápsula 1, cápsula 2, cápsula 3 e cápsula 4). De hora a hora são medidas as temperaturas
de cada tripulante (ao longo de um dia = 24 leituras para cada tripulante). Escreva um programa capaz de:

1. Proceder à leitura e armazenamento numa matriz de dimensão 24x4 dos valores das temperaturas dos 4 tripulantes ao longo das 24 horas de um dia;
2. Calcular e apresentar a média das pulsações para cada um dos tripulantes;
3. Identificar a capsula onde se encontra o tripulante que apresentou o menor valor médio das temperaturas lidas;
4. Identificar o valor menos elevado armazenado na matriz e a identificação da cápsula e da hora em que ocorreu.*/

#include <locale.h>
#include <stdio.h>
#define QTD 24

float calcularMedia (float pcap[]) {
	int i;
	float soma=0;
	
	for (i=0;i<QTD;i++) {
		soma+=pcap[i];
	}
	return soma/QTD;
}

void menosElevado(float c1[], float c2[], float c3[], float c4[]) {
	int i, j, hora, capsula;
	float smatriz[QTD][4], mElevado=100;
	
	//junta todos os vetores em uma matriz 24x4
	for (i=0;i<QTD;i++)
		smatriz[i][0]=c1[i];
	for (i=0;i<QTD;i++)
		smatriz[i][1]=c2[i];
	for (i=0;i<QTD;i++)
		smatriz[i][2]=c3[i];
	for (i=0;i<QTD;i++)
		smatriz[i][3]=c4[i];
		
	//Busca o valor menos elevado e a posição que ele está dentro da matriz
	for (i=0;i<QTD;i++) {
		for (j=0;j<4;j++){
			if (mElevado>smatriz[i][j]){
				hora=i;
				capsula=j;
				mElevado=smatriz[i][j];
			}
		}
	}
	printf("\n\nA hora da menor temperatura foi na capsula %i às %i:00 e corresponde a: %.2f°C", capsula+1,hora,mElevado);
}

void main () { 
	setlocale(LC_ALL,"");
	
	int i, j, menormedia;
	float cap1[QTD], cap2[QTD], cap3[QTD], cap4[QTD], media[4], contador=100;
	
	for(i=0;i<QTD;i++) {
		printf("Horário %i:00\tInsira a temperatura da capsula 1: ",i);
		scanf("%f", &cap1[i]);
		printf("Horário %i:00\tInsira a temperatura da capsula 2: ",i);
		scanf("%f", &cap2[i]);
		printf("Horário %i:00\tInsira a temperatura da capsula 3: ",i);
		scanf("%f", &cap3[i]);
		printf("Horário %i:00\tInsira a temperatura da capsula 4: ",i);
		scanf("%f", &cap4[i]);
		printf("\n");
	}
	
	media[0]=calcularMedia(cap1);
	printf("A média da temperatura da capsula 1 foi de: %.2f°C", media[0]);
	media[1]=calcularMedia(cap2);
	printf("\nA média da temperatura da capsula 2 foi de: %.2f°C", media[1]);
	media[2]=calcularMedia(cap3);
	printf("\nA média da temperatura da capsula 3 foi de: %.2f°C", media[2]);
	media[3]=calcularMedia(cap4);
	printf("\nA média da temperatura da capsula 4 foi de: %.2f°C", media[3]);
	
	for (i=0;i<4;i++){
		if (contador>media[i]){
		contador=media[i];
		menormedia=i;
		}
	}
	printf("\n\nA menor média de temperatura foi da capsula n°%i", menormedia+1);
	menosElevado(cap1, cap2,cap3,cap4);
}
