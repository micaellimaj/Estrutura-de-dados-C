#include <stdio.h>
#include "estoque.h"

int main() {
    inicializar_estoque();

    printf("Estoque inicial: %d\n", consultar_estoque());

    int quantidade_adicionar;
    printf("Digite a quantidade de itens para adicionar ao estoque: ");
    scanf("%d", &quantidade_adicionar);
    adicionar_estoque(quantidade_adicionar);

    printf("Estoque após adição: %d\n", consultar_estoque());

    int quantidade_remover;
    printf("Digite a quantidade de itens para remover do estoque: ");
    scanf("%d", &quantidade_remover);
    remover_estoque(quantidade_remover);

    printf("Estoque após remoção: %d\n", consultar_estoque());

    return 0;
}
