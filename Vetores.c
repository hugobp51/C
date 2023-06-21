#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	//crie um vetor com 10 espaços e preencha com inteiros
	
	int vet[10];
	
	printf("preenchendo um vetor\n");
	
	printf("insira o primeiro valor: ");
		scanf("%d",&vet[0]);
		
	printf("insira o segundo valor: ");
		scanf("%d",&vet[1]);
		
	printf("insira o terceiro valor: ");
		scanf("%d",&vet[2]);
			
	printf("insira o quarto valor: ");
		scanf("%d",&vet[3]);
			
	printf("insira o quinto valor: ");
		scanf("%d",&vet[4]);
		
	printf("insira o sexto valor: ");
		scanf("%d",&vet[5]);
		
	printf("insira o sétimo valor: ");
		scanf("%d",&vet[6]);
			
	printf("insira o oitavo valor: ");
		scanf("%d",&vet[7]);
		
	printf("insira o nono valor: ");
		scanf("%d",&vet[8]);
		
	printf("insira o décimo valor: ");
		scanf("%d",&vet[9]);				
		
	printf("a ordem digitada em sequência é: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d ",vet[0],vet[1],vet[2],vet[3],vet[4],vet[5],vet[6],vet[7],vet[8],vet[9]);
		
	return 0;
}
