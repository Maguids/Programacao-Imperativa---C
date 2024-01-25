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

// alínea 1
void maior(char **palavras)
{
    int n_caracteres = strlen(palavras[0]);
    int indice = 0;

    for (int i = 1; palavras[i] != NULL; i++)
    {
        int tamanho_atual = strlen(palavras[i]);
        if (tamanho_atual > n_caracteres)
        {
            n_caracteres = tamanho_atual;
            indice = i;
        }
    }

    printf("%s\n", palavras[indice]);
}
//


// enunciado
int main(void)
{
    char *palavras[MAX_PALAVRAS];
    ler_palavras(palavras);
    maior(palavras);
}
//