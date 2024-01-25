#include <stdio.h>
#include "dados.h"

int varios_anos(int posaluno)
{
    int resposta = 0;
    int guardador;
    for (int i = 0; i < Alunos[posaluno].nd; i++){
        int k = Alunos[posaluno].disc[i] - 1;
        if (i == 0){
            guardador = Disc[k].ano;
        }
        if(guardador != Disc[k].ano){
            resposta = 1;
        }
    }
    return resposta;
}

int main(void)
{
    int posaluno = 3;
    int resposta = varios_anos(posaluno);
    printf("%d\n", resposta);
}