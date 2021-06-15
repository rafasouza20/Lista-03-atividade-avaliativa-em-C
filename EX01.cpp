#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){ // início do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para português
	
	int fat, n;
	printf("Insira um valor: ");
	scanf("%d", &n);
 
	for(fat = 1; n > 1; n = n - 1){
	
		fat = fat * n;
}
		printf("\nFatorial calculado: %d", fat);

	return 0;	
}
