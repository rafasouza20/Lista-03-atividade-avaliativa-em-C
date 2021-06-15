#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, num, j;
    i=0;
    j=0;
    
    system("color E");
    
    do{
    	for(i=1;i<=100;i++){
    		printf("\nDigite o %dº número: ",i);
    		scanf("%d", &num);
    		if(num<0){
    			break;
			}
    		
		}
    fflush(stdin);		
	}while(j=0);
	
	printf("\nForam digitados %d números", i);
	
	return 0;
}
