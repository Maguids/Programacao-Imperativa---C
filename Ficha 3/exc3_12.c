#include <stdio.h>


int soma_digitos(int n)
{
    if (n < 10){
        return n;
    } else {
        return ((n % 10) + soma_digitos( n / 10));
    }
}


int main(void)
{
    int n, r;
    printf("Insira o número: "); scanf("%d", &n);
    r = soma_digitos(n);
    printf("%d \n", r);
    return 0;
}