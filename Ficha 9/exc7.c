#include <stdio.h>
#include <math.h>

typedef struct ponto{
    double x, y;
} Ponto;

//alínea 1
double distancia(Ponto a, Ponto b)
{
    double distancia;
    distancia = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return distancia;
}

//alínea 2
int mesmo_ponto(Ponto a, Ponto b)
{
    double distancia = distancia(a,b);
    if (distancia < 0.000001){
        return 1;
    }
    return 0;
}

//alínea 3

int pontos_mais_distantes()
{
    //ler os 10 pontos
    Ponto lista_pontos[10];
    for(int i = 0; i < 10; i++){
        Ponto p;
        printf("Indique as coordenadas do ponto (x y -> 1 2)"); scanf("%lf %lf", &p.x, &p.y);
        lista_pontos[i] = p;
    }

    Ponto a, b;
    double distancia_maxima = -1.0;
    
    for(int j = 0; j < 10; j++){
        for(int k = 0; k < 10; k++){
            double distancia = distancia(lista_pontos[j], lista_pontos[k]);
            if (distancia > distancia_maxima){
                distancia_maxima = distancia;
                a = lista_pontos[j];
                b = lista_pontos[k];
            }
        }
    }
    printf("Ponto 1: (%lf, %lf)\n Ponto 2: (%lf, %lf)\n Distância: %lf", a.x, a.y, b.x, b.y, distancia_maxima);
}

//alínea 4
typedef struct rect {
    Ponto i_e, s_d;             //i_e = inferior esquerdo; s_d = superior direito
} Rect;

//alinea 5
double rect_area(Rect r)
{
    double comprimento = abs(r.i_e.x - r.s_d.x);
    double largura = abs(r.i_e.y -r.s_d.y);
    double area = comprimento * largura;
    return area;
}

//aliena 6
int ponto_dentro(Rect r, Ponto p)
{
    if (r.i_e.x < p.x && p.x < r.s_d.x){
        if (r.i_e.y < p.y && p.y < r.s_d.y){
            return 1;
        }
    }
    return 0;
}

//aliena 7
int rect_dentro(Rect r1, Rect r2)
{
    if (r1.i_e.x < r2.i_e.x && r1.s_d.y < r2.i_e.y){
        if (r2.s_d.x < r1.s_d.x && r2.s_d.y < r1.s_d.y){
            return 1;
        }
    }
    return 0;
}

//ou

int rect_dentro_2(Rect r1, Rect r2)
{
    if(ponto_dentro(r1, r2.i_e) && ponto_dentro(r1, r2.s_d)){
        return 1;
    }
    return 0;
}