#include <stdio.h>
#include <math.h>


int main(){
	int i,acertos=0, num1,num2,soma,resp;
	srand((unsigned)time(NULL));

	for(i=0;i<5;i++){
		num1 = (rand() % 100) + 1;
		num2 = (rand() % 100) + 1;
		soma = num1 + num2;
		resp = soma;

		printf("\nQual é a Soma de %d + %d? ", num1, num2);
		scanf("%d", &resp);

		if(resp == soma){
			acertos ++;
			printf("Resposta correta.\n");
		}else{
			printf("Resposta incorreta. A resposta certa é %d.\n", soma);
		}
	}
	printf("\nNúmero de acertos: %d.\n", acertos);
	return 0;
};
