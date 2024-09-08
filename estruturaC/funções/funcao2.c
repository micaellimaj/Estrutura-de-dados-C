#include <stdio.h>

int soma (int x, int y)
{
    int s;
    s = x + y;
    return (s);
}

int main(void)
{
    int c;

    c = soma(3, 5);
    printf("Resultado: %li\n", c);
    return 0;
}