//Alocação_dinâmica:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho_vetor;
    int* vetor;

    // Solicita o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    // Aloca dinamicamente o vetor
    vetor = (int*) malloc(tamanho_vetor * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenche o vetor com valores
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Exibe os valores do vetor
    printf("Valores no vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}