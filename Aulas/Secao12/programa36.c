#include <stdio.h>

union numeros {
    int num1, num2, num3, num4, num5;
}n;

int main(){
    n.num1=1;
    n.num2=3;
    n.num3=5;
    n.num4=7;
    n.num5=9;

    
    return 0;
}