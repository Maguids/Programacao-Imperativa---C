#include <stdio.h>
#include <ctype.h>

int forte(char str[])
{
    int i, lenght = 0, maiuscula = 0, minuscula = 0, algarismo = 0;
    for (i = 0; str[i] != '\0'; i++){
        if (isupper(str[i])){
            maiuscula += 1;
        } else if (islower(str[i])){
            minuscula += 1;
        } else if (isdigit(str[i])){
            algarismo += 1;
        }
        lenght += 1;
    }

    if (lenght >= 6 && maiuscula != 0 && minuscula != 0 && algarismo != 0){
        return 1;
    }
    return 0;
}

int main(void)
{
    char str[] = "asiMjs8";
    if (forte(str) == 1){
        printf("Verdade \n");
    } else {
        printf("False \n");
    }
    return 0;
}