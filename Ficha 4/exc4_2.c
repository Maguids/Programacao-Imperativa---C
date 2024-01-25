#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch, n_letras = 0;
    while((ch = getchar()) != '\n'){
        if (isalpha(ch)){
            n_letras++;
        }
    }
    printf("A frase contém %d letras. \n", n_letras);
}