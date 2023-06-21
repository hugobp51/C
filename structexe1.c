#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionario{
	int matricula;
	char nome[50];
	float salario;
	int idade;
}t_funcionario;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	t_funcionario empresa[10];
	int i = 0;
	int contsal = 0;
	int contIdade = 0;
	int contIdadeSal = 0;
	
	for( i = 0;i <10;i++){
		printf("========================\n");
		printf("digite a matricula do funcionario: ");
			scanf("%d",&empresa[i].matricula);
		printf("digite o nome do funcionario: \n");
			scanf("%s",&empresa[i].nome);				
		printf("digite a idade do funcionario: \n");
			scanf("%d",&empresa[i].idade);	
		printf("digite o salario do funcionario: \n");
			scanf("%f",&empresa[i].salario);	
		printf("========================\n\n");
			
		if(empresa[i].salario >=2000 && empresa[i].salario <=3500){
			 contsal++;
		}
		if(empresa[i].idade >=28 && empresa[i].idade <=35){
			 contIdade++;		
		}	
		if(empresa[i].salario ==3000 && empresa[i].idade ==30){
			 contIdadeSal++;
		}
	}
	printf("\nquantidade de funcionarios com salario entre 2000/3500: %d",contsal);
	printf("\nquantidade de funcionarios com idade entre 28/35: %d",contIdade);
	printf("\nquantidade de funcionarios com salario de 3000 e com 30 anos de idade: %d",contIdadeSal);
	
		return 0;	
	}


