#include <stdio.h>

int comprimento(char *str)
{
    int comp = 0;
    while( *str != '\0'){
        comp++;
        str++;
    }
    return comp;
}

void inverter(char *str)
{
    int i = 0, comp = comprimento(str) - 1;
    char guardador;
    while (i < comp){
        guardador = *(str + i);
        *(str + i) = *(str + comp);
        *(str + comp) = guardador;
        i++;
        comp--;
    }
}

int main(void)
{
    char str[] = "ola";
    inverter(str);
    printf("%s \n", str);
} 