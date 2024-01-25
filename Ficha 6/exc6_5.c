#include <stdio.h>

void sort_desc(int vec[], int n)
{
    int i, j, guardador;
    for(i = 0; i < n; i++){
        guardador = i;
        for(j = i + 1; j < n; j ++){
            if(vec[j] > vec[guardador]){
                guardador = j;
            }
        }
        if (guardador != i){
            int temporaria = vec[i];
            vec[i] = vec[guardador];
            vec[guardador] = temporaria;
        }
    }
}

int main(void)
{
    int vec[1000];
    int size = 0;
    int numero;

    printf("Insira a sequencia. Esta será terminada por '0'. \n");
    scanf("%d", &numero);
    while (numero != '\0')
    {
        vec[size] = numero;
        size++;
        scanf("%d", &numero);
    }

    sort_desc(vec, size);
    printf("Nova lista: ");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}