#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float peso =0;	
	float alt =0;	
	float imc =0;	
	
	printf("qual seu peso?\n");
		scanf("%f",&peso);
	printf("qual sua altura?\n");
		scanf("%f",&alt);
		
	imc = peso/(alt*alt);
	
	if ( imc >=18.5 && imc <25 ){
		printf("seu imc é de %.2f e você está dentro da faixa de peso ideal, que é Entre 18,5 e 25",imc);
		
	}else if(imc >=25 && imc <30 ){
		printf("seu imc é de %.2f, você está acima do peso, ficando dentro do intervalo entre 25 e 30",imc);
		
	}else if(imc >30 ){
		printf("seu imc é de %.2f e você está obeso(a), pois imc está superior a 30 ",imc);
		
	}else {
		printf("seu imc é de %.2f e você está abaixo do peso mínimo",imc);
	}

	return 0;
}
