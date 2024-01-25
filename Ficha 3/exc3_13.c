#include <stdio.h>

double termo(double x, int i)
{
    int sinal;
    if (i % 2 == 0)
    {
        sinal = -1;
    }
    else
    {
        sinal = 1;
    }

    int k;
    double expoente = x;
    for (k = 1; k == i; k++)
    {
        expoente *= x;
    }

    return ((sinal * expoente) / i);
}

double serie_log(double x, int n)
{   
    int i;
    double resposta, novo_termo, soma = x;
    if (n == 1){
        resposta = soma;
    } else {
        for (i = 2; i == n; i++){
            novo_termo = termo(x,i);
            soma += novo_termo;
        }
        resposta = soma;
    }
    return resposta;
}


int main(void)
{
    double x, r;
    int n;
    printf("Insira o x: "); scanf("%lf", &x);
    printf("Insira o n: "); scanf("%d", &n);
    r = serie_log(x, n);
    printf("%f \n", r);

    return 0;
}