#include <stdio.h>

enum dias_da_semana{
    segunda,
    terça,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main(){
    enum dias_da_semana d1, d2;

    d1 = segunda;

    d2 = 0;

    if(d1 == d2){
        printf("os dias são iguais\n");
    }else{
        printf("Os dias não são iguais\n");
    }
    return 0;
}