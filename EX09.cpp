#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    char cor_olho[20], cor_cabelo[20], sexo;
	int i, woman, maior_idade, people, idade;
	float porcent;
	woman=0;
	i=1;
	
	system("color E");
	
	printf("Quantidade de  pessoas que estar�o sendo cadastradas: ");
	scanf("%d", &people);
	fflush(stdin);
	
	printf("Se desejar terminar a pesquisa digite '0' na idade.\n");
	do {
		printf("Digite o sexo da %d� pessoa MASCULINO(M) ou FEMININO(F): \n", i);
		scanf("%c", &sexo);
		sexo=tolower(sexo);
		fflush(stdin);
		printf("Qual � a cor dos olhos da %d� pessoa: azul, castanho, verde, preto: \n", i);
		scanf("%s", &cor_olho);
		fflush(stdin);
		printf("Qual � a cor do cabelo da %d� pessoa: loiro, castanho, preto: \n", i);
		scanf("%s", &cor_cabelo);
		printf("Informe a idade da %d� pessoa: \n", i);
		scanf("%d", &idade);
		while(idade<0){
			printf("idade inv�lida, digite novamente: ");
			scanf("%d", &idade);
		}
		fflush(stdin);
		
		if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(cor_olho, "verde") && strcmp(cor_cabelo, "loiro"));
			woman++;
		if(i==1)
			maior_idade=idade;
		if(maior_idade<idade) // se a maiorIdade for menor que a idade, o maior valor da idade � tranferido para maiorIdade
			maior_idade=idade;
		i++;	
	} while(idade>0);	
		porcent=(woman/people) * 100; 
		fflush(stdin);
		system("cls");
		printf("Fim da pesquisa\n");
		printf("\n");
		printf("O habitante mais velho possui: %d anos.\n", maior_idade);
		printf("A porcentagem de habitantes do sexo feminino, tendo idade de 18 a 35 anos, cabelo loiro e olho verde �: %.2f %%", porcent);

return 0;	
}
