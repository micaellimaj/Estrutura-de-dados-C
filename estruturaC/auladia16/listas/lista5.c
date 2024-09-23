//Pilha_alocação_sequencial:
#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Tamanho máximo da pilha

typedef struct Pilha {
    int dados[MAX];
    int topo;
} Pilha;

// Função para inicializar a pilha
void inicializarPilha(Pilha *p) {
    p->topo = -1; // Pilha vazia
}

// Função para verificar se a pilha está cheia
int pilhaCheia(Pilha *p) {
    return p->topo >= MAX - 1; // Se topo é igual ou maior que o tamanho máximo - 1
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *p) {
    return p->topo == -1; // Se topo é -1, a pilha está vazia
}

// Função para empilhar (inserir) um elemento
void empilhar(Pilha *p, int valor) {
    if (pilhaCheia(p)) {
        printf("Erro: Pilha cheia. Não é possível empilhar %d.\n", valor);
    } else {
        p->dados[++(p->topo)] = valor; // Incrementa topo e insere o valor
        printf("Empilhado: %d\n", valor);
    }
}

// Função para desempilhar (remover) um elemento
int desempilhar(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Erro: Pilha vazia. Não é possível desempilhar.\n");
        return -1; // Retorna -1 como erro
    } else {
        return p->dados[(p->topo)--]; // Retorna o valor e decrementa topo
    }
}

// Função para exibir a pilha
void exibirPilha(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
    } else {
        printf("Elementos da pilha: ");
        for (int i = 0; i <= p->topo; i++) {
            printf("%d ", p->dados[i]);
        }
        printf("\n");
    }
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    empilhar(&pilha, 10);
    empilhar(&pilha, 20);
    empilhar(&pilha, 30);
    exibirPilha(&pilha);

    printf("Desempilhado: %d\n", desempilhar(&pilha));
    exibirPilha(&pilha);

    return 0;
}