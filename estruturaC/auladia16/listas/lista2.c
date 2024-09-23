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

int inserir(Item lista[], int *n, Item novo_elemento, int capacidade) {
    // Verifica se o novo elemento já existe na lista
    if (buscar(lista, *n, novo_elemento.chave) == (*n + 1)) {
        if (*n < capacidade) { // Verifica se há espaço para inserir
            lista[*n] = novo_elemento; // Insere o novo elemento
            (*n)++; // Incrementa o número de elementos
            return 1; // Inserção bem-sucedida
        } else {
            return -1; // Lista cheia
        }
    } else {
        return -1; // Elemento já existe na lista
    }
}

int main() {
    int capacidade = 100; // Capacidade máxima da lista
    Item lista[capacidade]; // Declara uma lista com capacidade máxima
    int n = 0; // Inicialmente a lista está vazia

    Item novo_elemento;
    printf("Digite a chave do novo elemento: ");
    scanf("%d", &novo_elemento.chave);

    int resultado = inserir(lista, &n, novo_elemento, capacidade);

    if (resultado == 1) {
        printf("Elemento inserido com sucesso.\n");
    } else {
        printf("Falha na inserção (elemento já existe ou lista cheia).\n");
    }

    return 0;
}
