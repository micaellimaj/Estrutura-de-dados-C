#include <stdio.h>



int main() {
    char caractere;
    long int numero;
    long double numero2;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Digite um numero inteiro longo: ");
    scanf("%li", &numero);

    printf("Digite um ponto flutuante: ");
    scanf("%Lf", &numero2);  

    printf("\nVoce Digitou:");
    printf("\nO caracter %c:", caractere);
    printf("\nnumero inteiro longo: %li",numero);
    printf("\nnumero flutuante longo: %Lf", numero2);

    return 0;
}
