#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //Celsius para Fahrenheit

    float c = 0;
    float f = 0;


    printf("Digite o valor em celsius: ");
    scanf("%f", &c);

    f = (c * 1.8) + 32;

    printf("O valor em Fahrenheit eh %.1f F", f);

    return 0;
} 

