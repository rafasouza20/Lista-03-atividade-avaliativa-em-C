#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
	
	int num1, num2, soma;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &num2);
	system("cls");
	
	for (int i = 0; i < num1; i++ ){
        soma += num2;
    }
    
    printf("O resultado da multiplica��o dos dois n�meros �: %d", soma);
    
    return 0;
    
}
