#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int numero;
    struct node *next;
} NODE;

//aliena 1
//criar elementos sem os colocar na lista (ou seja next = NULL) e atribuição do numero
NODE *novo_elemento(int numero)
{
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));

    //temos de confirmar que e facto foi dado espaço de memória
    if (p != NULL){
        p->numero = numero;
        p->next = NULL;
    }
    return p;
}

//alinea 2
//colocar elementos no início da fila
// first designa que é o primeiro elemento da lista
NODE *criar_elemento_inicio(NODE *first, int numero)
{
    NODE *p = novo_elemento(numero); //criamos o elemento que vamos colocar no inicio da lista
    //agora associamos esse novo elemento ao first, passando o novo elemento a ser o novo first
    p->next = first;
    return p;
}

//alinea 3
//imprimir os valores da lista
void imprimir(NODE *first)
{
    NODE *p = NULL; //criar um apontador para circular pela fila
    if (first == NULL){
        printf("A lista está vazia.");
    } else{
        printf("Os elementos da lista são: ");
        for (p = first; p != NULL; p = p->next){
            printf("%d ", p->numero);
        }
    }
    printf("\n");
}

//alinea 4
//desta vez vamos inserir valores no fim da fila
NODE *criar_elemento_fim(NODE *first, int numero)
{
    //criamos o novo elemento
    NODE *novo = novo_elemento(numero);

    //criamos o apontador para andar pela fila
    NODE *p = NULL;

    if (novo == NULL){ //não foi possivel alocar memória para o novo dado
        return first;
    } else if (first == NULL){ //nesto caso a lista encontrava-se vazia
        first = p;
        return first;
    } else {
        //procuramos o ultimo elemento da lista
        for(p = first; p->next != NULL; p = p->next);
        p->next = novo;
        return first;
    }
}

//alíne 5
//eliminar um elemento de lista que tenha x 'numero'
NODE *eliminar_elemento(NODE *first, int numero)
{
    NODE *pa = NULL; //ponteiro anterior a p
    NODE *p = NULL; //ponteiro que se desloca na fila

    //p avança e só para ao encontrar o 'numero' ou quando alista terminar
    for(p = first; p != NULL && p->numero != numero; p = p->next, pa = pa->next);

    if(p == NULL){  //elemento não está na fila
        return first;
    } else if (pa == NULL){ //é o primeiro elemento
        first = first->next;
    } else{  
        pa->next = p->next;
    }
    free(p);
    return first;
}

//alínea 7
//procurar um elemento na lista e dá return do mesmo
NODE *procurar(NODE *first, int numero)
{
    NODE *p = NULL; //criar um ponteiro que circula na lista
    //só para de procurar quando encontra ou quando a lista acaba
    for (p = first; p != NULL; p = p->next){
        if (p->numero == numero){
            return p;
        }
    }
    return NULL;
}

//alínea 8
//apagar uma lista na totalidade
void apagar_lista(NODE *first)
{
    NODE *p = NULL; //apondador que anda pela lista
    while (first != NULL){
        p = first;
        first = first->next;
        free(p);
    }
}

//---------------------------------------------------------------------
int main(void)
{
    //alínea 1
    NODE *first = NULL;
    printf("- Confirmação alínea 1:\n");
    imprimir(first);

    //alínea 2
    //como vamos adicionar valores ao inicio vamos atualizar o apontador first (o antigo primeiro elemento)
    first = criar_elemento_inicio(first, 10);
    //voltamos a atualizar para o próximo valor
    first = criar_elemento_inicio(first, 20);

    //alínea 3
    printf("- Alínea 2 e 3:\n");
    imprimir(first);

    //alinea 4
    //apesar de adicionarmos um elemento no fim, retornamos o inicio da fila, para sabermos sempre qual é
    first = criar_elemento_fim(first, 30);
    first = criar_elemento_fim(first, 40);
    printf("- Confirmação alínea 4:\n");
    imprimir(first);

    //alínea 5
    first = eliminar_elemento(first, 20);

    //alínea 6
    printf("- Alínea 5 e 6:\n");
    imprimir(first);

    //alínea 7
    //NODE *valor_15; //se o 15 não for encontrado então é igual a NULL
    //valor_15 = procurar(first, 15);

    //alínea 8
    apagar_lista(first);

    //alínea 9
    printf("- Alínea 9:\n");
    imprimir(first);
}