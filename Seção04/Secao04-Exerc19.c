#include <stdio.h>

/*Faça um programa para verificar se um determinado número inteiro
é divisivel por 3 ou 5, mas não simutaneamente pelos dois*/

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0){
    	printf("O número é divisível por 3.\n");
    }else if(num % 3 != 0 && num % 5 == 0){
    	printf("O número é divisível por 5.\n");
    }else if(num % 3 ==0 && num % 5 == 0){
    	printf("O número é divisível por 3 e 5.\n");
    }else{
    	printf("O número não é divisível por 3 e nem por 5.\n");
    }
    return 0;
}
