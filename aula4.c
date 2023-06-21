#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n1=0;
	int n2=0;
	
	printf("digite um valor: ");
	
	scanf("%d",&n1);
		printf("digite um segundo valor: ");
			scanf("%d",n2);
	
	if(n1 > n2){
		printf("o primeiro valor eh maior que o segundo");
	
	}else if( n1 == n2 ){
		printf("sao iguais");
		
	}else{
		
		printf("o segundo valor eh maior que o primeiro.");
	}
		
	return 0;}
