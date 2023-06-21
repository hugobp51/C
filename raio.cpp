#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //calculando a área de um círculo de raio r

    float raio = 0;
    float area = 0;
    float pi = 3.14;


    printf("Por favor digite o raio do circulo: ");
    scanf("%f", &raio);

    //calculando a area
    area = pi * (raio * raio); 

    printf("A area e igual a %.2f m2", area);

    return 0;
} 

