#include <stdio.h>
#include "dados.h"

int esta_no_curso(char *curso, int i)
{
    int aux = 0;
    int j = 4;
    while (*curso != '\0' && *curso == Alunos[i].codigo[j]){
        curso++;
        j++;
        aux++;
    }
    if (aux == 3){
        return 1;
    } else {
        return 0;
    }
}


int numero_medio(char *curso)
{
    int soma = 0;
    int n_alunos = 0;
    for (int i = 0; i < NAlunos; i++){
        if(esta_no_curso(curso, i) == 1){
            n_alunos++;
            soma += Alunos[i].nd;
            printf("%s \n", Alunos[i].nome);
        }
    }
    if (n_alunos != 0){
        return(soma/n_alunos);
    } else {
        return -1;
    }
}

int main(void)
{
    char curso[MAX] = "018";
    int media = numero_medio(curso);
    if (media == -1){
        printf("Não há ninguem nesse curso \n");
    } else {
        printf("%d \n", media);
    }
    
    return 0;
}