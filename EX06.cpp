#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
	int alunos, masculino, feminino;
	float notas, notasF, notasM, mediaF, mediaM;
	char sexo;
	masculino = 0;
	feminino = 0;
	notas = 0; 
	notasF = 0; 
	notasM = 0; 
	mediaF = 0; 
	mediaM = 0;
	
	printf("Quantos alunos estudam nessa turma? ");
	scanf("%d", &alunos);
	fflush(stdin);
	printf("\nInforme o sexo do aluno e depois a nota");
	printf("\n");
	
	for (int i = 1; i <= alunos; i++){
	   	do{
	   		printf("\nO aluno %d � do sexo M(masculino) ou F(feminino)?", i);
	   		 scanf("%c", &sexo);
	   		 sexo = toupper(sexo); 
}		while (sexo !='F' && sexo !='M');

	    fflush(stdin);
	       
	    printf("\nDigite a nota desse aluno(a) de 0 a 10: ");
		scanf("%f", &notas);
		while((notas < 0 )or(notas > 10)){
			printf("\nNOTA INV�LIDA DIGITE NOVAMENTE: ");
			scanf("%f", &notas);
		}
		fflush(stdin);
			
		   if (sexo == 'F'){ 
	    	feminino++; 
		    notasF = notasF + notas;
			}
		   else if (sexo == 'M'){ 
	        masculino++;  
	        notasM = notasM + notas;
			} 
	}
	   mediaF = notasF / feminino;
	   mediaM = notasM / masculino;
	   printf ("A m�dia de notas das meninas � %.2f\n", mediaF);
	   printf ("A m�dia de notas dos meninos � %.2f", mediaM);
	
	return 0; 
}
