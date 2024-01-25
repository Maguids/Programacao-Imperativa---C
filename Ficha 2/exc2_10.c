#include <stdio.h>

int bissexto(int n)
{
    if ((n % 4 == 0) && ((n % 100 != 0) || (n % 400 == 0)))
        return 1;

    else
        return 0;
}

int main()
{
    int n, resposta;
    printf("Insira o ano: "); scanf("%d", &n);
    resposta = bissexto(n);
    printf("%d \n", resposta);
    return 0;
}