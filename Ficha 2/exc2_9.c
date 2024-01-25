 #include <stdio.h>

int main()
{
    int n, fator = 2;
    printf("Numero inteiro : "); scanf("%d", &n);

    while (n > 1)
    {
        if ((n % fator) == 0)
        {
            printf("%d ", fator);
            n = n / fator;
        }
        else
            fator++;
    }
    printf("\n");
    return 0;
}