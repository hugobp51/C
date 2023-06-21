#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int op = 0;
	printf("DIGITE 1 - SOMAR, 2 - SUBTRAIR, 3 - MULTIPLICAR, 4 - DIVIDIR E 5 PARA SAIR\n");
	setlocale(LC_ALL,"portuguese");
	scanf("%d",&op);
	
	switch(op){
		case 1:{
			int n1 = 0;
			int n2 = 0;
			int soma = 0;
			printf("digite o primeiro numero: ");
			scanf("%d",&n1);
			printf("digite o segundo numero: ");
			scanf("%d",&n2);
			soma = n1 + n2;
			printf("a soma dos dois numeros teve o resultado: %d",soma);
			break;
		}
		case 2:{
			int n1 = 0;
			int n2 = 0;
			int sub = 0;
			printf("digite o primeiro numero: ");
			scanf("%d",&n1);
			printf("digite o segundo numero: ");
			scanf("%d",&n2);
			sub = n1 - n2;
			printf("a subtração dos dois numeros teve o resultado: %d",sub);
			break;
		}
		case 3:{
			int n1 = 0;
			int n2 = 0;
			int mult = 0;
			printf("digite o primeiro numero: ");
			scanf("%d",&n1);
			printf("digite em quantas vezes esse numero vai ser multiplicado: ");
			scanf("%d",&n2);
			mult = n1 * n2;
			printf("a multiplicaçao dos dois numeros teve o resultado: %d",mult);
			break;
		}
		case 4:{
			float n1 = 0;
			float n2 = 0;
			float div = 0;
			printf("digite o primeiro numero: ");
			scanf("%f",&n1);
			printf("digite em quantas vezes esse numero vai ser dividido: ");
			scanf("%f",&n2);
			div = n1/n2;
			printf("a divisao dos dois numeros teve o resultado: %.1f",div);
			
			break;
		} 
		case 5:{
			
			break;
		}
	 	default:{
	 		printf("opcao invalida");
			break;
		 }
	}
	
	return 0;
}
