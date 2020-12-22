#include <stdio.h>

int main(){
   int Num, quarto=0, terceiro=0, segundo=0, primeiro=0;

   printf("Informe um número inteiro com 4 algarismos: ");
   scanf("%d", &Num);

   quarto = Num %10;
   Num = Num/10;
   terceiro = Num %10;
   Num = Num/10;
   segundo = Num %10;
   Num = Num/10;
   primeiro = Num %10;
   Num = Num/10;

   printf("%d\n%d\n%d\n%d\n",primeiro, segundo, terceiro, quarto);

   return 0;
}
