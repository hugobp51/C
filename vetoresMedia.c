#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int i = 0;
	float n1[3];
	float n2[3];
	float n3[3];
	float media[3];
	
	for(i=0;i<3;i++){
		
	printf("insira sua primeira nota: \n");
		scanf("%f",&n1[i]);
	printf("insira sua segunda nota: \n");
		scanf("%f",&n2[i]);	
	printf("insira sua terceira nota: \n");
		scanf("%f",&n3[i]);		
		
	}	
	media [0] = (n1[0]+n2[0]+n3[0])/3;
	media [1] = (n1[1]+n2[1]+n3[1])/3;
	media [2] = (n1[2]+n2[2]+n3[2])/3;
	
	
	printf("a média do aluno um foi: %.1f \n", media[0]);
	printf("a média do aluno dois foi: %.1f \n", media[1]);
	printf("a média do aluno tres foi: %.1f ", media[2]);
	
	
	return 0;
}
