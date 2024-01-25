#include <stdio.h>

// Função que calcula o máximo divisor comum entre dois números
int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return mdc(b, a % b);
    }
}

int main()
{
    int a, b;

    // Lê os dois valores inteiros da entrada padrão
    printf("Digite o primeiro valor inteiro positivo: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro positivo: ");
    scanf("%d", &b);

    // Calcula o mínimo múltiplo comum usando o mdc
    int mmc = (a * b) / mdc(a, b);

    // Imprime o resultado
    printf("%d\n", mmc);

    return 0;
}
