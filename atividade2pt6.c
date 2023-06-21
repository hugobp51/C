#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int op = 0;
	float alt = 0;
	float pesoid = 0;
	
		printf("======calculo peso ideal======\n\n");
		printf("qual sua altura? insira no formato 'x,xx': ");
			scanf("%f",&alt);
			
	printf("\nqual seu sexo? tecle: \n 1 para masculino \n 2 para feminino \n 3 para sair \n");
		scanf("%d",&op);
	
	switch(op){
		
	case 1:{
		pesoid = (72.7 * alt) - 58;
			printf("seu peso ideal é de: %.3f", pesoid);
		break;
	} 
	case 2:{
		pesoid = (62.1 * alt) - 44.7;
			printf("seu peso ideal é de: %.3f", pesoid);
		break;
	}
	case 3:{
		break;
		
	} 	default:{
		printf("opção inválida");
		break;
	}
	
	
	
	}
	return 0;
}
