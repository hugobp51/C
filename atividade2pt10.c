#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
int codigoid = 0;
float n1 = 0;
float n2 = 0;
float n3 = 0;
float mediaEX = 0; 
float mediaAPR = 0;
    	
    printf("================================================================\n");	
    	
	printf(" Digite o seu código de identificacao: ");
		scanf("%d",&codigoid);
	printf("\nDigite a primeira nota: ");
		scanf("%f",&n1);
	printf("\nDigite a segunda nota: ");
		scanf("%f",&n2);
	printf("\nDigite a terceira nota: ");
		scanf("%f",&n3);
	
    mediaEX = (n1 + n2 + n3)/3;
    mediaAPR = (n1 + (n2 * 2) + (n3 * 3) + mediaEX)/7;
    
    if (mediaAPR >= 9){
    
        printf("\nAs notas do aluno foram respectivamente:  %.1f, %.1f, %.1f.", n1,n2,n3);
        	printf("\nA media dos 3 exercicios é de: %.2f", mediaEX);
        		printf("\nO Aluno com identificação: %d foi Aprovado com conceito A.", codigoid);
        
    } else if (mediaAPR >= 7.5 && mediaAPR < 9){
       
        printf("\nAs notas do aluno foram respectivamente:  %.1f, %.1f, %.1f.", n1,n2,n3);
        	printf("\nA media dos 3 exercicios é de: %.2f", mediaEX);
        		printf("\nO Aluno com identificação: %d foi Aprovado com conceito B.", codigoid);
        
    } else if (mediaAPR >= 6 && mediaAPR < 7.5){
       
        printf("\nAs notas do aluno foram respectivamente:  %.1f, %.1f, %.1f.", n1,n2,n3);
        	printf("\nA media dos 3 exercicios é de: %.2f", mediaEX);
        		printf("\nO Aluno com identificação: %d foi Aprovado com conceito C.", codigoid);
        
    }else if (mediaAPR >= 4 && mediaAPR < 6){
        
        printf("\nAs notas do aluno foram respectivamente: %.1f, %.1f, %.1f.", n1,n2,n3);
        	printf("\nA media dos 3 exercicios é de: %.2f", mediaEX);
        		printf("\nO Aluno com identificação: %d foi Reprovado com conceito D.", codigoid);
        
    }else{
        
        printf("\nAs notas do aluno foram respectivamente:  %.1f, %.1f, %.1f.", n1,n2,n3);
        	printf("\nA media dos 3 exercicios é de: %.2f", mediaEX);
        		printf("\nO Aluno com identificação: %d foi Reprovado com conceito E.", codigoid);
    }
    return 0;
}
