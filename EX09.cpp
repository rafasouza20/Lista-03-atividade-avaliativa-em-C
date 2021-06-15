#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    char cor_olho[20], cor_cabelo[20], sexo;
	int i, woman, maior_idade, people, idade;
	float porcent;
	woman=0;
	i=1;
	
	system("color E");
	
	printf("Quantidade de  pessoas que estarão sendo cadastradas: ");
	scanf("%d", &people);
	fflush(stdin);
	
	printf("Se desejar terminar a pesquisa digite '0' na idade.\n");
	do {
		printf("Digite o sexo da %dª pessoa MASCULINO(M) ou FEMININO(F): \n", i);
		scanf("%c", &sexo);
		sexo=tolower(sexo);
		fflush(stdin);
		printf("Qual é a cor dos olhos da %dª pessoa: azul, castanho, verde, preto: \n", i);
		scanf("%s", &cor_olho);
		fflush(stdin);
		printf("Qual é a cor do cabelo da %dª pessoa: loiro, castanho, preto: \n", i);
		scanf("%s", &cor_cabelo);
		printf("Informe a idade da %dª pessoa: \n", i);
		scanf("%d", &idade);
		while(idade<0){
			printf("idade inválida, digite novamente: ");
			scanf("%d", &idade);
		}
		fflush(stdin);
		
		if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(cor_olho, "verde") && strcmp(cor_cabelo, "loiro"));
			woman++;
		if(i==1)
			maior_idade=idade;
		if(maior_idade<idade) // se a maiorIdade for menor que a idade, o maior valor da idade é tranferido para maiorIdade
			maior_idade=idade;
		i++;	
	} while(idade>0);	
		porcent=(woman/people) * 100; 
		fflush(stdin);
		system("cls");
		printf("Fim da pesquisa\n");
		printf("\n");
		printf("O habitante mais velho possui: %d anos.\n", maior_idade);
		printf("A porcentagem de habitantes do sexo feminino, tendo idade de 18 a 35 anos, cabelo loiro e olho verde é: %.2f %%", porcent);

return 0;	
}
