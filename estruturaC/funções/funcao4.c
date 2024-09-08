#include <stdio.h>

int main (void )
{
  char operacao;
  float n1;
  float n2;
  
  printf ("Escolha uma operação (+, -, *, /) ou s para sair: ");
  scanf("%c", &operacao);

  printf ("Numero 1: ");
  scanf("%f", &n1);

  printf ("Numero 2: ");
  scanf("%f", &n2);

  
  switch (operacao)
  {
    case '+' :
    printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
    break;
    
    case '-' :
    printf ("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
    break;
    
    case '*' :
    printf ("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
    break;
    
    case '/' :
    printf ("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
    break;
    
    case 's' :
    printf ("Obrigado pela visita!");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
    return 0;

}
 