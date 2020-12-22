#include <stdio.h>

int main() {
  int num1, num2, num3;       /* dados de entrada */

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("\nDigite o segundo número: ");
  scanf("%d", &num2);
  printf("\nDigite o terceiro número: ");
  scanf("%d", &num3);

  if(num3 > num1){
    if(num1 > num2){
      printf("A ordem crescente: %d %d %d\n", num2, num1, num3);
    }else if(num2 < num3){
      printf("A ordem crescente: %d %d %d\n", num1, num2, num3);
    }
  }
  if(num1 > num2){
    if(num2 > num3){
      printf("A ordem crescente: %d %d %d\n", num3, num2, num1);
    }else if(num3 < num1){
      printf("A ordem crescente: %d %d %d\n", num2, num3, num1);
    }
  }
  if(num1 < num2){
    if(num3 < num1){
      printf("A ordem crescente: %d %d %d\n", num3, num1, num2);
    }else if(num3 < num2){
      printf("A ordem crescente: %d %d %d\n", num1, num3, num2);
    }
  }
  return 0;
}
