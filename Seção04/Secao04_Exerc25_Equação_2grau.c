#include <stdio.h>

#include <math.h>

int main() {
    int a, b, c, delta;
    float x1, x2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if(a == 0){
    	printf("Não é equação de segundo grau.\n");
    }else{
    	delta = pow(b,2) - (4*a*c);
    	if(delta < 0){
        	printf("Não existe raiz.\n");
    	}else if(delta == 0){
    		x1 = ((-1 * b) + sqrt(delta));
        	printf("Raiz única = %.2f.\n", x1/(2*a));
    	}else if(delta > 0){
    		x1 = ((-1 * b) + sqrt(delta));
    		x2 = ((-1 * b) - sqrt(delta));
    		printf("x1 = %.2f.\nx2 = %2.f.\n", x1/(2*a), x2/(2*a));
     	}
    }
    return 0;
}
