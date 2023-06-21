#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int op =0;
	printf("digite um numero correspondente ao mes do ano: ");
	scanf("%d",&op);
	
	switch(op){
		case 0:{
			break;
		}
		case 1:{
			printf("você selecionou o mês de janeiro, com 31 dias");
			break;
		}case 2:{
			printf("você selecionou o mês de fevereiro, com 28 dias");
			break;
		}case 3:{
			printf("você selecionou o mês de março, com 31 dias");
			break;
		}case 4:{
			printf("você selecionou o mês de abril, com 30 dias");
			break;
		}case 5:{
			printf("você selecionou o mês de maio, com 31 dias");
			break;
		}case 6:{
			printf("você selecionou o mês de junho, com 30 dias");
			break;
		}case 7:{
			printf("você selecionou o mês de julho, com 31 dias");
			break;
		}case 8:{
			printf("você selecionou o mês de agosto, com 31 dias");
			break;
		}case 9:{
			printf("você selecionou o mês de setembro, com 30 dias");
			break;
		}case 10:{
			printf("você selecionou o mês de outubro, com 31 dias");
			break;
		}case 11:{
			printf("você selecionou o mês de novembro, com 30 dias");
			break;
		}case 12:{
			printf("você selecionou o mês de dezembro, com 31 dias");
			break;
		}
		default:{
			printf("opção inválida");
			break;
		}
	}
	return 0;
}
