#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int a =0;
	int b =0;
	int c =0;
	int soma =0;
	
	setlocale(LC_ALL,"portuguese");
	printf("insira um primeiro numero: ");
		scanf("%d",&a);
	printf("insira um segundo numero: ");
		scanf("%d",&b);
	printf("insira um terceiro numero: ");
		scanf("%d",&c);
		
	soma = a + b;
	
	if(soma < c){
		printf("A soma de %d e %d com resultado:%d � menor do que %d ", a, b, soma,  c);
	}else if( soma == c){
		printf("os valores s�o iguais");
	}
	else{
		printf("o valor %d � menor que a soma de %d + %d, que tem o resultado %d ",c,a,b,soma);
	}
	
	return 0;
}
