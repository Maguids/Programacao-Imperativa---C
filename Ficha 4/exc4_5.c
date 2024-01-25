#include <stdio.h>
#include <stdlib.h>

int funcao_1(void)
{
    int N = 10, r;
    r = (int)((double)rand() / ((double)RAND_MAX + 1) * N);
    
    return r;
}

int funcao_2(void)
{
    int N = 10, r;
    r = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * N);

    return r;
}

int funcao_3(void)
{
    int N = 100, r;
    r = (int)((double)rand() / ((double)RAND_MAX + 1) * N);

    return r;
}

int funcao_4(void)
{
    int N = 20, r;
    r = (int)((double)rand() / ((double)RAND_MAX + 1) * N) - 10;

    return r;
}

double funcao_5(void)
{
    double r;
    r = ((double)rand() / ((double)RAND_MAX + 1));

    return r;
}

double funcao_6(void)
{
    int N = 2; 
    double r;
    r = ((double)rand() / ((double)RAND_MAX +1) * N) - 1;

    return r;
}

int funcao_7(void)
{
    int N = 90, r;
    r = (int)((double)rand() / ((double)RAND_MAX + 1) * N) + 10;

    return r;
}

int funcao_8(void)
{
    int N = 98, r;
    r = (int)((double)rand() / ((double)RAND_MAX + 1) * N);

    while ((r % 2) == 0){
        r = (int)((double)rand() / ((double)RAND_MAX + 1) * N);
    }

    return r;
}

int main(void)
{
    int i;
    for (i=1; i < 20; i++){
        printf("%d \n", funcao_8());
    }

    return 0;
}
