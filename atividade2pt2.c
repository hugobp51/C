#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int a =0;
	int b =0;
	int c =0;
	
	printf("insira o valor de A: ");
		scanf("%d",&a);
	printf("insira o valor de B: ");
		scanf("%d",&b);
	
	if(a == b){
		c = a + b;
			printf("a soma dos valores 'a' e 'b' tem o resultado %d",c);	
	}else{
		c = a * b;
			printf("o resultado da multiplicação de 'a' por 'b' tem o resultado: %d",c);
	}
			
		
	return 0;
}
