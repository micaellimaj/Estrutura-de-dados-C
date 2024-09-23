#include <stdio.h>

typedef struct {
    int chave;
} Item;

int buscar(Item lista[], int n, int chave) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            if (lista[i].chave == chave) {
                return i; // Retorna o índice onde a chave foi encontrada
            }
        }
    }
    return n + 1; // Retorna n+1 se a chave não for encontrada
}

int main() {
    Item lista[] = {{10}, {20}, {30}, {40}, {50}};
    int n = sizeof(lista) / sizeof(lista[0]);
    int chave;

    printf("Digite a chave a ser buscada: ");
    scanf("%d", &chave);

    int resultado = buscar(lista, n, chave);

    if (resultado <= n) {
        printf("Chave encontrada no índice: %d\n", resultado);
    } else {
        printf("Chave não encontrada.\n");
    }

    return 0;
}