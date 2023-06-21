#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//calculando media aritmetica
	float n1 =0;
	float n2 =0;
	float n3 =0;
	float media =0;
		printf("insira sua primeira nota: ");
			scanf("%f",&n1);
			printf("insira sua segunda nota: ");
				scanf("%f",&n2);
				printf("insira sua terceira nota: ");
					scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	printf("sua media foi de %.1f",media);
	return 0;
}
