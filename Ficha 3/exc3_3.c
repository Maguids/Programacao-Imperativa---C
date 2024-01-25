#include <stdio.h>

int soma_divisores(int x){
    int soma, divisor;
    soma = 0;
    for (divisor = 1; divisor < x; divisor++){
        if (x % divisor == 0){
            soma += divisor;
        }
    }
    return soma;
}


int main(){
    int x, resposta;
    scanf("%d", &x);
    resposta = soma_divisores(x);
    printf("R: %d \n", resposta);
    return 0;
}