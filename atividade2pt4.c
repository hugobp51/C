#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"portuguese");
	int num = 0;
	
	printf("insira um valor: ");
	scanf("%d",&num);
	
	if(num%2==0){
		num = num + 5;
			printf("resultado atual da soma com n�mero par � %d",num);
	}else{
		num = num + 8;
			printf("resultado atual da soma com n�mero �mpar � %d",num);
	}
	
	return 0;
}
