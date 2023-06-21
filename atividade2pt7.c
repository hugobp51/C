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
		printf("seu imc � de %.2f e voc� est� dentro da faixa de peso ideal, que � Entre 18,5 e 25",imc);
		
	}else if(imc >=25 && imc <30 ){
		printf("seu imc � de %.2f, voc� est� acima do peso, ficando dentro do intervalo entre 25 e 30",imc);
		
	}else if(imc >30 ){
		printf("seu imc � de %.2f e voc� est� obeso(a), pois imc est� superior a 30 ",imc);
		
	}else {
		printf("seu imc � de %.2f e voc� est� abaixo do peso m�nimo",imc);
	}

	return 0;
}
