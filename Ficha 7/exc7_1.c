#include <stdio.h>
#define N 100

int in_resposta(int resposta[], int n, int size)
{
    for(int i = 0; i < size; i++){
        if(resposta[i] == n) return 1;
    }
    return 0;
}

int elimina_repetidos(int num[], int resposta[], int size)
{
    int j = 0;
    for(int i = 0; i < size; i++){
        if(!in_resposta(resposta, num[i], size)){
            resposta[j] = num[i];
            j++;
        }
    }
    return j;
}



int main(){
    int num[N] = {0};
    int resposta[N] = {0};

    int n, i = 0;
    scanf("%d", &n);
    while (n != -1){
        num[i] = n;
        i++;
        scanf("%d", &n);
    }

    int j = elimina_repetidos(num, resposta, N);
    for(int i = 0; i < j; i++){
        printf("%d \n", resposta[i]);
    }
    return 0;
}