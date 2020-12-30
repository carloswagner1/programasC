#include <stdio.h>

int main(){
    FILE *arq;
    char c;

    //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    arq = fopen("arquivo.txt", "r");

    if(arq){
        while((c = getc(arq)) != EOF)//End Of File
            printf("%c", c);
    }else{
        printf("Nao achei o arquivo\n");
    }
    fclose(arq);
    return 0;    
}