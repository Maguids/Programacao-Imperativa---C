#include <stdio.h>
#include "dados.h"

//função do exercício 5
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

// função do exercício 5
int numero_medio(char *curso)
{
    int soma = 0;
    int n_alunos = 0;
    for (int i = 0; i < NAlunos; i++){
        if (esta_no_curso(curso, i) == 1){
            n_alunos++;
            soma += Alunos[i].nd;
        }
    }
    if (n_alunos != 0){
        return (soma / n_alunos);
    } else{
        return -1;
    }
}

int muitas_disciplinas(char *curso, int *indices)
{
    int n_alunos = 0;
    int media = numero_medio(curso);
    for (int i = 0; i < NAlunos; i++){
        if (esta_no_curso(curso, i) == 1 && Alunos[i].nd > media){
            *indices = i;
            indices++;
            n_alunos++;
            printf("%s \n", Alunos[i].nome);
        }
    }
    return n_alunos;
    
}

int main(void)
{
    char curso[MAX]= "020";
    int indices[MAX];
    int n_alunos = muitas_disciplinas(curso, indices);
    for (int j = 0; j < n_alunos; j++){
        printf(" %d ", indices[j]);
    }
    printf("\n");
    return 0;
}


