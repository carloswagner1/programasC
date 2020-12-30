#include <stdio.h>

int main(){
    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("arquivo.txt", "r");

    if(arq){
        while(!feof(arq)){
            resultado = fscanf(arq, "%d", &num);
            if(resultado == 1){
                soma = soma + num;
            }
        }
         
    }else{
        printf("Nao achei o arquivo\n");
    }
    printf("A soma dos numeros encontrados no arquivo: %d\n", soma);
    fclose(arq);
    return 0;
}