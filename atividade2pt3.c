#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"portuguese");
	
	int a = 0;
	int dobro = 0;
	int triplo = 0;
	
	printf("insira um valor: ");
		scanf("%d",&a);
		
	if( a > 0 ){
		dobro = a * 2;
		printf("o dobro de %d é %d",a,dobro);
		
	}else{
		triplo = a * 3;
		printf("o triplo de %d é %d",a,triplo);
		
	}
	
	
	return 0;
}
