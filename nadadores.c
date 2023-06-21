#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
	
	int idade = 0;
	setlocale(LC_ALL,"portuguese");
	/*printf("insira a idade do nadador: ");
		scanf("%d",&idade);

	if(idade>=5 && idade<=7 ){
		printf("nadador de idade %d está na liga infantil A",idade);
		
	}else if (idade>=8 && idade<=10 ){
		printf("nadador de idade %d está na liga infantil B",idade);
		
	}else if (idade>=11 && idade<=13 ){
			printf("nadador de idade %d está na liga juvenil A",idade);
			
	}else if (idade>=14 && idade<=17 ){
		printf("nadador de idade %d está na liga juvenil B",idade);
		
	}else if (idade > 17){
		printf("\tnadador de idade %d está na liga sênior",idade);
		
	}else{
		printf("está abaixo da idade permitida");
	}
	*/
	
	int op;
	printf("Digite 1 para confirmar ser apto a Liga infantil A (5 a 7 anos)\n");
	printf("Digite 2 para confirmar ser apto a Liga infantil B  (8 a 10 anos)\n");
	printf("Digite 3 para confirmar ser apto a Liga juvenil A (11 a 13 anos)\n");
	printf("Digite 4 para confirmar ser apto a Liga juvenil B (14 a 17 anos)\n");
	printf("Digite 5 para confirmar ser apto a Liga sênior - Maiores de 17 anos\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:{
			printf("faixa de idade te coloca na liga infantil A");
			break;
		}
		case 2:{
			printf("faixa de idade te coloca na liga infantil B");
			break;
		}
		case 3:{
			printf("faixa de idade te coloca na liga juvenil A");
			break;
		}
		case 4:{
			printf("faixa de idade te coloca na liga juvenil B");
			break;
		}
		case 5:{
			printf("faixa de idade te coloca na liga senior");
			break;
		}
	}
	
	
	return 0;
}
