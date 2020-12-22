#include <stdio.h>

#include <math.h>
/*Faça um programa que leia um número e, caso ele seja positivo,
calcule e mostre o número digitado ao quadrado e a raiz quadrada deste nº */

int main() {
    float num, quadrado, raiz;

    printf("Digite um número: ");
    scanf("%f", &num);

    if(num > 0){
    	quadrado = pow(num,2);
    	raiz = sqrt(num);
    }
    printf("O quadrado do número informado é %.2f", quadrado);
    printf("\nA raiz quadrada do número informado é %.2f", raiz);
    return 0;
}
