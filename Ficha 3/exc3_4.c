#include <stdio.h>

int mdc(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n, d, dc, n1, d1;
    printf("Numerador: "); scanf("%d", &n);
    printf("Denominador: "); scanf("%d", &d);
    dc = mdc(n, d);
    printf("%d \n", dc);
    n1 = n / dc;
    d1 = d / dc;
    printf("A fração %d/%d é equivalente a %d/%d \n", n, d, n1, d1);
    return 0;
}