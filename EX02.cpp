#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){ // início do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para português
	
	int num1, num2, soma;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &num2);
	system("cls");
	
	for (int i = 0; i < num1; i++ ){
        soma += num2;
    }
    
    printf("O resultado da multiplicação dos dois números é: %d", soma);
    
    return 0;
    
}
