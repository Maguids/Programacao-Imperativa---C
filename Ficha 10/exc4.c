#include <stdio.h>
#include "dados.h"

int indice_disciplina(char *disciplina)
{
    for (int i = 0; i < NDisc; i++){
        int j = 0;
        while( *disciplina != '\0' && *disciplina == Disc[i].nome[j]){
            disciplina++;
            j++;
        }
        if (*disciplina == Disc[i].nome[j]){
            return i + 1; //na struct alunos dada no enunciado a lista das disciplinas está errada se for {1,5}, na realideade é {0,4}
        }
    }
    return -1;
}

int aluno_na_disciplina(int numero_disc, int i)
{
    for (int j = 0; j < Alunos[i].nd; j++){
        if(numero_disc == Alunos[i].disc[j]){
            return 1;
        }
    }
    return 0;
}

int alunos_de_disciplina(char *disciplina, int *indices)
{
    int aux = 0;
    int numero_disc = indice_disciplina(disciplina);
    for (int i = 0; i < NAlunos; i++){
        if(aluno_na_disciplina(numero_disc, i) == 1){
            *indices = i;
            indices++;
            aux++;
            printf("%s \n", Alunos[i].nome);
        }
    }
    return aux;
}

int main(void)
{
    char disciplina[] = "Calculo Infinitesimal I";
    int indices[9];
    int n = alunos_de_disciplina(disciplina, indices);
    printf("%d \n", n);
    
    return 1;
}