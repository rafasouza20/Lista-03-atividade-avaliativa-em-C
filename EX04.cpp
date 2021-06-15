#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){
	setlocale(LC_ALL,"Portuguese");
	
		double N, i;
		double H = 0;
		double dvs = 0;
	
	printf("Digite o valor de N: ");
	scanf("%lf", &N);

	for(i=1; i<=N; i++){
		dvs = 1/i;
		H = H + dvs; 	
}
	printf("O resultado da fórmula é: %lf", H);

	return 0;

}
