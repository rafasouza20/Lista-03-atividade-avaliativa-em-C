#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int maca, abacaxi, pera, qntd_fruta, i, escolha;
    i=0;
    abacaxi=0;
    pera=0;
    maca=0;
    
    system("color A");
    printf("Temos ma��, abacaxi e p�ra, quantas frutas voc� vai querer? \n");
    scanf("%d", &qntd_fruta);
    
    	printf("|1-	ABACAXI	|\n");
    	printf("|2-	MA��	|\n");
    	printf("|3-	P�RA	|\n");
    
    for(i=0;i<qntd_fruta;i++){
    printf("escolha uma fruta de acordo com seu n�mero de identifica��o: ");
    scanf("%d", &escolha);
    	while((escolha!=1)and(escolha!=2)and(escolha!=3)){
    		printf("\nEssa fruta n�o est� dispon�vel, escolha uma das 3 dispon�veis: ");
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
	
	printf("Voc� escolheu %d frutas, dentre elas foram:\n", qntd_fruta);
	printf("%d abacaxis\n", abacaxi);
	printf("%d ma��s\n", maca);
	printf("%d p�ras\n", pera);
	
	
	return 0;

}
