#include <stdio.h>

int primo(int n)
{
    int d;
    if (n <= 1)
        return 0;
    for (d = 2; d * d <= n; d++)
    {
        if (n % d == 0) // d divide n
            return 0;
    }
    return 1;
}

int main()
{
    int n, i, x1 = 0, x2 = 0;
    printf("Insira um número: "); scanf("%d", &n);
    for (i = n; x2 != (x1+2); i++){
        if ((primo(i) == 1) && (primo(i+2) == 1)){
            x1 = i;
            x2 = i + 2;
            printf("(%d,%d) \n", x1, x2);
        }
    }
    return 0;
}