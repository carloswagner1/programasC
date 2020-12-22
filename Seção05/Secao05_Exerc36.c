#include <stdio.h>

int main(){

    int i, soma = 0, somaquad = 0;

    for(i = 1; i <= 100; i++){
        soma = soma + i;
        somaquad = somaquad + i * i;
    }
    soma = soma*soma - somaquad;

    printf("Diferenca = %d", soma);
}