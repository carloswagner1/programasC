#include <stdio.h>

int main(){
    int n;
    int* p;

    printf("Informe um numero: ");
    scanf("%d", &n);

    p = &n;

    printf("O numero informado foi %d\n", n);

    printf("Endereco de memoria: %d\n", &n);
    printf("Endereco do ponteiro: %p\n", p);
    return 0;
}