#include <stdio.h>
#include <ctype.h>

int algum_digito(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if(isdigit(str[i])){
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char str[] = "gdjgbfh53xxdsddsbl";
    if (algum_digito(str) == 1){
        printf("Verdade \n");
    } else {
        printf("False \n");
    }
}