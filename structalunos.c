#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno{
	float n1;
	float n2;
	float n3;
	int rgm;
	char nome[50];
}t_aluno;


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float somamedia;
	float media = 0;
	float mediaG = 0;
	t_aluno turma[10];
	int i =0;
	
	for(i=0;i<10;i++){
		
		
		printf("\n=============\n");
		printf("nome do aluno: ");
			scanf("%s",&turma[i].nome);
		printf("rgm: ");
			scanf("%d",&turma[i].rgm);
		printf("n1: ");
			scanf("%f",&turma[i].n1);
		printf("n2: ");
			scanf("%f",&turma[i].n2);
		printf("n3: ");
			scanf("%f",&turma[i].n3);
			
		media = (turma[i].n1 + turma[i].n2 + turma[i].n3)/3;	
		
		printf("média do aluno: %.1f",media);
		printf("\n=============\n");	
		
		somamedia += media;						
	}
	
	mediaG =  somamedia/10;
	
	printf("media geral da turma: %.1f",mediaG);
	
	
	
	return 0;
}
