#include <stdio.h>

void desenhaLinha(int num);

int main(){
    int num;
    printf("Informe um valor: ");
    scanf("%i", &num);
    
    desenhaLinha(num);
    printf("\n");

    return 0;
}

void desenhaLinha(int num){
    for(int i=0; i < num; i++){
        printf("=");        
    }
}