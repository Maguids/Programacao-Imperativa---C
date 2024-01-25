#include <stdio.h>

int main(void)
{
    int n;
    printf("Insira o número de linhas: "); scanf("%d", &n);

    FILE *file;
    file = fopen("exc_11_3.txt", "w");
    fprintf(file, "Número de linhas: %d\n", n);
    for (int i = 0; i < n; i++){
        if (i != 3){
        fprintf(file, "linha %d\n", i+1);
        } else {
            fprintf(file, "linha %d", i+1);
        }
    }
    fclose(file);
}