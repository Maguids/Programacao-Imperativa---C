#include <stdio.h>

int contar_espacos(char *str)
{
    int espacos = 0;
    while (*str != '\0'){
        if (*str == ' '){
            espacos ++;
        }
        str++;
    }
    return espacos;
}

int main()
{
    char str[] = "Olá tudo bem?  6 g";
    int espacos;

    espacos = contar_espacos(str);
    printf("Há %d espaços. \n", espacos);
    return 0;
}