#include <stdio.h>
#include "estoque.h"

int estoque_total;

void inicializar_estoque() {
    estoque_total = ESTOQUE_INICIAL;
}

void adicionar_estoque(int quantidade) {
    estoque_total += quantidade;
}

void remover_estoque(int quantidade) {
    estoque_total -= quantidade;
}

int consultar_estoque() {
    return estoque_total;
}
