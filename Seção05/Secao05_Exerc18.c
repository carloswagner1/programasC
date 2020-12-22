#include <stdio.h>

int main(){
	int num, maior = 0, cont = 1;


	for (int i = 0; i <= 10; i++){
		printf("Informe um número: ");
		scanf("%d", &num);

		if(num > maior){
			maior = num;
		}else if(num == maior){
			cont = cont + 1;
		}
	}
	printf("O maior número é %d.\nEle foi lido %d vezes.", maior, cont);
	return 0;
}
