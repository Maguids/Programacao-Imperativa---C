#include <stdio.h>

int main()
{
    int x, c1, soma;
    soma = 0;
    c1 = 0;
    char * str;
    scanf("%s",str); // strtok

    while (scanf("%d", &x) && (x != 0)){
        soma += x;
        c1 += 1;
    }

    
    float media;
    media = soma / c1;
    printf("%f \n", media);
}