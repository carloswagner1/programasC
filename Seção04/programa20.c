#include <stdio.h>
#include "ajuda.h"

int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Num1: ");
	scanf("%d", &n1);

	printf("Num2: ");
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("Soma = %d\n", ret_s);

	ret_m= multiplicacao(n1,n2);
	printf("Multiplicação = %d\n", ret_m);

	return 0;
}
