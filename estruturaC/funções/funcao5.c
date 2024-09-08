#include <stdio.h>

float realizarOperacao(char operacao, float num1, float num2) {
    switch (operacao) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero!\n");
                return 0;
            }
            return num1 / num2;
        default:
            printf("Operação inválida!\n");
            return 0;
    }
}

int main() {
    char operacao;
    float num1, num2, resultado;

    do {
        printf("Escolha uma operação (+, -, *, /) ou s para sair: ");
        scanf(" %c", &operacao);  

        if (operacao == 's') {
            printf("Obrigado pela visita!\n");
            break;
        }

        printf("Numero 1: ");
        scanf("%f", &num1);

        printf("Numero 2: ");
        scanf("%f", &num2);


        resultado = realizarOperacao(operacao, num1, num2);
        printf("Resultado: %.2f\n", resultado);

    } while (operacao != 's');  

    return 0;
}
