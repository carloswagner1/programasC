#include <stdio.h>

int main(){
    int valores[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }
    printf("O array tem %d bytes\n", sizeof(valores));
    printf("valores[0] vale %d e o endereco de memoria %p\n", valores[0], valores[0]);
    printf("*(valores) vale %d e o endereco de memoria %p\n", *(valores), *(valores));
    printf("*(valores+1) vale %d e o endereco de memoria %p\n", *(valores+1), *(valores+1));
    printf("*(valores+2) vale %d e o endereco de memoria %p\n", *(valores+2), *(valores+2));
    return 0;
}