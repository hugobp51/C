#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int a = 0;

	printf("digite um n�mero: \n");
	scanf("%d",&a);
	
	if (a%2==0){
		printf("o valor inserido � par");
		
	}else{
		printf("o valor inserido � �mpar");
	}
	
	return 0;
}
