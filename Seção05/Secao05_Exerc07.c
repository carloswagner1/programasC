#include <stdio.h>

int main(){
	  int num, soma=0;

	  for(int i = 1; i <= 10; i++){
		  printf("Informe um numero: ");
		  scanf("%d", &num);
		  if(num > 0){
			  soma = soma + num;
		  }else{
			  i = i - 1;
			  printf("O numero precisa ser positivo.\n");
		  }
	  }
	  printf("A media e: %.2f\n", (float)soma/10);
	  
	  return 0;

}
