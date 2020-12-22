#include <stdio.h>

int main(){
	int num=0, soma = 0;
	for(int i = 1; i <= 50; i++){
		num = num +2;
		soma = soma + num;
	}
	printf("A soma é igual a %d", soma);
	return 0;
}
