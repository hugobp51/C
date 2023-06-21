#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num = 0;
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float media = 0;
	
	do{
		
	printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    
    media = (n1 + n2 + n3)/3;
    printf("Media do aluno = %.1f\n",media);
    
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &num);
	
	}while(num == 1 );
	
	
	return 0;
}
