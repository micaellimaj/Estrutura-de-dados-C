#include <stdio.h>

int main(){

    int var = 10;
    int *ptr = &var;
    int **pptr = &ptr;

    printf("valor original: %d\n", var);

    **pptr = 31;

    printf("valor modificado: %d\n", var);

    return 0;

}