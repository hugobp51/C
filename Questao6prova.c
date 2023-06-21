#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	//Leia quantas idades o usuário quiser digitar e armazene em um vetor, depois... 
	//...calcule a média entre as idades. E por fim exiba qual foi a maior idade digitada bem como a menor.

	
	int n = 0;
	int i = 0;
	float media;
	float soma = 0;
	int maior_idade = 0;
	int menor_idade = 0;
	
	
	
	printf("quantas idades serão contabilizadas?");
		scanf("%d",&n);
	int idade[n];
	
	for(i=0;i<n;i++){
		printf("insira a idade: ");
			scanf("%d",&idade[i]);
			
			  
	} for(i=0;i<n;i++){
			soma = soma + idade[i];
	}	media = soma/n;
	                     
			printf("media: \n\\n",media);


	
	
	return 0;
}
