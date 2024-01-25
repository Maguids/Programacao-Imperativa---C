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

// alínea 6
void ordenar(char **palavras)
{
    int i, j;
    char *temp;

    // Determinar o tamanho do array
    int tamanho = 0;
    while (palavras[tamanho] != NULL){
        tamanho++;
    }
    // Ordenar
    for (i = 0; i < tamanho - 1; i++){
        for (j = i + 1; j < tamanho; j++){
            if (strcmp(palavras[i], palavras[j]) > 0){
                temp = palavras[i];
                palavras[i] = palavras[j];
                palavras[j] = temp;
            }
        }
    }

    for (i = 0; i < tamanho; i++){
        printf("%s\n", palavras[i]);
    }
}
//

// enunciado
int main(void)
{
    char *palavras[MAX_PALAVRAS];
    ler_palavras(palavras);

    // alinea 6
    ordenar(palavras);

    // apenas para confirmar se 'palavras' está correto
    // printf("Palavras digitadas:\n");
    // for (int i = 0; palavras[i] != NULL; i++)
    // {
    //     printf("%s\n", palavras[i]);
    // }
}