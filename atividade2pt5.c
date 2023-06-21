#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int n1,n2,n3 = 0;
	setlocale(LC_ALL,"portuguese");
	
	printf("insira o primeiro numero: ");
		scanf("%d",&n1);	
		
	printf("insira um segundo numero: ");	
		scanf("%d",&n2);
		
	printf("insira o terceiro numero: ");	
		scanf("%d",&n3);
		
		
	if(n1>n2 && n2>n3){
		printf("%d\n%d\n%d\n",n1,n2,n3);
		
	}else if(n3>n2 && n2>n1){
		printf("%d\n%d\n%d\n",n3,n2,n1);
		
	}else if(n3>n2 && n1>n3){
		printf("%d\n%d\n%d\n",n1,n3,n2);
		
	}else if(n2>n3 && n3>n1){
		printf("%d\n%d\n%d\n",n2,n3,n1);
		
	}else if(n2>n1 && n1>n3){
		printf("%d\n%d\n%d\n",n2,n1,n3);
		
	}else if(n3>n1 && n1>n2){
		printf("%d\n%d\n%d\n",n3,n1,n2);
		
	}else{
		printf("há pelo menos um valor repetido, sistema inválido");
	}
	return 0;
}
