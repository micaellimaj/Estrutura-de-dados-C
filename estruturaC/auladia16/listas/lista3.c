//Exemplo_inserir
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

int remover(Item lista[], int *n, int chave) {
    if (*n > 0) {
        int i = buscar(lista, *n, chave);
        if (i < *n) { // Se o elemento foi encontrado
            for (int a = i; a < *n - 1; a++) {
                lista[a] = lista[a + 1]; // Desloca os elementos à esquerda
            }
            (*n)--; // Diminui o número de elementos
            return 1; // Remoção bem-sucedida
        } else {
            return -1; // Chave não encontrada
        }
    } else {
        printf("Erro: lista vazia.\n");
        return -1; // Lista vazia
    }
}

int main() {
    int capacidade = 100;
    Item lista[capacidade];
    int n = 5; // Inicialmente com 5 elementos
    lista[0].chave = 10;
    lista[1].chave = 20;
    lista[2].chave = 30;
    lista[3].chave = 40;
    lista[4].chave = 50;

    int chave;
    printf("Digite a chave do elemento a ser removido: ");
    scanf("%d", &chave);

    int resultado = remover(lista, &n, chave);

    if (resultado == 1) {
        printf("Elemento removido com sucesso.\n");
    } else {
        printf("Falha na remoção (elemento não encontrado ou lista vazia).\n");
    }

    return 0;
}