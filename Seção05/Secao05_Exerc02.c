#include <stdio.h>

int main(){
	  printf("Usando for \n");
	  int i;
	  for(i = 1;i<=100;i++){
		  printf("%d \n",i);
	  }

	  printf("\nUsando while \n");
	  i = 1;
	  while (i <=100){
		  printf("%d \n",i++);
	  }

	  printf("\nUsando do while\n");
	  i = 1;
	  do{
	  printf("%d \n",i++);
	  }
	  while (i<=100);
	  return 0;
}
