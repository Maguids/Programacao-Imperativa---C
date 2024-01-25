#include <stdio.h>

int filtrar_positivos(int vec[], int size){
    int i, contador;
    contador = 0;
    for(i = 0; i < size; i++){
        if (vec[i] > 0) {
            vec[contador] = vec[i];
            contador++;
        }
    }
    return contador;
}

int main(void){
    int vec[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    printf("%d \n", filtrar_positivos(vec, size));

}