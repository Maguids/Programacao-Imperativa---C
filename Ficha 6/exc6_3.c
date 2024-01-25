#include <stdio.h>

void ordenar(int vec[], int size)
{
    int i, j, guardador;
    for (i = 0; i < size; i++){
        guardador = i;
        for (j = i + 1; j < size; j++){
            if(vec[j] < vec[guardador]){
                guardador = j;
            }
        }
        if (guardador != i){
            int temporario = vec[i];
            vec[i] = vec[guardador];
            vec[guardador] = temporario;
        }
    }
}



int main(void)
{
    int vec[1000];
    int size = 0;
    int numero;

    printf("Insira a sequencia. Esta será terminada por '0'. "); scanf("%d", &numero);
    while (numero != 0){
        vec[size] = numero;
        size ++;
        scanf("%d", &numero);
    }

    ordenar(vec, size);
    printf("Nova lista: ");
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
}