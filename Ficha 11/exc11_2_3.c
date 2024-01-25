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

// alínea 3
void sem_repetidos(char **palavras)
{
    for (int i = 0; palavras[i] != NULL; i++){
        int repetido = 0;
        for(int j = 0; palavras[j] != NULL; j++){
            if (palavras[i] != palavras[j] && strcmp(palavras[i], palavras[j]) == 0){
                repetido = 1;
            }
        }
        if (repetido == 0){
            printf("%s não é repetido \n", palavras[i]);
        }
    }
}
//

// enunciado
int main(void)
{
    char *palavras[MAX_PALAVRAS];
    ler_palavras(palavras);

    // alinea 3
    sem_repetidos(palavras);

    // apenas para confirmar se 'palavras' está correto
    // printf("Palavras digitadas:\n");
    // for (int i = 0; palavras[i] != NULL; i++)
    // {
    //     printf("%s\n", palavras[i]);
    // }
}