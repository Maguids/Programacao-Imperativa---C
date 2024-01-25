#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
    int i, contador = 0;

    for (i = 0; i != size; i++)
    {
        if (vec[i] > val){
            contador++;
        }
    }
    return contador;
}

int lenght(int vec[])
{
    int lenght = 0;
    for(int i = 0; vec[i] != '\0'; i++){
        lenght++;
    }
    printf("lenght = %d", lenght);
    return lenght;
}

int main(void)
{
    int vec[] = {1,2,3,4,5,6};
    int val = 2, size;
    size = lenght(vec);
    printf("%d \n", contar_maiores(vec, size, val));
}