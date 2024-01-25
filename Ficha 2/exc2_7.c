#include <stdio.h>

int potencia(int x, int n){
    int resultado, y;
    resultado = 1;
    for (y = 1; y < n+1; y++){
        resultado = resultado * x;
    }
    return resultado;
}


int main()
{
    int x, n, resposta;
    printf("Introduza x: "); scanf("%d", &x);
    printf("Introduza n: "); scanf("%d", &n);
    resposta = potencia(x,n);
    printf("R: %d \n", resposta);
    return 0;
}