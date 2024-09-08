#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Solicita ao usuário que insira o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    // Solicita ao usuário que insira o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Realiza a soma dos dois números
    sum = num1 + num2;

    // Imprime o resultado da soma
    printf("A soma de %d e %d é: %d\n", num1, num2, sum);

    return 0;
}
