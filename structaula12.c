#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
	int idade;
	char nome[50];
	float peso;
}t_pessoa;
 
int main(int argc, char *argv[]) {
	
	int i=0;
	int soma;
	int media;
	
	t_pessoa galera[10];
	
	for(i=0;i<10;i++){
		printf("=========");
		
		printf("nome: ");
			scanf("%s",&galera[i].nome);
		printf("idade: ");
			scanf("%d",&galera[i].idade);
		printf("peso: ");
			scanf("%f",&galera[i].peso);
			
		printf("=========\n");
				
		soma += galera[i].idade;
	}
	media = soma/10;
	printf("media de idade: %d",media);
	
	return 0;
}
