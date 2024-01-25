#include <stdio.h>
#include "dados.h"

int comprimento_nome(char str[])
{
    int i = 0, comprimento = 0;
    while (str[i] != '\0'){
        comprimento++;
        i++;
    }
    return comprimento;
}

int palavra_in_nome(char *palavranome, char nome_completo[])
{
    int palavra_c = comprimento_nome(palavranome);
    int i = 0;
    while (nome_completo[i] != '\0'){
        int j = 0;
        while (palavranome[j] != '\0' && palavranome[j] == nome_completo[i+j]){
            j++;
        }
        if (j == palavra_c){
            return 1;
        }
        i++;
    }
    return 0;
}

void procura(char *palavranome)
{
    printf("Alunos cujo nome inclui %s:\n", palavranome);
    for (int i = 0; i < NAlunos; i++){
        if(palavra_in_nome(palavranome, Alunos[i].nome) == 1){
            printf("%s %s\n", Alunos[i].codigo, Alunos[i].nome);
        }
    }
}

int main()
{
    char *palavranome = "Maria";
    procura(palavranome);

    return 0;
}