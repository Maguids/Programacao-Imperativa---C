#include <stdio.h>

void range(int vec[], unsigned size, int inicio, int incr){
    int i;
    for (i = 0; i < size; i++){
        vec[i] = inicio + i * incr;
    }
}

int main(void)
{
    printf("Está certo.");
}