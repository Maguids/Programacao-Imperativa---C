#include <stdio.h>

int media(int a, int b, int c)
{
    if (a >= b)
        if (c >= a)
            return a;
        else if (c >= b)
            return c;
        else
            return b;
    else
        if(c >= b)
            return b;
        else if (c >= a)
            return c;
        else
            return a;
}

int main()
{
    int a, b, c, mediana;
    printf("Primeiro valor: "); scanf("%d", &a);
    printf("Segundo valor: "); scanf("%d", &b);
    printf("Terceiro valor: "); scanf("%d", &c);
    mediana = media(a,b,c);
    printf("Mediana: %d \n", mediana);
    return 0;
}