#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char op = 0;
	 printf("Digite:\n '+' para somar \n '-' para subtrair \n '*' para multiplicar \n '/'  para dividir \n 's' para sair \n");
		 scanf("%c",&op);
	
	switch(op){
		case '+':{
			int n1 = 0;
			int n2 = 0;
			int soma = 0;
			
			printf("insira um numero: ");
				scanf("%d",&n1);
			printf("insira um segundo numero: ");
				scanf("%d",&n2);
				soma = n1+n2;
			printf("a soma de %d com %d teve o resultado de %d: ", n1,n2,soma);
			
			break;
		} 
		case '-':{
			int n1 = 0;
			int n2 = 0;
			int sub = 0;
			
			printf("insira um numero: ");
				scanf("%d",&n1);
			printf("insira um segundo numero: ");
				scanf("%d",&n2);
				sub = n1-n2;
			printf("a subtracao de %d menos %d teve o resultado de %d: ", n1,n2,sub);
			break;
		} 
		case '*':{
			int n1 = 0;
			int n2 = 0;
			int mult = 0;
			
			printf("insira um numero: ");
				scanf("%d",&n1);
			printf("insira um numero para ser multiplicado: ");
				scanf("%d",&n2);
				mult = n1*n2;
			printf("a multiplicação de %d por %d teve o resultado de %d: ", n1,n2,mult);
			break;
		}
		case '/':{
				int n1 = 0;
			int n2 = 0;
			int div = 0;
			
			printf("insira um numero: ");
				scanf("%d",&n1);
			printf("insira um numero para ser dividido: ");
				scanf("%d",&n2);
				div = n1/n2;
			printf("a divisão de %d por %d teve o resultado de %d: ", n1,n2,div);
			break;
		}
		case 's':{
			printf("\n \t System exit");
			
			break;
		}
		default:{
			printf("opção inválida");
			break;
		}
	}
	return 0;	
}
