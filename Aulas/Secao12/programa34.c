#include <stdio.h>



int main(){
    typedef float nota;

    nota prova1 = 7.0;
    nota prova2 = 8.5;

    nota media = (prova1 + prova2)/2;

    printf("Media das provas: %.2f \n", media);

    return 0;
}