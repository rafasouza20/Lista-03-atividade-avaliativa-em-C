#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, quant_Produto; //i para o for, e quantidade de produtos
	char ajuda, nome_Produto[50]; 
	float valor; // pre�o
	
	system("color E");
	
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &quant_Produto);
	fflush(stdin);
	for (i = 1; i <= quant_Produto; i++){	
		if (i < quant_Produto){
	        printf("\nnome do produto %d? ",i);
		    fgets(nome_Produto, 50, stdin);
			fflush(stdin);
	    
	    	printf("pre�o desse produto %d? ", i);
	    	scanf("%f", &valor);
	    	fflush(stdin);
			printf("\nproduto %scome�ou a custar %.2f!\n", nome_Produto, valor * 1.1);
			printf("\nDeseja outro produto? sim(S) n�o(N): ");
			scanf("%c", &ajuda);
			fflush(stdin); 
			ajuda = toupper(ajuda);
	}
        else
		    printf("O pre�o do �ltimo produto possui valor igual a -1");
		if(ajuda == 'N') {
			i = quant_Produto;
		}
	}

	return 0;
}
