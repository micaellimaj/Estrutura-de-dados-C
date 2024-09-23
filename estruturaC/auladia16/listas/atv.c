#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho_vetor;
    int* vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    vetor = (int*) malloc(tamanho_vetor * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Elementos do vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}