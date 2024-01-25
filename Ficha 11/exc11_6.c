#include <stdio.h>
#include <string.h>

int main(void)
{
    int contar_p = 0;
    char frase[100];

    FILE *file;
    file = fopen("exc_11_3.txt", "r");

    while(fgets(frase, 100, file) != NULL){
        frase[strcspn(frase, "\n")] = '\0';
        char *palavra = strtok(frase, " \t\n");
        while(palavra != NULL){
            contar_p++;
            palavra = strtok(NULL, " \t\n");
        }
    }
    fclose(file);

    printf("Há %d palavras \n", contar_p);
}