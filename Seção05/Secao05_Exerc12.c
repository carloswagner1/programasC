#include <stdio.h>

int main(){
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);

	for (int i = num; i >= 0; i--){
		printf("%d ",i);
	}
	return 0;
}
