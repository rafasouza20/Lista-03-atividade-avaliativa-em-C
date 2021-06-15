#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, quant_Produto; //i para o for, e quantidade de produtos
	char ajuda, nome_Produto[50]; 
	float valor; // preço
	
	system("color E");
	
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &quant_Produto);
	fflush(stdin);
	for (i = 1; i <= quant_Produto; i++){	
		if (i < quant_Produto){
	        printf("\nnome do produto %d? ",i);
		    fgets(nome_Produto, 50, stdin);
			fflush(stdin);
	    
	    	printf("preço desse produto %d? ", i);
	    	scanf("%f", &valor);
	    	fflush(stdin);
			printf("\nproduto %scomeçou a custar %.2f!\n", nome_Produto, valor * 1.1);
			printf("\nDeseja outro produto? sim(S) não(N): ");
			scanf("%c", &ajuda);
			fflush(stdin); 
			ajuda = toupper(ajuda);
	}
        else
		    printf("O preço do último produto possui valor igual a -1");
		if(ajuda == 'N') {
			i = quant_Produto;
		}
	}

	return 0;
}
