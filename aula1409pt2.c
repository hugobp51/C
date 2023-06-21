#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i =0;
	int contador =0;
	int num =0;
	
	
	
	for (i=1;i<=10;i++){
		printf("insira um numero: ");
		scanf("%d",&num);
		
		if(num>=10 && num <=35){
				contador ++;
		}
		printf("existem %d numeros dentre 10 e 35",contador);
	
	}
	
	return 0;
}
