#include <stdio.h>
#include <stdlib.h>

void imprimir(int *n){
    printf("%d\n", *n);
    *n = 80;

}

int main(){

    int idade = 35;

    imprimir(&idade);
    printf("No main: %d\n", idade);

    return 0;
}