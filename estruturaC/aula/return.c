#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int main(){
    int resultado = soma(5,3);
    printf("%d", resultado);
    return 0;
}