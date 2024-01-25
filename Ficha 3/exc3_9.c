


#include <stdio.h>

void algoritmo_euclides (int a, int b)
{
    printf("mdc(%d, %d) = ", a, b);
    int counter = 1;
    while (a != b)
    {
        if (a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
        printf("mdc(%d, %d) = ", a, b);
        counter += 1;
    }
    printf("%d \n", a);
    printf("%d iterações \n", counter);
}

int main(void)
{
    int a, b;
    printf("Introduza os números: "); scanf("%d %d", &a, &b);
    algoritmo_euclides(a,b);

    return 0;
}