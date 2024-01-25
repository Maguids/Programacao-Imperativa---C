#include <stdlib.h>
#include <stdio.h>

char *procurar(char *str, char ch)
{
    while (*str != '\0'){
        if (ch == *str){
            return str;
        }
        str++;
    }
    return NULL;
}

int main(void)
{
    char str[] = "ola tudo bem";
    char ch = 'e';
    char *resp1;

    resp1 = procurar(str, ch);
    if (resp1 != NULL){
        printf("resp 1: %s \n", resp1);
    } else {
        printf("Não há \n");
    }
    
}