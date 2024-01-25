#include <stdio.h>
#include <stdlib.h>


double primeira_aproximacao(int a)
{
    double x0;
    x0 = a/2;
    return x0;
} 

double aproximacao_melhor(double x0, int a)
{
    double soma;
    soma = x0 + (a/x0);
    return soma/2;
}

double processo(double x1, int a, double limite)
{
    double soma, xn;

    soma = x1 + a/x1;
    xn = soma/2;

    if (abs(xn - x1) < limite) {
        return xn;
    } else {
        processo(xn, a, limite);
    }
    return 0;
}


int main(void)
{
    int a;
    double limite, x0, x1, xn;
    limite = 0.0000000001;
    
    printf("Introduza um valor 'a' para calcular a sua raiz:"); scanf("%d", &a);
    x0 = primeira_aproximacao(a);
    x1 = aproximacao_melhor(x0, a);
    if (abs(x1 - x0) < limite) {
        xn = x1;
    } else {
        xn = processo(x1, a, limite);
    }
    printf("%f", xn);
    return 0;

}
