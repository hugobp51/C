#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
//1- pergunte ao usu�rio quantas idades ele quer digitar, some as idades e mostre a m�dia das idades.

setlocale(LC_ALL,"portuguese");

int i =0;
int rep =0;
float media =0;
int soma =0;
int idade =0;

printf("digite quantas idades voc� quer digitar: ");
	scanf("%d",&rep);
for (i=1; i<=rep; i++) {

	printf("digite a idade: ");
		scanf("%d",&idade);
			soma = soma + idade;}
	
		
	media = soma/rep;
	
	printf("a media das idades foi de %.2f",media);



	
	
	return 0;
}
