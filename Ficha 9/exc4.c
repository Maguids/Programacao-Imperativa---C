#include <stdio.h>

int comparar(char *str1, char *str2)
{
    while((*str1 != '\0' || *str2 != '\0') && (*str1 == *str2)){
        str1++;
        str2++;
    }
    return (*str1 == *str2);

}

int main(void)
{
    char str1[] = "ola ";
    char str2[] = "ola ";
    
    int resp = comparar(str1, str2);
    printf("%d\n", resp);
}