#include <stdio.h>

void triangulo(int n);

int main(){

    int num;
    printf("Informe um numero: ");
    scanf("%i", &num);

    triangulo(num);

    return 0;
}

void triangulo(int n){
    int i, j;

    for(int i = 1; i < n;i++){
        for(int j = 1;j <= i; j++){
           printf("*");
        }
        printf("\n");
    }

    for(int i = n; i >= 1;i--){
        for(int j = i;j >= 1; j--){
           printf("*");
        }
        printf("\n");
    }


}
