#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, num, j;
    i=0;
    j=0;
    
    system("color E");
    
    do{
    	for(i=1;i<=100;i++){
    		printf("\nDigite o %d� n�mero: ",i);
    		scanf("%d", &num);
    		if(num<0){
    			break;
			}
    		
		}
    fflush(stdin);		
	}while(j=0);
	
	printf("\nForam digitados %d n�meros", i);
	
	return 0;
}
