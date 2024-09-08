#include <stdio.h>

int main(){

    int numero;
    int numero2;
    int numero3;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    printf("Digite o ultimo numero: ");
    scanf("%d", &numero3);

    printf("\nNumero1: %d\n", numero);
    printf("(Endereco1: %p)\n", &numero);

    printf("\nNumero2:%d\n", numero2);
    printf("(Endereco2: %p)\n", &numero2);

    printf("\nNumero3:%d\n", numero3);
    printf("(Endereco3: %p)\n", &numero3);

    return 0;

}