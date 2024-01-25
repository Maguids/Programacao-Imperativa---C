#include <stdio.h>
#include <string.h>


int numero_linhas(char *nome_ficheiro)
{
    char frase[100];
    int contador = 0;

    FILE *file;
    file = fopen(nome_ficheiro, "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    while(fgets(frase, 100, file) != NULL){
        contador++;
    }

    fclose(file);
    return(contador);
}

int main(void)
{
    char nome_ficheiro[] = "exc_11_3.txt";
    int n = numero_linhas(nome_ficheiro);

    printf("%d\n", n);

    return 0;
}