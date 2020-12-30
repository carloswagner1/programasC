#include <stdio.h>

void incrementa (int* valor);

int main(){
    int contador = 10;
    printf("Antes de incrementar\n");
    printf(" O contador vale %d\n", contador);
    printf(" Endereço de memoria: %d\n", &contador);

    incrementa(&contador);
    printf("Depois de incrementar\n");
    printf(" O contador vale %d\n", contador);
    printf(" Endereço de memoria: %d\n", &contador);
    return 0;
}

void incrementa (int* valor){
    printf("Antes de incrementar\n");
    printf(" O contador vale %d\n", (*valor));
    printf(" Endereço de memoria: %d\n", valor);

    printf("Depois de incrementar\n");
    /*
    valor++; 
    valor--;
    ++valor;
    --valor;
    */
    printf(" O contador vale %d\n", ++(*valor));
    printf(" Endereço de memoria: %d\n", valor);
}