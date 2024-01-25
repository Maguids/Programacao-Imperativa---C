#include <stdio.h>
#include "dados.h"

int comparar_nome(char *nome, char *nome_2)
{
    while (*nome != '\0' && *nome == *nome_2){
        nome++;
        nome_2++;
    }
    return(*nome == *nome_2);
}

void imprimir_disciplinas(int i)
{
    for( int j = 0; j < Alunos[i].nd; j++){
        int n_disciplina = Alunos[i].disc[j] - 1;
        char *disciplina = Disc[n_disciplina].nome;
        printf("%s \n", disciplina);
    }
}

int disciplinas_de_Alunos(char *nome)
{
    for (int i = 0; i < NAlunos; i++){
        if(comparar_nome(nome, Alunos[i].nome) == 1){
            printf("%s está nas seguintes disciplinas: \n", nome);
            imprimir_disciplinas(i);
            return Alunos[i].nd;
        }
    }
    return 0;
}

int main(void)
{
    char nome[] = "Joao Maria Peixoto";
    disciplinas_de_Alunos(nome);
}