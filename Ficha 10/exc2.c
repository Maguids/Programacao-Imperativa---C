#include <stdio.h>
#include "dados.h"

int comparar(char *codigo, char *code)
{
    while(*codigo != '\0' && *codigo == *code){
        codigo++;
        code++;
    }
    return (*codigo == *code);
}

void atualizar_nome (char *name, char *nome)
{
    while(*name != '\0'){
        *nome = *name;
        nome++;
        name++;
    }
    *nome = '\0';
}

int codigo2Aluno(char *codigo, char *nome)
{
    for (int i = 0; i < MAXALUNOS; i++){
        if(comparar(codigo, Alunos[i].codigo) == 1){
            atualizar_nome(Alunos[i].nome, nome);
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char nome[MAXNOME], codigo[MAX] = "200008001";
    codigo2Aluno(codigo, nome);
    printf("%s \n", nome);
}