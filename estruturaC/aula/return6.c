#include <stdio.h>
#include <stdlib.h>

void valor(float *valor1, float *valor2) {
    printf("Antes da troca: %f, %f\n", *valor1, *valor2);
    *valor1 = *valor2; 
    *valor2 = *valor1;
    printf("Depois da troca: %f, %f\n", *valor1, *valor2);
}

int main() {
    float valor1, valor2;

    printf("Digite o primeiro número: ");
    scanf("%f", &valor1);

    printf("Digite o segundo número: ");
    scanf("%f", &valor2);

    printf("Antes da troca por valor: %.2f, %.2f\n", valor1, valor2);
    valor(&valor1, &valor2); -
    printf("Após a troca por valor: %.2f, %.2f\n", valor1, valor2);

    return 0;
}
