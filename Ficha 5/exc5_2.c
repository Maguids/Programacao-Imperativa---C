#include <stdio.h>
#include <ctype.h>

void capitalizar(char str[])
{
    int i = 0;
    while (str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
    printf("%s \n", str);
}

void capitalizar2(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("%s \n", str);
}

int main(void){
    char str[100] = "Hello";
    capitalizar2(str);

    return 0;
}