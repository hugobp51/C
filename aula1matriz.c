#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz[3][3];
	int i,j = 0;
	
	/*printf("digite um valor: ");
		scanf("%d",&matriz[0][0]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[0][1]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[0][2]);
		
		
		
		
	printf("digite um valor: ");
		scanf("%d",&matriz[1][0]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[1][1]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[1][2]);
		
			
		
	printf("digite um valor: ");
		scanf("%d",&matriz[2][0]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[2][1]);
		
	printf("digite um valor: ");
		scanf("%d",&matriz[2][2]);	
		
		
		printf("\n%d - %d - %d\n",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf("%d - %d - %d\n",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf("%d - %d - %d",matriz[2][0],matriz[2][1],matriz[2][2]); */
		
	for(i=0;i<3;i++)	
		for(j=0;j<3;j++){
			printf("insira o valor para [%d][%d]: ",i,j);
				scanf("%d",&matriz[i][j]);
		}
		
		printf("\n%d - %d - %d\n",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf("%d - %d - %d\n",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf("%d - %d - %d",matriz[2][0],matriz[2][1],matriz[2][2]);
		
	/*	for(i=0;i<3;i++)	
		for(j=0;j<3;j++){
			printf("\t %d",matriz[i][j]);
		}*/
		
	return 0;
}
