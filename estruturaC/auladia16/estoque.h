#include <stdio.h>

#ifndef ESTOQUE_H
#define ESTOQUE_H

#define ESTOQUE_INICIAL 100

extern int estoque_total;

void inicializar_estoque();
void adicionar_estoque(int quantidade);
void remover_estoque(int quantidade);
int consultar_estoque();

#endif 
