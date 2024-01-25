#include <stdio.h>

int mdc(int a, int b)
{
    if (b > a)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    while (b != 0)
    {
        int aux = a;
        a = b;
        b = aux % b;
    }
    return a;
}

void reduzir(int *pnum, int *pdenom)
{
   int a = *pnum, b = *pdenom;
   int mdc = mdc(a, b);
   *pnum = *pnum / mdc;
   *pdenom = *pdenom / mdc;
   printf("%d/%d", *pnum, *pdenom);
}

int main(void)
{
    int pnum, pdenom;
    printf("Introduza a fração (ex: 12/4): "); scanf("%d/%d", &pnum, &pdenom);
    reduzir(&pnum, &pdenom);

    return 0;
}