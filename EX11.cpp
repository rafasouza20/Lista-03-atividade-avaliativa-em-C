#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i=1, juizes, nota[2], maiorNota;
	char finalista1[30], finalista2[30], finalista3[30], vencedor[30];
	
	system("color E");
	
	printf("nome do 1� finalista: ");
	fgets(finalista1, 30, stdin);
	fflush(stdin);
	printf("nome do 2� finalista: ");
	fgets(finalista2, 30, stdin);
	fflush(stdin);
	printf("nome do 3� finalista: ");
	fgets(finalista3, 30, stdin);
	fflush(stdin);
	printf("Quantos ju�zes ser�o? ");
	scanf("%d", &juizes);
	do {
		printf("Juiz %d, digite a nota do finalista %s", i, finalista1);
		scanf("%d", &nota[0]);
		fflush(stdin);
			while(nota[0]<0 || nota[0]>100){
				printf("nota inv�lida, tente novamente: ");		
				scanf("%d", &nota[0]);
			}
		printf("Juiz %d, qual a nota do finalista %s", i, finalista2);
		scanf("%d", &nota[1]);
		fflush(stdin);
			while(nota[1]<0 || nota[1]>100){
				printf("nota inv�lida, tente novamente: ");
				scanf("%d", &nota[1]);
			}
		printf("Juiz %d, qual a nota do finalista %s", i, finalista3);
		scanf("%d", &nota[2]);
		fflush(stdin);
			while(nota[2]<0 || nota[2]>100){
				printf("nota inv�lida, tente novamente: ");
				scanf("%d", &nota[2]);
			}
						
		i++;
	} while(i<=juizes);
	if (nota[0]>nota[1] && nota[0]>nota[2]){
		strcpy(vencedor, finalista1);
		maiorNota = nota[0];
	} else if(nota[1]>nota[0] && nota[1]>nota[2]){
		strcpy(vencedor, finalista2);
		maiorNota = nota[1];
	} else if(nota[2]>nota[0] && nota[2]>nota[1]){
	    strcpy(vencedor, finalista3);
		maiorNota = nota[2];
	}
	printf("\n%s teve um total de nota: %d", finalista1,nota[0]);
	printf("\n%s teve um total de nota: %d", finalista2,nota[1]);
	printf("\n%s teve um total de nota: %d", finalista3,nota[2]);
	printf("\nO vencedor do concurso �: %scom o total de pontos: %d", vencedor, maiorNota*juizes);	
return 0;	
}
