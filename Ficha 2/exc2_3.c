#include <stdio.h>

int main()
{
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c); // ler 3 valors
    if (a >= b)
        maior = a;
    else
        maior = b;

    if (c > maior)
        maior = c;

    printf("%d\n", maior);     // imprimir o resultado
}