#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int op;
	float n1,n2 = 0;
	float soma,sub,div,mult = 0;
	
	
	printf("=======operações matemáticas========");	
	printf("MENU:\nTECLE 1 PARA SOMA \n2 PARA SUBTRAÇÃO \n3 PARA MULTIPLICAR \n4 PARA DIVIDIR \n5 PARA SAIR \n");	
		scanf("%d",&op);
				
	switch(op){
	
		case 1:{
			
			printf("insira o primeiro valor da soma: ");
				scanf("%f",&n1);
				
			printf("insira o segundo valor da soma: ");
				scanf("%f",&n2);
				
			soma = n1 + n2;
			
			printf("o valor da soma teve o resultado: %.1f",soma);
			
			break;
			
		}
		case 2:{
			
			printf("insira o primeiro valor da subtração: ");
				scanf("%f",&n1);
				
			printf("insira o segundo valor para ser subtraído: ");
				scanf("%f",&n2);
				
			sub = n1 - n2;
			
				printf("o valor da subtração teve o resultado: %.1f",sub);
				
			break;
		}
		case 3:{
			
			printf("insira o primeiro valor da multiplicação: ");
				scanf("%f",&n1);
				
			printf("insira o valor para ser multiplicado: ");
				scanf("%f",&n2);
				
			mult = n1 * n2;
			
				printf("o valor da multiplicação teve o resultado: %.1f",mult);
				
			break;
		}
			case 4:{
			
			printf("insira o primeiro valor: ");
				scanf("%f",&n1);
				
			printf("insira o valor para ser dividido: ");
				scanf("%f",&n2);
				
			div = n1 / n2;
			
				printf("o valor da divisão entre %.0f e %.0f teve o resultado: %.1f",n1,n2,div);
				
			break;
		}
		case 5:{
			printf("\n \t fim do programa!");
			
			break;
		}
		default:{
			printf("opção inválida!!");
			break;
		}
}
	return 0;
}
