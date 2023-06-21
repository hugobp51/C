#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int a = 0;

	printf("digite um número: \n");
	scanf("%d",&a);
	
	if (a%2==0){
		printf("o valor inserido é par");
		
	}else{
		printf("o valor inserido é ímpar");
	}
	
	return 0;
}
