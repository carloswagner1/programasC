#include <stdio.h>

void exclamacao(int n);

int main(){

    int num;
    printf("Informe um numero: ");
    scanf("%i", &num);

    exclamacao(num);

    return 0;
}

void exclamacao(int n){
   for(int i = 0; i<=n;i++){
       for(int j=1;j<=i;j++){

           printf("!");

       }

       printf("\n");

   }

}
