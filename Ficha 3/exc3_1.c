#include <stdio.h>

int main() {
    float x, resposta;
    scanf("%f", &x),
    resposta = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("R: %f \n", resposta);
}