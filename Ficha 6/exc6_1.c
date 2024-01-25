#include <stdio.h>

int ordenada(int vec[], int size)
{
    int i = 0;
    if (size != 1 || size != 0){
        for (i = 1; i < size; i++){
            if(vec[i - 1] > vec[i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(void)
{
    int vec[] = {3};
    int size = 1;
    printf("%d \n", ordenada(vec, size));
}