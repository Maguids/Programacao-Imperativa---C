#include <stdio.h>

int desordem(int vec[], int size)
{
    int i, contador = 0;
    for(i = 1; i < size; i++){
        if(vec[i-1] > vec[i]){
            contador++;
        }
    }
    return contador;
}

int main(void)
{
    int vec[] = {3};
    int size = 1;
    printf("%d \n", desordem(vec, size));

    return 0;
}