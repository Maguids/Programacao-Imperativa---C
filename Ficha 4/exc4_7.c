#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolher_numero()
{
    int N = 999, valor;
    valor = (int)((double)rand() / ((double)RAND_MAX + 1) * N) + 1;

    return valor;
}

int resposta_correta(int valor, int n, int t)
{
    if (valor == n){
        printf("Acertou em %d tentativas! \n", t);
        return -1;
    } else if (n > valor) {
        printf("Demasiado alto!");
    } else{
        printf("Demasiado baixo!");
    }
    t++;
    return t;
}

int main(void)
{
    int valor, n, t = 1;
    srand((unsigned)time(NULL));
    valor = escolher_numero();
    printf("Insira um número entre 1 e 1000. "); scanf("%d", &n);

    while (resposta_correta(valor, n, t) != -1){
        resposta_correta(valor, n, t);
        printf("Tente novamente. "); scanf("%d", &n);
    }

    return 0;
}