#include <stdio.h>

int fatorial(int n);

int main(){

    int num;
    printf("Informe um numero: ");
    scanf("%i", &num);

    printf("Resultado = %i\n", fatorial(num));

    return 0;
}

int fatorial(int n){
    int fat=1;
    while(n >0){
        fat *= n--;
    }
    return fat;
}