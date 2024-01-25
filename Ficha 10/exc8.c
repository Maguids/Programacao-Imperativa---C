#include <stdio.h>
#include "dados.h"

int numero_disc(int posaluno, int ano)
{
    int aux = 0;
    for(int i = 0; i < Alunos[posaluno].nd; i++){
        int k = Alunos[posaluno].disc[i] - 1;
        if (Disc[k].ano == ano){
            aux++;
            printf("%s \n", Disc[k].nome);
        }
    }
    return aux;
}

int main(void)
{
    int posaluno = 3;
    int ano = 1;
    int n = numero_disc(posaluno, ano);
    printf("%d \n", n);
}