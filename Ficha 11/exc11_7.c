#include <stdio.h>
#include <stdlib.h>

void unirArquivos(const char *arquivo1, const char *arquivo2, const char *arquivoUniao)
{
    FILE *file1 = fopen(arquivo1, "r");
    FILE *file2 = fopen(arquivo2, "r");
    FILE *fileUniao = fopen(arquivoUniao, "w");

    if (file1 == NULL || file2 == NULL || fileUniao == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    int caractere;

    // Copiar conteúdo do arquivo 1 para o arquivo de união
    while ((caractere = fgetc(file1)) != EOF)
    {
        fputc(caractere, fileUniao);
    }

    // Copiar conteúdo do arquivo 2 para o arquivo de união
    while ((caractere = fgetc(file2)) != EOF)
    {
        fputc(caractere, fileUniao);
    }

    fclose(file1);
    fclose(file2);
    fclose(fileUniao);

    printf("Os arquivos foram unidos com sucesso.\n");
}

int main(void)
{
    const char *arquivo1 = "ficheiro1.txt";
    const char *arquivo2 = "ficheiro2.txt";
    const char *arquivoUniao = "uniao.txt";

    unirArquivos(arquivo1, arquivo2, arquivoUniao);

    return 0;
}
