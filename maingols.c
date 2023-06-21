#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int t1 = 0;
	int t2 = 0;

	
	printf("quantos gols teve o primeiro time: ");
	
	scanf("%d",&t1);
	
	printf("quantos gols teve o segundo time: ");
		scanf("%d",&t2);
	
	if(t1 > t2)
	{
		printf("o time 1 ganhou com %d gols",t1);
	
	}else if( t1 == t2 ){
		
		printf("\t \t \t empate");
		
	}else{
		
		printf("o segundo time ganhou com %d gols",t2);
	}
		
	return 0;}
