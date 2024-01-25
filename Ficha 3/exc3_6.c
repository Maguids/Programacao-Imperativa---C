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
    int l, i;  
    printf("Limite superior? "); scanf("%d", &l);
    for (i = 2; i < l; i++)
        if (primo(i) == 1)
            printf("%d ",i);
    printf("\n");
    return 0;
}

