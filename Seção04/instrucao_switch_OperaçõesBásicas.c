#include <stdio.h>

int main(){
	int operacao, num1, num2, res, resto;

	printf("Digite o tipo de operação:\n1-Soma\n2-Subtração\n3-Divisão\n4-Multiplicação\n");
	scanf("%d", &operacao);
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	switch(operacao) {
	 case 1:
		 res = num1 + num2;
		 printf("O resultado da soma é: %d\n", res);
		 break;
	 case 2:
		 res = num1 - num2;
	 	 printf("O resultado da subtração é: %d\n", res);
	 	 break;
	 case 3:
		 res = num1 / num2;
		 resto = num1 % num2;
	 	 printf("O resultado da divisão é %d com resto igual a %d\n", res, resto);
	 	 break;
	 case 4:
		 res = num1 * num2;
	 	 printf("O resultado da multiplicação é: %d\n", res);
	 	 break;
	 default:
		 printf("Operação inválida.");
	}
	return 0;
}
