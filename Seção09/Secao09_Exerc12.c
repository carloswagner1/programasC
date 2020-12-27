/*
Escreva uma funcao que receba um numero inteiro maior do que zero e retorne
 a soma de todos os seus algarismos. Por exemplo, ao numero 251 correspondera
 o valor 8 (2 + 5 + 1). Se o numero lido nao for maior do que zero,
 o programa terminara com a ´ mensagem “Numero invalido”
*/

#include <stdio.h>

int somaAlgarismos(int num);

int main (){

    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    if(num > 0){
        printf(" A soma dos algarismos é %i\n", somaAlgarismos(num));
    }else{
        printf("Numero invalido!!!\n");
    }

    return 0;    
}

int somaAlgarismos(int num){
    
    int soma = 0;
    while(num>0){
        soma = soma +num%10;
        num=num/10;
    }
    return soma;
}