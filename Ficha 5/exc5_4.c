#include <stdio.h>
#include <ctype.h>


int todos_letras(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(!isalpha(str[i])){
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char str[] = "olamu7ndo";
    if (todos_letras(str) == 1){
        printf("Verdade \n");
    } else {
        printf("Falso \n");
    }
}