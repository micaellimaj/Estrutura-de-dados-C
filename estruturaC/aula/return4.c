#include <stdio.h>
#include <stdlib.h>

void soma(int *x){
    *x = *x + 10;
}

int main(){
    int a = 5;
    soma(&a);
    printf("%d", a);
}