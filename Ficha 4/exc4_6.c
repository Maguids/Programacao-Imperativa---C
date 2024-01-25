#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int valores_random(void)
{
    int N = 9, valor;
    valor = (int)((double)rand() / ((double)RAND_MAX +1) * N) + 1;

    return valor;
}

int verificar_resposta(int valor1, int valor2, int r)
{
    if (r == (valor1 * valor2)){
        printf("Certo! \n");
    } else {
        printf("Errado! O resultado é %d \n", valor1*valor2);
    }
    return 0;
}

int main(void)
{
    int i, valor1, valor2, r;
    for(i = 0; i < 10; i++){
    srand(time(0));
    valor1 = valores_random();
    valor2 = valores_random();

    printf("Quanto é %d x %d? ", valor1, valor2); scanf("%d", &r);
    verificar_resposta(valor1, valor2, r);
    }

    return 0;
}