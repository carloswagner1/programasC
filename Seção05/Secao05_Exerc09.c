#include <stdio.h>

int main(){
	  int num, aux;
	  printf("Informe um número: ");
	  scanf("%d", &num);

	  for(int i = 0; i <= num; i++){
		  if(i % 2 != 0){
			  printf("%d ", i);
		  }
	  }
	  return 0;
}
