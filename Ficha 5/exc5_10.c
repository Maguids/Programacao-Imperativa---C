#include <stdio.h>

int repetidos(int vec[], int size)
{
    int i, j;
    for(i = 0; i < size; i++){
        int val = vec[i];
        for(j = i + 1; j < size; j++){
            if(val == vec[j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    int a[5] = {2, -1, 0, 2, -1};
    int size = 5;
    printf("%d \n", repetidos(a, size));

    return 0;
}