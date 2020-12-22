#include <stdio.h>

int main(){
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++){
		printf("%d ",i);
	}
	return 0;
}
