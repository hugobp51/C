#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
setlocale(LC_ALL,"portuguese");
	float total = 0;
	int op = 0;
printf("====MERCADINHO DOIS IRMÃOS====\n");
printf("digite o valor total de suas compras:\n");
	scanf("%f",&total);
printf("Selecione qual tipo de cliente você é:\n");
puts("0- SAIR");
puts("1-VIP");
puts("2-NORMAL");
puts("3-ESTUDANTE");

	scanf("%d",&op);
	
	switch(op){
		case 0:{
			break;
		}
		case 1:{
			float desc = 0; 
				desc = total * 0.5;
			printf("O valor do desconto foi de %.0f ",desc);
			
			break;
		}case 2:{
			float desc = 0; 
				desc = total * 0.1;
			printf("O valor do desconto foi de %.0f ",desc);
			
			break;
		}case 3:{
			float desc = 0; 
				desc = total * 0.3;
			printf("O valor do desconto foi de %.0f ",desc);
		
			break;
		}	
		default:{
			printf("opção inválida");
			break;
		}
	return 0;
}}
