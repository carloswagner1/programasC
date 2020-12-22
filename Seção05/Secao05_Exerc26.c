#include <stdio.h>

int main(){
	int num, multiplo = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	num = num  + 1;
	
	for(int i = num; i < num + 17; i++){
		if(num % 11 == 0 || num % 13 == 0 || num % 17 == 0){
			multiplo = num;
		}else{
			num = num +1;
		}
	}	

	printf("%d\n", multiplo);
	return 0;
}
