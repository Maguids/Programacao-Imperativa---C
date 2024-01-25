#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 100
#define VEC_SIZE 100

int main(void){
    char *vec[VEC_SIZE];
    char frase[STRING_SIZE];

    FILE *file;
    file = fopen("exc_11_3.txt", "r");
    int i = 0;
    while(fgets(frase, STRING_SIZE, file) != NULL){
        frase[strcspn(frase, "\n")] = '\0';
        vec[i] = malloc(strlen(frase) + 1);
        strcpy(vec[i], frase);
        i++;
    }
    fclose(file);

    
    //print ao vetor
    for(int j = 0; j < i; j++){
        printf("Frase %d: %s\n", j+1, vec[j]);
    }
    
    return 0;
}