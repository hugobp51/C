#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
setlocale(LC_ALL,"portuguese");
	float valor = 0;
	float total = 0;
	int op = 0;
	
printf("digite o valor do produto desejado para em seguida selecionar a forma de pagamento:");
	scanf("%f",&valor);
	
printf("\n======================================================\n \n");
	puts("0- SAIR\n");
	puts("1- � vista em dinheiro ou cheque, tendo 10% de desconto\n");
	puts("2-� vista no cart�o de cr�dito, tendo 15% de desconto\n");
	puts("3-dividido em duas vezes(pre�o normal)\n");
	puts("4-dividido Em tr�s vezes ou mais, acr�scimo de 10% de juros\n");

	scanf("%d",&op);
	
	switch(op){
		case 0:{
			break;
		}
		case 1:{
			float desc = 0; 
				desc = valor * 0.10;
				total = valor - desc; 
				
			printf("\nO valor do desconto foi de %.2f, ficando assim um total de: %.2f ",desc,total);
			
			break;
		}case 2:{
			float desc = 0; 
				desc = valor * 0.15;
				total = valor - desc;
				 
			printf("\nO valor do desconto foi de %.2f, ficando assim um total de: %.2f ",desc,total);
			
			break;
		}case 3:{
			//valor normal
			
			printf("\nO valor do produto n�o teve altera��o, tendo que ser pago: %.2f ",valor);
		
			break;
		}
		 case 4:{
		 	float acr = 0;
		 		acr = valor * 0.10;	
		 		total = valor + acr;
		 	
		 	printf("\nO valor do acr�scimo foi de %.2f, ficando assim um total de: %.2f ",acr,total);
		 		
			break;
		 }	
		default:{
			printf("\nop��o inv�lida");
			break;
		}
	return 0;
}}
