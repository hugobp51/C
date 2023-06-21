#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int vet[10];
	int i = 0;
	
	for (i=0; i<10;i++){
		printf("digite um numero para inserir no vetor: ");
		scanf("%d",&vet[i]);
		
	}for (i=0; i<10;i++){
		if(vet[i]%2==0){
				printf("%d \n",vet[i]);
				
		}
		
	}
	
	
	
	return 0;
}
