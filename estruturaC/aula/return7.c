#include <stdio.h>
#include <stdlib.h>

void swap(float *num1, float *num2) {
    float temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Antes da troca: %.2f, %.2f\n", num1, num2);
    
    swap(&num1, &num2); 
    
    printf("Após a troca: %.2f, %.2f\n", num1, num2);

    return 0;
}
