#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin)
{
    int i;
    *pmax = *pmin = vec[0];
    for(i = 0; i < size; i++){
        if (*pmax < vec[i]){
            *pmax = vec[i];
        } else if (*pmin > vec[i]){
            *pmin = vec[i];
        }
    }
    printf("max = %d; min = %d \n", *pmax, *pmin);
};


int main(void)
{
    int vec[] = {7,2,9,3,1,0, -1};
    int size =  7;
    int pmax, pmin;

    max_min(vec, size, &pmax, &pmin);

return 0;
}