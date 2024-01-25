#include <stdio.h>
#include <ctype.h>

int size(char str[])
{
    int lenght = 0, i;
    for (i = 0; str[i] != '\0'; i++){
        lenght += 1;
    }
    return lenght;
}

int palindromo(char str[])
{
    int lenght, i;
    lenght = size(str) - 1;

    for (i = 0; i < lenght; i++){
        if (str[i] != str[lenght]){
            return 0;
        }
        lenght--;
    }
    return 1;
}



int main(void)
{
    char str[] = "aeiouuoiea";
    if(palindromo(str) == 1){
        printf("Verdade \n");
    } else{
        printf("False \n");
    }

    return 0;
}