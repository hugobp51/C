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
			printf("voc� selecionou o m�s de janeiro, com 31 dias");
			break;
		}case 2:{
			printf("voc� selecionou o m�s de fevereiro, com 28 dias");
			break;
		}case 3:{
			printf("voc� selecionou o m�s de mar�o, com 31 dias");
			break;
		}case 4:{
			printf("voc� selecionou o m�s de abril, com 30 dias");
			break;
		}case 5:{
			printf("voc� selecionou o m�s de maio, com 31 dias");
			break;
		}case 6:{
			printf("voc� selecionou o m�s de junho, com 30 dias");
			break;
		}case 7:{
			printf("voc� selecionou o m�s de julho, com 31 dias");
			break;
		}case 8:{
			printf("voc� selecionou o m�s de agosto, com 31 dias");
			break;
		}case 9:{
			printf("voc� selecionou o m�s de setembro, com 30 dias");
			break;
		}case 10:{
			printf("voc� selecionou o m�s de outubro, com 31 dias");
			break;
		}case 11:{
			printf("voc� selecionou o m�s de novembro, com 30 dias");
			break;
		}case 12:{
			printf("voc� selecionou o m�s de dezembro, com 31 dias");
			break;
		}
		default:{
			printf("op��o inv�lida");
			break;
		}
	}
	return 0;
}
