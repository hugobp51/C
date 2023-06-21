#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i = 1;
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float soma =0;
	float media =0;
	
		
	while(i <= 3){
		printf("insira a nota 1: ");
			scanf("%f",&n1);
		printf("insira a nota 2: ");
			scanf("%f",&n2);
		printf("insira a nota 3: ");
			scanf("%f",&n3);
		
		soma = n1 + n2 + n3;
			
		media = soma/3;
			printf("\na media do aluno %d foi de:  %.1f\n \n \n",i, media);
			
		i++;
	}
		
	
	
	return 0;
}
