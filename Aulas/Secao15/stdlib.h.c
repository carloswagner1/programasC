#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//stdlib.h

//Conversão de string

//atof() // converte string para double
//atoi() // converte string para inteiro
//atol() // converte string para float longo (long float)

//Geração de sequencia pseudo-aleatoria

//rand() - gera numero aleatorio
//srand() - sequencia de numeros aleatorios

int main(){
    char valor_s[5];
    double valor_d;
    int valor_i;

    strcpy(valor_s, "4.6");

    valor_d = atof(valor_s);
    valor_i = atoi(valor_s);

    printf("O valor é %.2f.\n", valor_d);
    printf("O valor é %d.\n", valor_i);

    return 0;
}

//




