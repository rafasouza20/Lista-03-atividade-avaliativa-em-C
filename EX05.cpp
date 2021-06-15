#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_fat;
	i=0;
	num_fat=1;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	while(num > 0){
		num_fat = num_fat * num;
		num--;
	}
	printf("\n");
    printf("O fatorial do número é igual a %d", num_fat);
	
	return 0;
}
