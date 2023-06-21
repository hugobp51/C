#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
		int idade;
		int cpf;
		floa peso;
		char nome[50];
	}t_pessoa;
	
int main(int argc, char *argv[]) {
	t_pessoa galera[10];
	t_pessoa p1;
	
	galera[0].idade = 5;
	printf("digite um nome: ");
		scanf("%s",&p1.nome);
	printf("digite seu cpf: ");
		scanf("%d",&p1.cpf);
	printf("digite seu peso: ");
		scanf("%f",&p1.peso);
	printf("digite sua idade: ");
		scanf("%d",&p1.idade);
				
	return 0;
}
