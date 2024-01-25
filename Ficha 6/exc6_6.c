#include <stdio.h>
#include <assert.h>

int mdc(int a, int b)
{
    while (a != b){
        assert(a > 0 && b > 0);
        if (a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main(void)
{
    int a, b;
    printf("Insira um valor a: "); scanf("%d", &a);
    printf("Insira um valor b: "); scanf("%d", &b);
    mdc(a,b);
}