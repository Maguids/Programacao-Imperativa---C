#include <stdio.h>

typedef struct data{
    int dia, mes, ano
} Data;

int valor(Data n)
{
    return (10000 * n.ano + 100 * n.mes + n.dia);
}

//alínea 1
void ordena_datas(Data vec_datas[], int size)
{
    for (int i = 0; i < size; i++){
        Data aux = vec_datas[i];
        int j = i - 1;
        while( j >= 0 && valor(vec_datas[j]) > valor(aux)){
            vec_datas[j+1] = vec_datas[j];
            j--;
        }
        vec_datas[j+1] = aux;
    }
}

//alínea 2
Data menor_data(Data vec_datas[], int size)
{
    ordena_datas(vec_datas[], size);
    return vec_datas[0];
}

//alínea 3
void datas_ano(Data vec_datas[], int size, int ano)
{
    int aux = 0;
    for (int i = 0; i < size; i++){
        if (vec_datas[i].ano == ano){
            printf("%d %d %d", vec_datas[i].dia, vec_datas[i].mes, vec_datas[i].ano);
            aux = 1;
        }
    }

    if (aux == 0){
        printf("Não há datas com o ano %d", ano);
    }
}

void main()
{
    int vec_datas[];
    for (int i = 0; i < 10; i++){
        Data aux;
        printf("Insira a data (dia mes ano):"); scanf("%d %d %d", &aux.dia, &aux.mes, &aux.ano);
        if (aux.dia == -1){
            break;
        } else {
            vec_datas[i] = aux;
        }
    }
}