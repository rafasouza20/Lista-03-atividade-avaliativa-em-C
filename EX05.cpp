#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_fat;
	i=0;
	num_fat=1;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	while(num > 0){
		num_fat = num_fat * num;
		num--;
	}
	printf("\n");
    printf("O fatorial do n�mero � igual a %d", num_fat);
	
	return 0;
}
