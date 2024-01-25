#include <stdio.h>
#include "dados.h"

int esta_cursoano(char *cursoano, int i)
{
    int j = 0;
    int aux = 0;
    while (*cursoano != '\0' && *cursoano == Alunos[i].codigo[j]){
        cursoano++;
        j++;
        aux++;
    }
    if (aux == 7){
        return 1;
    } else {
        return 0;
    }
}

int numero_maximo(char *cursoano)
{
    int n_maximo = 0;
    for (int i = 0; i < NAlunos; i++){
        if(esta_cursoano(cursoano, i) == 1){
            int x = Alunos[i].nd;
            printf("%s \n", Alunos[i].nome);
            if (x > n_maximo){
                n_maximo = x;
            }
        }
    }
    return n_maximo;
}

int main(void)
{
    char cursoano[7] = "2000020";
    int n_maximo = numero_maximo(cursoano);
    printf("%d \n", n_maximo);
}