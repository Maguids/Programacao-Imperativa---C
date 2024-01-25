#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1){
        return n;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main(void)
{
    int n, r;
    printf("Indique uma valor 'n': "); scanf("%d", &n);
    r = fibonacci(n);
    printf("O valor da sequência na posição %d é: %d \n", n, r);

    return 0;
}