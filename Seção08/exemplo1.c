#include <stdio.h>

int main(){
    int valor = 2;

    //deloscamento de bits para a esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    valor = 2;
    valor =valor>>1;
    printf("Valor vale %d\n", valor);


    return 0;

}