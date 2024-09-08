#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastrofuncionario {
    char nome[50];      
    int id_func;
    float salario;
} CadastroFuncionario;

typedef struct cadastrofuncionario* Funcionario;

int main() {
    
    Funcionario funcionario1 = (Funcionario)malloc(sizeof(CadastroFuncionario));

    strcpy(funcionario1->nome, "Micael");
    funcionario1->id_func = 1589654;
    funcionario1->salario = 5000.00;

    printf("Nome: %s\n", funcionario1->nome);
    printf("ID: %d\n", funcionario1->id_func);
    printf("Salario: %.2f\n", funcionario1->salario);

    free(funcionario1);

    return 0;
}
