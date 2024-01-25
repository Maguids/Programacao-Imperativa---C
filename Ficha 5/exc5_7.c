#include <stdio.h>

int decimal(char str[]){
    int i, resultado = 0;
    for(i = 0; str[i] != '\0'; i++){
        resultado = resultado * 10 + (str[i] - '0');
    }
    return resultado;
}

int decimal2(char str[])
{
    int i = 0;
    int resultado = 0;

    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9') {
            resultado = resultado * 10 + (str[i] - '0');
        }
        i++;
    }
    return resultado;
}

int main(void)
{
    char str[] = "1234";
    printf("%d \n", decimal(str));
}