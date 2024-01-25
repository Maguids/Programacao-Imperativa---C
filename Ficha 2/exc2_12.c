#include <stdio.h>

int dia_mes(d, m, a)
{
    if (d == 28 && m == 2)
        d = 1;
        m = 3;
        printf("%d %d %d", d, m, a);
    else if (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11))
        d = 1;
        m += 1;
        printf("%d %d %d", d, m, a);
    else if (d == 31 && (m == 1 || m == 3 || m == 5 || m == 8 || m == 10 || m == 12))
        d = 1;
        m += 1;
        printf("%d %d %d", d, m, a);
    else 
        d += 1;
        printf("%d %d %d", d, m, a);
    return 0;
}


int main()
{
    int d, m, a;
    printf("Insira a data:"); scanf("%d %d %d", &d, &m, &a);
    if (d == 31 && m == 12)
        printf("1 1 %d", a+1);
    else
        dia_mes(d, m, a);
    return 0;
}