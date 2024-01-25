#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALAVRAS 20
#define MAX_SIZE 20

// enunciado
int ler_palavras(char **palavras)
{
    printf("Digite as palavras. Para terminar digite uma palavra vazia\n");

    int n = 1;
    int indice = 0;
    char palavra[MAX_SIZE] = "1";

    while (1)
    {
        printf("Palavra %d: ", n);
        fgets(palavra, MAX_SIZE, stdin);

        if (strcmp(palavra, "\n") == 0)
        {
            break;
        }

        palavra[strcspn(palavra, "\n")] = '\0';

        palavras[indice] = (char *)malloc(strlen(palavra) + 1);
        strcpy(palavras[indice], palavra);

        n++;
        indice++;
    }
    return n - 1;
}
//

// alínea 2
void corrigir_palavra(char **palavras, int i){
    free(palavras[i]); //como a palavra já não é precisa não há a necessidade de ocupar memória
    int j;
    for (j = i; palavras[j] != NULL; j++){
        palavras[j] = palavras[j+1];
    }
}

void rem_palavra(char **palavras, char *palavra){
    for (int i = 0; palavras[i] != NULL; i++){
        if (strcmp(palavras[i], palavra) == 0){
            corrigir_palavra(palavras, i);
            break;
        }
    }
}
//

// enunciado
int main(void)
{
    char *palavras[MAX_PALAVRAS];
    ler_palavras(palavras);

    //alinea 2
    printf("Introduza a palavra que quer remover: ");
    char palavra[MAX_SIZE];
    fgets(palavra, MAX_SIZE, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    rem_palavra(palavras, palavra);

    // apenas para confirmar se 'palavras' está correto
    printf("Palavras digitadas:\n");
    for (int i = 0; palavras[i] != NULL; i++){
        printf("%s\n", palavras[i]);
    }
}