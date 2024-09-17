#include <stdio.h>


int main(){

    const float valor_conversao = 9.0/5.0;
    const int ajuste = 32;
    float cel;

    printf("Digite a temperatura em Celsius");
    scanf("%f", &cel);

    float calculo =  (cel * valor_conversao) + ajuste;

     printf("A temperatura em celsius é %.2f°C Fahrenheit é %.2f\n", cel, calculo);

    return 0;

}