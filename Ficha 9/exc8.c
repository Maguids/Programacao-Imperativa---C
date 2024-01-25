#include <stdio.h>

typedef struct data{
    int dia, mes, ano;
} Data;

//alínea 1
int comparar(Data d1, Data d2)
{
    int valor1 = d1.dia + d1.mes * 100 + d1.ano * 10000;
    int valor2 = d2.dia + d2.mes * 100 + d2.ano * 10000;

    if (valor1 != valor2){
        if(valor1 > valor2){
            return 1;
        } else {
            return -1;
        }
    }
    return 0;
}

//alínea 2
//consideramos que todos os meses tem 30 dias
Data diff(Data d1, Data d2)
{
    Data resposta;
    int dias1 = d1.dias + d1.mes * 30 + d1.ano * 12 * 30;
    int dias2 = d2.dias + d2.mes * 30 + d2.ano * 12 * 30;

    int dif = abs(dias1 - dias2);

    resposta.anos = dif / (12*30):
    dif = dif % (12*30);
    resposta.mes = dif / (30);
    dif = dif % (30);
    resposta.dias = dif;

    return resposta;
}


//ler duas datas da entrada padrão
void main()
{
    Data d1, d2;
    printf("Introduza os valores de d1 (dia mes ano)"); scanf("%d, %d, %d", &d1.dia, &d1.mes, &d1.ano);
    printf("Introduza os valores de d1 (dia mes ano)"); scanf("%d, %d, %d", &d2.dia, &d2.mes, &d2.ano);
}