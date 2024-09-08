#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;


    printf("valor da variavel: %d\n", var);
    printf("valor do apontador: %d\n", *ptr);
    printf("valor do apontador na memoria da variavel: %p\n", &var);
    printf("valor do apontador na memoria do ponteiro: %p\n", ptr);

    return 0;
}

