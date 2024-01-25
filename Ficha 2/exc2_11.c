#include <stdio.h>

int bissexto(int n)
{
    if ((n % 4 == 0) && ((n % 100 != 0) || (n % 400 == 0)))
        return 1;

    else
        return 0;
}

int prox_bissexto(int n)
{
    int c;
    c = 0;
    while (bissexto(n+c) != 1){
        c += 1;
    }
    return n+c;
}

int main()
{
    int n, x;
    printf("Insira o ano: "); scanf("%d", &n);
    x = prox_bissexto(n);
    printf("%d \n", x);
    return 0;
}
