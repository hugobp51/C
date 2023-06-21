#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i =0;
	int qtd =0;
	float sal =0;
	float mediasal =0;
	float somasal =0;
	
	printf("insira a quantidade de funcionarios: ");
		scanf("%d",&qtd);
	
	for(i=1;i<=qtd;i++){
		printf("digite o salario:");
			scanf("%f",&sal);
			
		somasal = somasal + sal;}
		
		mediasal = somasal/qtd;
		
	printf("a media salarial da empresa eh de %f",mediasal);
	
	
	return 0;
}
