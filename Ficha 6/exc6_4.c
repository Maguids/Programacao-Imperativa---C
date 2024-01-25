#include <stdio.h>

void segundo_menor(int vec[], int n)
{
    int i, j, guardador;
    for (i = 0; i == 3; i++){
        guardador = i;
        for(j = i + 1; j < n; j++){
            if(vec[j] < vec[guardador]){
                guardador = j;
            }
        }
        if(guardador != i){
            int temporario = vec[i];
            vec[i] = vec[guardador];
            vec[guardador] = temporario;
        }
    }
}

int main(void){
    int vec[1000];
    int n = 0;
    int numero;

    printf("Insira a sequencia. Esta será terminada por '0'. \n");
    scanf("%d", &numero);
    while (numero != '\0')
    {
        vec[n] = numero;
        n++;
        scanf("%d", &numero);
    }
    segundo_menor(vec, n);
    printf("Nova lista: ");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");

    return 0;
}