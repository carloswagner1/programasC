#include <stdio.h>

int main(){
	int num;
	printf("Informe um número par: ");
	scanf("%d", &num);

	if(num % 2 == 0){
		for (int i = 0; i <= num; i++){
			if(i % 2 == 0){
				printf("%d ",i);
			}
		}
	}else{
		printf("\nNúmero informado é ímpar.");
	}
	return 0;
}
