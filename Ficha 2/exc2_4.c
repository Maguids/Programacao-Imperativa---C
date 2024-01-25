#include <stdio.h>

int d_(int valor, int dinheiro)
{
    int x;
    x = (dinheiro / valor);
    dinheiro -= valor * x;
    if (valor == 1)
        printf("moedas EUR 1: %d \n", x);
    else
        printf("notas EUR %d: %d \n", valor, x);

    return dinheiro;
}

int main()
{
    int dinheiro, a;
    printf("Quantia em EUR? ");
    scanf("%d", &dinheiro);
    a = d_(20, dinheiro);
    dinheiro = a;
    a = d_(10, dinheiro);
    dinheiro = a;
    a = d_(5, dinheiro);
    dinheiro = a;
    a = d_(1, dinheiro);

    return 0;
}