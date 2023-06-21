#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int matriz[4][4];
	int i = 0;
	int j = 0;
	int add = 0;
	int entre = 0;
	
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){
			printf("insira o valor para [%d][%d]",i,j);
				scanf("%d",&matriz[i][j]);
	}
}
	for(i=0;i<4;i++){	
		for(j=0;j<4;j++){
			add += matriz[i][j];
		}	
	}	
	printf("%d\n",add);


	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				printf("\n%d",matriz[i][j]);
			}
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(matriz[i][j]>=15 && matriz[i][j]<=35){
				entre++;	
			}
		}	
	}
	printf("\t \n\n%d", entre);
	
	return 0;
}
