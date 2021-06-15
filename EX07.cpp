#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int maca, abacaxi, pera, qntd_fruta, i, escolha;
    i=0;
    abacaxi=0;
    pera=0;
    maca=0;
    
    system("color A");
    printf("Temos maçã, abacaxi e pêra, quantas frutas você vai querer? \n");
    scanf("%d", &qntd_fruta);
    
    	printf("|1-	ABACAXI	|\n");
    	printf("|2-	MAÇÃ	|\n");
    	printf("|3-	PÊRA	|\n");
    
    for(i=0;i<qntd_fruta;i++){
    printf("escolha uma fruta de acordo com seu número de identificação: ");
    scanf("%d", &escolha);
    	while((escolha!=1)and(escolha!=2)and(escolha!=3)){
    		printf("\nEssa fruta não está disponível, escolha uma das 3 disponíveis: ");
    		scanf("%d", &escolha);
		}
		fflush(stdin);
		
		if(escolha=1){
		abacaxi=abacaxi+1;
		}
		if(escolha=2){
			maca=maca+1;
		}
		if(escolha=3){
			pera=pera+1;
		}
	}
	fflush(stdin);
	system("cls");
	
	printf("Você escolheu %d frutas, dentre elas foram:\n", qntd_fruta);
	printf("%d abacaxis\n", abacaxi);
	printf("%d maçãs\n", maca);
	printf("%d pêras\n", pera);
	
	
	return 0;

}
