#include <stdio.h>

int main() {
    int num1, num2, diferenca;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    if(num1 > num2){
    	diferenca = num1 - num2;
    	printf("O maior número informado é %i", num1);
        printf("\nA diferença entre eles é %i", diferenca);
    }else if(num2 > num1){
    	diferenca = num2 - num1;
    	printf("O maior número informado é %i", num2);
        printf("\nA diferença entre eles é %i", diferenca);
    }else{
    	printf("Os números são iguais.");
    }
    return 0;
}
