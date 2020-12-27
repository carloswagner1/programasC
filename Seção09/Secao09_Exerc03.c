#include <stdio.h>
#include <assert.h>

int positivonegativo(int num);

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    switch (positivonegativo(num)){
        case 0:
            printf("Numero nulo\n");
        break;

        case 1:
            printf("Numero positivo\n");
        break;
        
        case -1:
            printf("Numero negativo\n");
        break;
    }
        
    return 0;
}

int positivonegativo(int num){

    if(num > 0){
        return 1;
    }else if(num < 0){
        return -1;
    }else{
        return 0;
    }


}