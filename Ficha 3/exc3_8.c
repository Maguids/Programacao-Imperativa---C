#include <stdio.h>

int quadrado_perfeito(int n)
{
    int soma, k;
    soma = 0;
    for (k = 0; soma < n; k++){
        soma = soma + ((2 * k) + 1);
    }
    if (soma == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void)
{
    int n, r;
    printf("Insira um número: "); scanf("%d", &n);
    r = quadrado_perfeito(n);
    printf("%d \n", r);

    return 0;
}