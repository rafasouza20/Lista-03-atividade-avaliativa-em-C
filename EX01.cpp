#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
	
	int fat, n;
	printf("Insira um valor: ");
	scanf("%d", &n);
 
	for(fat = 1; n > 1; n = n - 1){
	
		fat = fat * n;
}
		printf("\nFatorial calculado: %d", fat);

	return 0;	
}
