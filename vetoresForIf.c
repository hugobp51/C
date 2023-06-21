#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	int i = 0;
	int vet[15];
	int zeros = 0;
	int pares = 0;
	int impares = 0;
	
	
	for(i=0;i<15;i++){
		
		printf("digite um numero para colocar no vetor: ");
	scanf("%d",&vet[i]);
	
}	for(i=0;i<15;i++){

	if(vet[i]==0){
		zeros++;
	}else if(vet[i]%2==0){
		pares++;
	}else{
		impares++;
	}	
}
	printf("pares: %d ", pares);
	printf("impares: %d ", impares);
	printf("zeros: %d ", zeros);
 
	
	
	return 0;
}
