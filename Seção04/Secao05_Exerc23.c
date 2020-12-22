#include <stdio.h>
/* Desenvolva um programa que determine os divisores de um número inteiro introduzido pelo
utilizador. */
int main(){
	int num,i,divisor;
	printf("Insira um número para verificar os seus divisores: \n");
	scanf("%d", &num);

	for (i = 1; i < num; i++){
		if(num % i == 0){
			divisor= i;
			printf("%d é divisor de %d.\n", divisor, num);
		}
	}
	return 0;
}
