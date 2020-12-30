#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo.txt", "r");

    if(arq){
        while(!feof(arq)){
            resultado = fgets(nome, 10, arq);
            if(resultado){
                printf("%s", nome);
            }
        }
         
    }else{
        printf("Nao achei o arquivo\n");
    }
    fclose(arq);
    return 0;
}