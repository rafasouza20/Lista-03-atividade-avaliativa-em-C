#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

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
	printf("O resultado da f�rmula �: %lf", H);

	return 0;

}
