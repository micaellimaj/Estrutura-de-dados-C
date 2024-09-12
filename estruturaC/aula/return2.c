#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}


int main() {
    float a, b;
    
    printf("Digite o 1º número: ");
    scanf("%f", &a);

    printf("Digite o 2º número: ");
    scanf("%f", &b);

    printf("A soma é: %.2f\n", soma(a, b));
    printf("A subtracao é: %.2f\n", subtracao(a, b));
    printf("A multiplicacao é: %.2f\n", multiplicao(a, b));
    printf("A divisao é: %.2f\n", divisao(a, b));

    return 0;
}
