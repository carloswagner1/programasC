#include <stdio.h>

int main(){
    int valores[5];
    for(int i = 0; i < 5; i++){
        printf("informe o %d/5 valor: ", (i+1));
        scanf("%d", &valores[i]);
    }
    printf("Os valores informados foram: \n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", valores[i]);      
    }
    printf("%p\n", &valores[0]);
    printf("%p\n", valores);
    return 0;


}