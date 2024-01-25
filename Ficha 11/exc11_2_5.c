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

// alínea 5
void cifrar(char **palavras)
{
    for(int i = 0; palavras[i] != NULL; i++){
        for (int j = 0; palavras[i][j] != '\0'; j++){
            if (palavras[i][j] >= 'A' && palavras[i][j] <= 'Z')
            {
                palavras[i][j] = ((palavras[i][j] - 'A' + 13) % 26) + 'A';
            }
            else if (palavras[i][j] >= 'a' && palavras[i][j] <= 'z')
            {
                palavras[i][j] = ((palavras[i][j] - 'a' + 13) % 26) + 'a';
            }
        }
        printf("%s \n", palavras[i]);
    }
}
//

// enunciado
int main(void)
{
    char *palavras[MAX_PALAVRAS];
    ler_palavras(palavras);

    // alinea 5
    cifrar(palavras);

    // apenas para confirmar se 'palavras' está correto
    // printf("Palavras digitadas:\n");
    // for (int i = 0; palavras[i] != NULL; i++)
    // {
    //     printf("%s\n", palavras[i]);
    // }
}