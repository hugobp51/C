#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int t1=0;
	int t2=0;
	
	setlocale(LC_ALL,"portuguese");
	printf("digite quantos gols o time 1 teve: ");
	
	scanf("%d",&t1);
		printf("digite quantos gols o time 2 teve: ");
			scanf("%d",t2);
	
	if(t1 >tn2){
		printf("o primeiro time foi o vencedor");
	
	}else if( t1 == t2 ){
		printf("empate");
		
	}else{
		
		printf("o segundo time ganhou.");
	}
		
	return 0;}
